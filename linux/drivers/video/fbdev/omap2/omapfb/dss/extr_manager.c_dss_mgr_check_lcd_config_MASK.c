
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int dummy; } ;
struct dispc_clock_info {int lck_div; int pck_div; } ;
struct dss_lcd_mgr_config {int video_port_width; int stallmode; int fifohandcheck; struct dispc_clock_info clock_info; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct omap_overlay_manager *VAR_1,
  const struct dss_lcd_mgr_config *VAR_2)
{
 struct dispc_clock_info VAR_3 = VAR_2->clock_info;
 int VAR_4 = VAR_2->video_port_width;
 bool VAR_5 = VAR_2->stallmode;
 bool VAR_6 = VAR_2->fifohandcheck;

 if (VAR_3.lck_div < 1 || VAR_3.lck_div > 255)
  return -VAR_0;

 if (VAR_3.pck_div < 1 || VAR_3.pck_div > 255)
  return -VAR_0;

 if (VAR_4 != 12 && VAR_4 != 16 && VAR_4 != 18 && VAR_4 != 24)
  return -VAR_0;


 if (!VAR_5 && VAR_6)
  return -VAR_0;







 return 0;
}
