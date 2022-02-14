
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_video_timings {scalar_t__ vsync_level; scalar_t__ hsync_level; int interlace; } ;
struct hdmi_wp_data {int base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct hdmi_wp_data *VAR_2,
  struct omap_video_timings *VAR_3)
{
 u32 VAR_4;
 bool VAR_5, VAR_6;
 FUNC_0("Enter hdmi_wp_video_config_interface\n");

 VAR_5 = VAR_3->vsync_level == VAR_1;
 VAR_6 = VAR_3->hsync_level == VAR_1;

 VAR_4 = FUNC_2(VAR_2->base, VAR_0);
 VAR_4 = FUNC_1(VAR_4, VAR_5, 7, 7);
 VAR_4 = FUNC_1(VAR_4, VAR_6, 6, 6);
 VAR_4 = FUNC_1(VAR_4, VAR_3->interlace, 3, 3);
 VAR_4 = FUNC_1(VAR_4, 1, 1, 0);
 FUNC_3(VAR_2->base, VAR_0, VAR_4);
}
