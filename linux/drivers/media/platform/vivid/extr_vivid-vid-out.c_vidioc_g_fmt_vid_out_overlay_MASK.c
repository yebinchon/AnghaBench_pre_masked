
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_rect {int width; int height; } ;
struct vivid_dev {unsigned int clipcount_out; int * clips_out; struct v4l2_rect compose_out; int * bitmap_out; int global_alpha_out; int chromakey_out; int overlay_out_left; int overlay_out_top; int has_fb; } ;
struct TYPE_4__ {int width; int height; int left; int top; } ;
struct v4l2_window {unsigned int clipcount; int * clips; int * bitmap; int global_alpha; int chromakey; int field; TYPE_2__ w; } ;
struct TYPE_3__ {struct v4l2_window win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,unsigned int) ;
 struct vivid_dev* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct vivid_dev *VAR_6 = FUNC_1(VAR_3);
 const struct v4l2_rect *VAR_7 = &VAR_6->compose_out;
 struct v4l2_window *VAR_8 = &VAR_5->fmt.win;
 unsigned VAR_9 = VAR_8->clipcount;

 if (!VAR_6->has_fb)
  return -VAR_1;
 VAR_8->w.top = VAR_6->overlay_out_top;
 VAR_8->w.left = VAR_6->overlay_out_left;
 VAR_8->w.width = VAR_7->width;
 VAR_8->w.height = VAR_7->height;
 VAR_8->clipcount = VAR_6->clipcount_out;
 VAR_8->field = VAR_2;
 VAR_8->chromakey = VAR_6->chromakey_out;
 VAR_8->global_alpha = VAR_6->global_alpha_out;
 if (VAR_9 > VAR_6->clipcount_out)
  VAR_9 = VAR_6->clipcount_out;
 if (VAR_6->bitmap_out == ((void*)0))
  VAR_8->bitmap = ((void*)0);
 else if (VAR_8->bitmap) {
  if (FUNC_0(VAR_8->bitmap, VAR_6->bitmap_out,
      ((VAR_6->compose_out.width + 7) / 8) * VAR_6->compose_out.height))
   return -VAR_0;
 }
 if (VAR_9 && VAR_8->clips) {
  if (FUNC_0(VAR_8->clips, VAR_6->clips_out,
     VAR_9 * sizeof(VAR_6->clips_out[0])))
   return -VAR_0;
 }
 return 0;
}
