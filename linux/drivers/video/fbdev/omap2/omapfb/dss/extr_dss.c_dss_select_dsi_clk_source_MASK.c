
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum omap_dss_clk_source { ____Placeholder_omap_dss_clk_source } omap_dss_clk_source ;
struct TYPE_2__ {int* dsi_clk_source; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;



 int FUNC_2 (int ,int,int,int) ;
 TYPE_1__ VAR_1 ;

void FUNC_3(int VAR_2,
  enum omap_dss_clk_source VAR_3)
{
 int VAR_4, VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_4 = 0;
  break;
 case 129:
  FUNC_1(VAR_2 != 0);
  VAR_4 = 1;
  break;
 case 130:
  FUNC_1(VAR_2 != 1);
  VAR_4 = 1;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_5 = VAR_2 == 0 ? 1 : 10;
 FUNC_2(VAR_0, VAR_4, VAR_5, VAR_5);

 VAR_1.dsi_clk_source[VAR_2] = VAR_3;
}
