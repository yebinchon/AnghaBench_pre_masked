
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_video_timings {scalar_t__ interlace; int hsync_level; int vsync_level; int vsw; int vfp; int vbp; int hsw; int hfp; int hbp; } ;
struct hdmi_video_format {int y_res; int x_res; int packing_mode; } ;
struct TYPE_2__ {int y_res; scalar_t__ interlace; int hsync_level; int vsync_level; int vsw; int vfp; int vbp; int hsw; int hfp; int hbp; int x_res; } ;
struct hdmi_config {TYPE_1__ timings; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

void FUNC_1(struct hdmi_video_format *VAR_1,
  struct omap_video_timings *VAR_2, struct hdmi_config *VAR_3)
{
 FUNC_0("Enter hdmi_wp_video_init_format\n");

 VAR_1->packing_mode = VAR_0;
 VAR_1->y_res = VAR_3->timings.y_res;
 VAR_1->x_res = VAR_3->timings.x_res;
 if (VAR_3->timings.interlace)
  VAR_1->y_res /= 2;

 VAR_2->hbp = VAR_3->timings.hbp;
 VAR_2->hfp = VAR_3->timings.hfp;
 VAR_2->hsw = VAR_3->timings.hsw;
 VAR_2->vbp = VAR_3->timings.vbp;
 VAR_2->vfp = VAR_3->timings.vfp;
 VAR_2->vsw = VAR_3->timings.vsw;
 VAR_2->vsync_level = VAR_3->timings.vsync_level;
 VAR_2->hsync_level = VAR_3->timings.hsync_level;
 VAR_2->interlace = VAR_3->timings.interlace;
}
