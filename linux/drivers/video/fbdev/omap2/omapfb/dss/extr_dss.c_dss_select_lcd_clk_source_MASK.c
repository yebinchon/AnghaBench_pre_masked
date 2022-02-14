
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum omap_dss_clk_source { ____Placeholder_omap_dss_clk_source } omap_dss_clk_source ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int* lcd_clk_source; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_2 (int ,int,int,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void FUNC_5(enum omap_channel VAR_6,
  enum omap_dss_clk_source VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (!FUNC_3(VAR_1)) {
  FUNC_4(VAR_7);
  return;
 }

 switch (VAR_7) {
 case 128:
  VAR_8 = 0;
  break;
 case 129:
  FUNC_1(VAR_6 != VAR_2);
  VAR_8 = 1;
  break;
 case 130:
  FUNC_1(VAR_6 != VAR_3 &&
         VAR_6 != VAR_4);
  VAR_8 = 1;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_10 = VAR_6 == VAR_2 ? 0 :
      (VAR_6 == VAR_3 ? 12 : 19);
 FUNC_2(VAR_0, VAR_8, VAR_10, VAR_10);

 VAR_9 = VAR_6 == VAR_2 ? 0 :
     (VAR_6 == VAR_3 ? 1 : 2);
 VAR_5.lcd_clk_source[VAR_9] = VAR_7;
}
