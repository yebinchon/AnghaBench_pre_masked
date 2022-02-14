
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum omap_dss_clk_source { ____Placeholder_omap_dss_clk_source } omap_dss_clk_source ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int* lcd_clk_source; int dispc_clk_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

enum omap_dss_clk_source FUNC_1(enum omap_channel VAR_4)
{
 if (FUNC_0(VAR_0)) {
  int VAR_5 = VAR_4 == VAR_1 ? 0 :
   (VAR_4 == VAR_2 ? 1 : 2);
  return VAR_3.lcd_clk_source[VAR_5];
 } else {


  return VAR_3.dispc_clk_source;
 }
}
