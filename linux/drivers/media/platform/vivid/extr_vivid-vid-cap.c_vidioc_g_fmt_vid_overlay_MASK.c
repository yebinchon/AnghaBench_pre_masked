
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_rect {int width; int height; } ;
struct vivid_dev {unsigned int clipcount_cap; int * clips_cap; int * bitmap_cap; int overlay_cap_field; int overlay_cap_left; int overlay_cap_top; scalar_t__ multiplanar; struct v4l2_rect compose_cap; } ;
struct TYPE_4__ {int width; int height; int left; int top; } ;
struct v4l2_window {unsigned int clipcount; int * clips; int * bitmap; int field; TYPE_2__ w; } ;
struct TYPE_3__ {struct v4l2_window win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,unsigned int) ;
 struct vivid_dev* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_1(VAR_2);
 const struct v4l2_rect *VAR_6 = &VAR_5->compose_cap;
 struct v4l2_window *VAR_7 = &VAR_4->fmt.win;
 unsigned VAR_8 = VAR_7->clipcount;

 if (VAR_5->multiplanar)
  return -VAR_1;

 VAR_7->w.top = VAR_5->overlay_cap_top;
 VAR_7->w.left = VAR_5->overlay_cap_left;
 VAR_7->w.width = VAR_6->width;
 VAR_7->w.height = VAR_6->height;
 VAR_7->field = VAR_5->overlay_cap_field;
 VAR_7->clipcount = VAR_5->clipcount_cap;
 if (VAR_8 > VAR_5->clipcount_cap)
  VAR_8 = VAR_5->clipcount_cap;
 if (VAR_5->bitmap_cap == ((void*)0))
  VAR_7->bitmap = ((void*)0);
 else if (VAR_7->bitmap) {
  if (FUNC_0(VAR_7->bitmap, VAR_5->bitmap_cap,
      ((VAR_6->width + 7) / 8) * VAR_6->height))
   return -VAR_0;
 }
 if (VAR_8 && VAR_7->clips) {
  if (FUNC_0(VAR_7->clips, VAR_5->clips_cap,
     VAR_8 * sizeof(VAR_5->clips_cap[0])))
   return -VAR_0;
 }
 return 0;
}
