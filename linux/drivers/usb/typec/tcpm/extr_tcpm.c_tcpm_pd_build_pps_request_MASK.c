
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int max_volt; unsigned int max_curr; unsigned int out_volt; unsigned int op_curr; } ;
struct tcpm_port {unsigned int operating_snk_mw; scalar_t__ vconn_role; TYPE_1__ pps_data; int polarity; int vbus_source; int cc2; int cc1; int cc_req; int * source_caps; } ;
typedef enum pd_pdo_type { ____Placeholder_pd_pdo_type } pd_pdo_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tcpm_port*,char*,...) ;
 unsigned int FUNC_4 (struct tcpm_port*) ;

__attribute__((used)) static int FUNC_5(struct tcpm_port *VAR_8, u32 *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 enum pd_pdo_type VAR_16;
 unsigned int VAR_17;
 u32 VAR_18;

 VAR_17 = FUNC_4(VAR_8);
 if (!VAR_17)
  return -VAR_2;

 VAR_18 = VAR_8->source_caps[VAR_17];
 VAR_16 = FUNC_2(VAR_18);

 switch (VAR_16) {
 case 128:
  if (FUNC_1(VAR_18) != VAR_0) {
   FUNC_3(VAR_8, "Invalid APDO selected!");
   return -VAR_1;
  }
  VAR_13 = VAR_8->pps_data.max_volt;
  VAR_14 = VAR_8->pps_data.max_curr;
  VAR_10 = VAR_8->pps_data.out_volt;
  VAR_11 = VAR_8->pps_data.op_curr;
  break;
 default:
  FUNC_3(VAR_8, "Invalid PDO selected!");
  return -VAR_1;
 }

 VAR_15 = VAR_6 | VAR_3;

 VAR_12 = (VAR_11 * VAR_10) / 1000;
 if (VAR_12 < VAR_8->operating_snk_mw) {






  VAR_11 = (VAR_8->operating_snk_mw * 1000) / VAR_10;
  if ((VAR_8->operating_snk_mw * 1000) % VAR_10)
   ++VAR_11;
  VAR_11 += VAR_4 - (VAR_11 % VAR_4);

  if (VAR_11 > VAR_14) {
   VAR_11 = VAR_14;
   VAR_10 = (VAR_8->operating_snk_mw * 1000) / VAR_11;
   if ((VAR_8->operating_snk_mw * 1000) % VAR_11)
    ++VAR_10;
   VAR_10 += VAR_5 -
      (VAR_10 % VAR_5);

   if (VAR_10 > VAR_13) {
    FUNC_3(VAR_8, "Invalid PPS APDO selected!");
    return -VAR_1;
   }
  }
 }

 FUNC_3(VAR_8, "cc=%d cc1=%d cc2=%d vbus=%d vconn=%s polarity=%d",
   VAR_8->cc_req, VAR_8->cc1, VAR_8->cc2, VAR_8->vbus_source,
   VAR_8->vconn_role == VAR_7 ? "source" : "sink",
   VAR_8->polarity);

 *VAR_9 = FUNC_0(VAR_17 + 1, VAR_10, VAR_11, VAR_15);

 FUNC_3(VAR_8, "Requesting APDO %d: %u mV, %u mA",
   VAR_17, VAR_10, VAR_11);

 VAR_8->pps_data.op_curr = VAR_11;
 VAR_8->pps_data.out_volt = VAR_10;

 return 0;
}
