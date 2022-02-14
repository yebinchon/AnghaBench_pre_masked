
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sdw_transport_params {int offset2; int blk_pkg_mode; int sample_interval; int hstart; int hstop; int port_num; } ;
struct sdw_slave {int dummy; } ;
struct TYPE_2__ {scalar_t__ next_bank; } ;
struct sdw_bus {int dev; TYPE_1__ params; } ;
typedef enum sdw_dpn_type { ____Placeholder_sdw_dpn_type } sdw_dpn_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct sdw_slave*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct sdw_bus *VAR_3,
       struct sdw_slave *VAR_4,
       struct sdw_transport_params *VAR_5,
       enum sdw_dpn_type VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;
 u16 VAR_12;

 if (VAR_3->params.next_bank) {
  VAR_7 = FUNC_5(VAR_5->port_num);
  VAR_8 = FUNC_1(VAR_5->port_num);
  VAR_9 = FUNC_7(VAR_5->port_num);
  VAR_10 = FUNC_3(VAR_5->port_num);
 } else {
  VAR_7 = FUNC_4(VAR_5->port_num);
  VAR_8 = FUNC_0(VAR_5->port_num);
  VAR_9 = FUNC_6(VAR_5->port_num);
  VAR_10 = FUNC_2(VAR_5->port_num);
 }


 VAR_11 = FUNC_10(VAR_4, VAR_7, VAR_5->offset2);
 if (VAR_11 < 0) {
  FUNC_9(VAR_3->dev, "DPN_OffsetCtrl2 register write failed\n");
  return VAR_11;
 }


 VAR_11 = FUNC_10(VAR_4, VAR_8, VAR_5->blk_pkg_mode);
 if (VAR_11 < 0) {
  FUNC_9(VAR_3->dev, "DPN_BlockCtrl3 register write failed\n");
  return VAR_11;
 }






 if (VAR_6 != VAR_0)
  return VAR_11;


 VAR_12 = (VAR_5->sample_interval - 1);
 VAR_12 &= VAR_2;
 VAR_12 >>= FUNC_8(VAR_2);

 VAR_11 = FUNC_10(VAR_4, VAR_9, VAR_12);
 if (VAR_11 < 0) {
  FUNC_9(VAR_3->dev, "DPN_SampleCtrl2 register write failed\n");
  return VAR_11;
 }


 VAR_12 = VAR_5->hstart;
 VAR_12 <<= FUNC_8(VAR_1);
 VAR_12 |= VAR_5->hstop;

 VAR_11 = FUNC_10(VAR_4, VAR_10, VAR_12);
 if (VAR_11 < 0)
  FUNC_9(VAR_3->dev, "DPN_HCtrl register write failed\n");

 return VAR_11;
}
