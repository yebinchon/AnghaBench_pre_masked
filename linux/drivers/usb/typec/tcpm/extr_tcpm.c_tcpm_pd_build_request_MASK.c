
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {unsigned int operating_snk_mw; scalar_t__ vconn_role; unsigned int current_limit; unsigned int supply_voltage; int polarity; int vbus_source; int cc2; int cc1; int cc_req; int * snk_pdo; int * source_caps; } ;
typedef enum pd_pdo_type { ____Placeholder_pd_pdo_type } pd_pdo_type ;


 int VAR_0 ;



 int FUNC_0 (int,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct tcpm_port*,char*,...) ;
 int FUNC_10 (struct tcpm_port*,int*,int*) ;

__attribute__((used)) static int FUNC_11(struct tcpm_port *VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;
 enum pd_pdo_type VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18;

 VAR_18 = FUNC_10(VAR_5, &VAR_17, &VAR_16);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_14 = VAR_5->source_caps[VAR_16];
 VAR_15 = VAR_5->snk_pdo[VAR_17];
 VAR_13 = FUNC_8(VAR_14);

 switch (VAR_13) {
 case 129:
  VAR_7 = FUNC_4(VAR_14);
  break;
 case 130:
 case 128:
  VAR_7 = FUNC_7(VAR_14);
  break;
 default:
  FUNC_9(VAR_5, "Invalid PDO selected!");
  return -VAR_0;
 }


 if (VAR_13 == 130) {
  VAR_9 = FUNC_3(VAR_14, VAR_15);
  VAR_8 = 1000 * VAR_9 / VAR_7;
 } else {
  VAR_8 = FUNC_2(VAR_14, VAR_15);
  VAR_9 = VAR_8 * VAR_7 / 1000;
 }

 VAR_10 = VAR_3 | VAR_2;


 VAR_11 = VAR_8;
 VAR_12 = VAR_9;
 if (VAR_9 < VAR_5->operating_snk_mw) {
  VAR_10 |= VAR_1;
  if (VAR_13 == 130 &&
      (FUNC_6(VAR_15) > FUNC_6(VAR_14)))
   VAR_12 = FUNC_6(VAR_15);
  else if (FUNC_5(VAR_15) >
    FUNC_5(VAR_14))
   VAR_11 = FUNC_5(VAR_15);
 }

 FUNC_9(VAR_5, "cc=%d cc1=%d cc2=%d vbus=%d vconn=%s polarity=%d",
   VAR_5->cc_req, VAR_5->cc1, VAR_5->cc2, VAR_5->vbus_source,
   VAR_5->vconn_role == VAR_4 ? "source" : "sink",
   VAR_5->polarity);

 if (VAR_13 == 130) {
  *VAR_6 = FUNC_0(VAR_16 + 1, VAR_9, VAR_12, VAR_10);

  FUNC_9(VAR_5, "Requesting PDO %d: %u mV, %u mW%s",
    VAR_16, VAR_7, VAR_9,
    VAR_10 & VAR_1 ? " [mismatch]" : "");
 } else {
  *VAR_6 = FUNC_1(VAR_16 + 1, VAR_8, VAR_11, VAR_10);

  FUNC_9(VAR_5, "Requesting PDO %d: %u mV, %u mA%s",
    VAR_16, VAR_7, VAR_8,
    VAR_10 & VAR_1 ? " [mismatch]" : "");
 }

 VAR_5->current_limit = VAR_8;
 VAR_5->supply_voltage = VAR_7;

 return 0;
}
