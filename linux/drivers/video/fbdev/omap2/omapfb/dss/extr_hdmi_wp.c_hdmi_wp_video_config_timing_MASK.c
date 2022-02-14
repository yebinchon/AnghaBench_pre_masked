
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_video_timings {int vsw; int vfp; int vbp; int hsw; int hfp; int hbp; } ;
struct hdmi_wp_data {int base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct hdmi_wp_data *VAR_2,
  struct omap_video_timings *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;

 FUNC_0("Enter hdmi_wp_video_config_timing\n");

 VAR_4 |= FUNC_1(VAR_3->hbp, 31, 20);
 VAR_4 |= FUNC_1(VAR_3->hfp, 19, 8);
 VAR_4 |= FUNC_1(VAR_3->hsw, 7, 0);
 FUNC_2(VAR_2->base, VAR_0, VAR_4);

 VAR_5 |= FUNC_1(VAR_3->vbp, 31, 20);
 VAR_5 |= FUNC_1(VAR_3->vfp, 19, 8);
 VAR_5 |= FUNC_1(VAR_3->vsw, 7, 0);
 FUNC_2(VAR_2->base, VAR_1, VAR_5);
}
