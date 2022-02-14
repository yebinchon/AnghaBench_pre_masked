
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct synthvid_situation_update {int dummy; } ;
struct synthvid_msg_hdr {int dummy; } ;
struct TYPE_9__ {int video_output_count; TYPE_3__* video_output; scalar_t__ user_ctx; } ;
struct TYPE_6__ {int size; int type; } ;
struct synthvid_msg {TYPE_4__ situ; TYPE_1__ vid_hdr; } ;
struct hv_device {int dummy; } ;
struct TYPE_10__ {int line_length; } ;
struct TYPE_7__ {int yres; int xres; int bits_per_pixel; } ;
struct fb_info {TYPE_5__ fix; TYPE_2__ var; } ;
struct TYPE_8__ {int active; int pitch_bytes; int height_pixels; int width_pixels; int depth_bits; scalar_t__ vram_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fb_info* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct synthvid_msg*,int ,int) ;
 int FUNC_2 (struct hv_device*,struct synthvid_msg*) ;

__attribute__((used)) static int FUNC_3(struct hv_device *VAR_2)
{
 struct fb_info *VAR_3 = FUNC_0(VAR_2);
 struct synthvid_msg VAR_4;

 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_4, 0, sizeof(struct synthvid_msg));

 VAR_4.vid_hdr.type = VAR_1;
 VAR_4.vid_hdr.size = sizeof(struct synthvid_msg_hdr) +
  sizeof(struct synthvid_situation_update);
 VAR_4.situ.user_ctx = 0;
 VAR_4.situ.video_output_count = 1;
 VAR_4.situ.video_output[0].active = 1;
 VAR_4.situ.video_output[0].vram_offset = 0;
 VAR_4.situ.video_output[0].depth_bits = VAR_3->var.bits_per_pixel;
 VAR_4.situ.video_output[0].width_pixels = VAR_3->var.xres;
 VAR_4.situ.video_output[0].height_pixels = VAR_3->var.yres;
 VAR_4.situ.video_output[0].pitch_bytes = VAR_3->fix.line_length;

 FUNC_2(VAR_2, &VAR_4);

 return 0;
}
