
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int width; scalar_t__ top; scalar_t__ left; } ;
struct vivid_dev {int overlay_out_left; int overlay_out_top; int* bitmap_out; int clipcount_out; int fbuf_out_flags; scalar_t__ const chromakey_out; TYPE_3__* fmt_cap; scalar_t__ global_alpha_out; TYPE_2__* clips_out; TYPE_1__ compose_out; } ;
struct v4l2_rect {int top; int height; int left; int width; } ;
struct TYPE_6__ {int alpha_mask; } ;
struct TYPE_5__ {struct v4l2_rect c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct vivid_dev *VAR_5, int VAR_6, int VAR_7,
   u16 *VAR_8, const u16 *VAR_9)
{
 u16 VAR_10;
 int VAR_11 = VAR_5->overlay_out_left;
 int VAR_12 = VAR_5->overlay_out_top;
 int VAR_13 = VAR_7 + VAR_11;
 int VAR_14 = VAR_6 + VAR_12;
 int VAR_15;

 VAR_10 = *VAR_8;
 *VAR_8 = *VAR_9;
 if (VAR_5->bitmap_out) {
  const u8 *VAR_16 = VAR_5->bitmap_out;
  unsigned VAR_17 = (VAR_5->compose_out.width + 7) / 8;

  VAR_7 -= VAR_5->compose_out.left;
  VAR_6 -= VAR_5->compose_out.top;
  if (!(VAR_16[VAR_17 * VAR_6 + VAR_7 / 8] & (1 << (VAR_7 & 7))))
   return;
 }

 for (VAR_15 = 0; VAR_15 < VAR_5->clipcount_out; VAR_15++) {
  struct v4l2_rect *VAR_18 = &VAR_5->clips_out[VAR_15].c;

  if (VAR_14 >= VAR_18->top && VAR_14 < VAR_18->top + VAR_18->height &&
      VAR_13 >= VAR_18->left && VAR_13 < VAR_18->left + VAR_18->width)
   return;
 }
 if ((VAR_5->fbuf_out_flags & VAR_0) &&
     *VAR_9 != VAR_5->chromakey_out)
  return;
 if ((VAR_5->fbuf_out_flags & VAR_4) &&
     VAR_10 == VAR_5->chromakey_out)
  return;
 if (VAR_5->fmt_cap->alpha_mask) {
  if ((VAR_5->fbuf_out_flags & VAR_1) &&
      VAR_5->global_alpha_out)
   return;
  if ((VAR_5->fbuf_out_flags & VAR_2) &&
      *VAR_8 & VAR_5->fmt_cap->alpha_mask)
   return;
  if ((VAR_5->fbuf_out_flags & VAR_3) &&
      !(*VAR_8 & VAR_5->fmt_cap->alpha_mask))
   return;
 }
 *VAR_8 = VAR_10;
}
