
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum dss_pll_id { ____Placeholder_dss_pll_id } dss_pll_id ;
struct TYPE_2__ {int syscon_pll_ctrl_offset; int syscon_pll_ctrl; } ;


 int FUNC_0 (char*,int) ;



 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,int ,int,unsigned int) ;

void FUNC_2(enum dss_pll_id VAR_1, bool VAR_2)
{
 unsigned VAR_3;
 unsigned VAR_4;

 if (!VAR_0.syscon_pll_ctrl)
  return;

 VAR_4 = !VAR_2;

 switch (VAR_1) {
 case 129:
  VAR_3 = 0;
  break;
 case 128:
  VAR_3 = 1;
  break;
 case 130:
  VAR_3 = 2;
  break;
 default:
  FUNC_0("illegal DSS PLL ID %d\n", VAR_1);
  return;
 }

 FUNC_1(VAR_0.syscon_pll_ctrl, VAR_0.syscon_pll_ctrl_offset,
  1 << VAR_3, VAR_4 << VAR_3);
}
