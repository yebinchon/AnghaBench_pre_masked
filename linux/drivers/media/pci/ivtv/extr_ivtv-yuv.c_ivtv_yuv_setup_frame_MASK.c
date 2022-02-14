
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct yuv_frame_info {int update; int src_x; int src_h; int dst_h; int tru_w; int tru_h; int offset_y; int interlaced_y; int interlaced_uv; int delay; scalar_t__ sync_field; int lace_mode; int interlaced; int tru_x; int dst_w; int dst_y; int dst_x; int src_w; int src_y; } ;
struct yuv_playback_info {int draw_frame; int lace_threshold; int lace_mode; int decode_height; scalar_t__ lace_sync_field; struct yuv_frame_info old_frame_info_args; struct yuv_frame_info* new_frame_info; } ;
struct TYPE_4__ {int height; int left; int width; int top; } ;
struct TYPE_3__ {int left; int height; int width; int top; } ;
struct ivtv_dma_frame {int src_width; int src_height; TYPE_2__ dst; TYPE_1__ src; } ;
struct ivtv {struct yuv_playback_info yuv_info; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;


 int VAR_1 ;

 scalar_t__ FUNC_1 (struct yuv_frame_info*,struct yuv_frame_info*,int) ;

__attribute__((used)) static void FUNC_2(struct ivtv *VAR_2, struct ivtv_dma_frame *VAR_3)
{
 struct yuv_playback_info *VAR_4 = &VAR_2->yuv_info;
 u8 VAR_5 = VAR_4->draw_frame;
 u8 VAR_6 = (u8)(VAR_5 - 1) % VAR_0;
 struct yuv_frame_info *VAR_7 = &VAR_4->new_frame_info[VAR_5];
 struct yuv_frame_info *VAR_8 = &VAR_4->new_frame_info[VAR_6];
 int VAR_9 = VAR_4->lace_threshold;


 int VAR_10 = VAR_7->update;


 VAR_7->src_x = VAR_3->src.left;
 VAR_7->src_y = VAR_3->src.top;
 VAR_7->src_w = VAR_3->src.width;
 VAR_7->src_h = VAR_3->src.height;
 VAR_7->dst_x = VAR_3->dst.left;
 VAR_7->dst_y = VAR_3->dst.top;
 VAR_7->dst_w = VAR_3->dst.width;
 VAR_7->dst_h = VAR_3->dst.height;
 VAR_7->tru_x = VAR_3->dst.left;
 VAR_7->tru_w = VAR_3->src_width;
 VAR_7->tru_h = VAR_3->src_height;


 VAR_7->offset_y = (VAR_7->tru_h + VAR_7->src_x < 512 - 16) ? 1 : 0;

 VAR_7->update = 0;
 VAR_7->interlaced_y = 0;
 VAR_7->interlaced_uv = 0;
 VAR_7->delay = 0;
 VAR_7->sync_field = 0;
 VAR_7->lace_mode = VAR_4->lace_mode & VAR_1;

 if (VAR_9 < 0)
  VAR_9 = VAR_4->decode_height - 1;


 switch (VAR_7->lace_mode) {
 case 128:
  VAR_7->interlaced = 0;
  if (VAR_7->tru_h < 512 || (VAR_7->tru_h > 576 && VAR_7->tru_h < 1021))
   VAR_7->interlaced_y = 0;
  else
   VAR_7->interlaced_y = 1;

  if (VAR_7->tru_h < 1021 && (VAR_7->dst_h >= VAR_7->src_h / 2))
   VAR_7->interlaced_uv = 0;
  else
   VAR_7->interlaced_uv = 1;
  break;

 case 130:
  if (VAR_7->tru_h <= VAR_9 || VAR_7->tru_h > 576 || VAR_7->tru_w > 720) {
   VAR_7->interlaced = 0;
   if ((VAR_7->tru_h < 512) ||
       (VAR_7->tru_h > 576 && VAR_7->tru_h < 1021) ||
       (VAR_7->tru_w > 720 && VAR_7->tru_h < 1021))
    VAR_7->interlaced_y = 0;
   else
    VAR_7->interlaced_y = 1;
   if (VAR_7->tru_h < 1021 && (VAR_7->dst_h >= VAR_7->src_h / 2))
    VAR_7->interlaced_uv = 0;
   else
    VAR_7->interlaced_uv = 1;
  } else {
   VAR_7->interlaced = 1;
   VAR_7->interlaced_y = 1;
   VAR_7->interlaced_uv = 1;
  }
  break;

 case 129:
 default:
  VAR_7->interlaced = 1;
  VAR_7->interlaced_y = 1;
  VAR_7->interlaced_uv = 1;
  break;
 }

 if (FUNC_1(&VAR_4->old_frame_info_args, VAR_7, sizeof(*VAR_7))) {
  VAR_4->old_frame_info_args = *VAR_7;
  VAR_7->update = 1;
  FUNC_0("Requesting reg update for frame %d\n", VAR_5);
 }

 VAR_7->update |= VAR_10;
 VAR_7->sync_field = VAR_4->lace_sync_field;
 VAR_7->delay = VAR_7->sync_field != VAR_8->sync_field;
}
