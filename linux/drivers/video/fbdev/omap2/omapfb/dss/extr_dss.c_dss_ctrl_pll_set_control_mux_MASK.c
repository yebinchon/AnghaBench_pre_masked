
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum dss_pll_id { ____Placeholder_dss_pll_id } dss_pll_id ;
struct TYPE_2__ {int syscon_pll_ctrl_offset; int syscon_pll_ctrl; } ;


 int FUNC_0 (char*) ;






 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,int ,int,unsigned int) ;

void FUNC_2(enum dss_pll_id VAR_1,
 enum omap_channel VAR_2)
{
 unsigned VAR_3, VAR_4;

 if (!VAR_0.syscon_pll_ctrl)
  return;

 switch (VAR_2) {
 case 130:
  VAR_3 = 3;

  switch (VAR_1) {
  case 132:
   VAR_4 = 0; break;
  case 133:
   VAR_4 = 1; break;
  default:
   FUNC_0("error in PLL mux config for LCD\n");
   return;
  }

  break;
 case 129:
  VAR_3 = 5;

  switch (VAR_1) {
  case 132:
   VAR_4 = 0; break;
  case 131:
   VAR_4 = 1; break;
  case 133:
   VAR_4 = 2; break;
  default:
   FUNC_0("error in PLL mux config for LCD2\n");
   return;
  }

  break;
 case 128:
  VAR_3 = 7;

  switch (VAR_1) {
  case 132:
   VAR_4 = 1; break;
  case 131:
   VAR_4 = 0; break;
  case 133:
   VAR_4 = 2; break;
  default:
   FUNC_0("error in PLL mux config for LCD3\n");
   return;
  }

  break;
 default:
  FUNC_0("error in PLL mux config\n");
  return;
 }

 FUNC_1(VAR_0.syscon_pll_ctrl, VAR_0.syscon_pll_ctrl_offset,
  0x3 << VAR_3, VAR_4 << VAR_3);
}
