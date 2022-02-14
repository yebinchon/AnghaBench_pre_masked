
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_transport_params {int port_num; int blk_grp_ctrl; int blk_pkg_mode; int offset1; int offset2; int hstart; int hstop; int lane_ctrl; int sample_interval; } ;
struct sdw_cdns {int dummy; } ;
struct sdw_bus {int dummy; } ;
typedef enum sdw_reg_bank { ____Placeholder_sdw_reg_bank } sdw_reg_bank ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 struct sdw_cdns* FUNC_9 (struct sdw_bus*) ;
 int FUNC_10 (struct sdw_cdns*,int) ;
 int FUNC_11 (struct sdw_cdns*,int,int) ;

__attribute__((used)) static int FUNC_12(struct sdw_bus *VAR_7,
     struct sdw_transport_params *VAR_8,
     enum sdw_reg_bank VAR_9)
{
 struct sdw_cdns *VAR_10 = FUNC_9(VAR_7);
 int VAR_11 = 0, VAR_12;
 int VAR_13 = 0, VAR_14;
 int VAR_15 = 0, VAR_16;
 int VAR_17 = VAR_8->port_num;
 int VAR_18;






 if (VAR_9) {
  VAR_14 = FUNC_4(VAR_17);
  VAR_18 = FUNC_7(VAR_17);
  VAR_16 = FUNC_5(VAR_17);
  VAR_12 = FUNC_6(VAR_17);
 } else {
  VAR_14 = FUNC_0(VAR_17);
  VAR_18 = FUNC_3(VAR_17);
  VAR_16 = FUNC_1(VAR_17);
  VAR_12 = FUNC_2(VAR_17);
 }

 VAR_13 = FUNC_10(VAR_10, VAR_14);

 VAR_13 |= (VAR_8->blk_grp_ctrl <<
    FUNC_8(VAR_0));
 VAR_13 |= (VAR_8->blk_pkg_mode <<
    FUNC_8(VAR_1));
 FUNC_11(VAR_10, VAR_14, VAR_13);

 VAR_11 |= (VAR_8->offset1 <<
    FUNC_8(VAR_5));
 VAR_11 |= (VAR_8->offset2 <<
    FUNC_8(VAR_6));
 FUNC_11(VAR_10, VAR_12, VAR_11);

 VAR_15 |= (VAR_8->hstart <<
    FUNC_8(VAR_2));
 VAR_15 |= (VAR_8->hstop << FUNC_8(VAR_3));
 VAR_15 |= (VAR_8->lane_ctrl <<
    FUNC_8(VAR_4));

 FUNC_11(VAR_10, VAR_16, VAR_15);
 FUNC_11(VAR_10, VAR_18, (VAR_8->sample_interval - 1));

 return 0;
}
