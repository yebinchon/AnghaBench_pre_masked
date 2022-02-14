
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int interlace; scalar_t__ vbp; scalar_t__ vfp; scalar_t__ vsw; int y_res; int vsync_level; scalar_t__ hfp; scalar_t__ hbp; scalar_t__ hsw; int x_res; int hsync_level; } ;
struct TYPE_5__ {TYPE_1__ timings; int hdmi_dvi_mode; } ;
struct hdmi_core_vid_config {int data_enable_pol; TYPE_2__ v_fc_config; scalar_t__ vblank; scalar_t__ vblank_osc; scalar_t__ hblank; } ;
struct TYPE_6__ {int interlace; scalar_t__ vbp; scalar_t__ vfp; scalar_t__ vsw; int y_res; int vsync_level; scalar_t__ hsw; scalar_t__ hbp; scalar_t__ hfp; int x_res; int hsync_level; } ;
struct hdmi_config {TYPE_3__ timings; int hdmi_dvi_mode; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct hdmi_core_vid_config *VAR_0,
   struct hdmi_config *VAR_1)
{
 FUNC_0("hdmi_core_init\n");


 VAR_0->data_enable_pol = 1;
 VAR_0->v_fc_config.timings.hsync_level = VAR_1->timings.hsync_level;
 VAR_0->v_fc_config.timings.x_res = VAR_1->timings.x_res;
 VAR_0->v_fc_config.timings.hsw = VAR_1->timings.hsw - 1;
 VAR_0->v_fc_config.timings.hbp = VAR_1->timings.hbp;
 VAR_0->v_fc_config.timings.hfp = VAR_1->timings.hfp;
 VAR_0->hblank = VAR_1->timings.hfp +
    VAR_1->timings.hbp + VAR_1->timings.hsw - 1;
 VAR_0->v_fc_config.timings.vsync_level = VAR_1->timings.vsync_level;
 VAR_0->v_fc_config.timings.y_res = VAR_1->timings.y_res;
 VAR_0->v_fc_config.timings.vsw = VAR_1->timings.vsw;
 VAR_0->v_fc_config.timings.vfp = VAR_1->timings.vfp;
 VAR_0->v_fc_config.timings.vbp = VAR_1->timings.vbp;
 VAR_0->vblank_osc = 0;
 VAR_0->vblank = VAR_1->timings.vsw +
    VAR_1->timings.vfp + VAR_1->timings.vbp;
 VAR_0->v_fc_config.hdmi_dvi_mode = VAR_1->hdmi_dvi_mode;
 VAR_0->v_fc_config.timings.interlace = VAR_1->timings.interlace;
}
