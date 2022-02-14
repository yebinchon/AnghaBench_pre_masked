
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_lcd_mgr_config {int video_port_width; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct dss_lcd_mgr_config VAR_2,
  enum omap_color_mode VAR_3)
{
 if (VAR_3 != VAR_0 && VAR_3 != VAR_1)
  return 0;

 return VAR_2.video_port_width > 16;
}
