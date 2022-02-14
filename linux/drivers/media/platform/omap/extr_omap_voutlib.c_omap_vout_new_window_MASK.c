
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; } ;
struct v4l2_window {TYPE_1__ w; int chromakey; int field; } ;
struct v4l2_rect {int height; int width; } ;
struct v4l2_framebuffer {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct v4l2_framebuffer*,struct v4l2_window*) ;

int FUNC_3(struct v4l2_rect *VAR_0,
  struct v4l2_window *VAR_1, struct v4l2_framebuffer *VAR_2,
  struct v4l2_window *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_1->w = VAR_3->w;
 VAR_1->field = VAR_3->field;
 VAR_1->chromakey = VAR_3->chromakey;


 if (FUNC_0()) {

  if ((VAR_0->height/VAR_1->w.height) >= 2)
   VAR_0->height = VAR_1->w.height * 2;

  if ((VAR_0->width/VAR_1->w.width) >= 2)
   VAR_0->width = VAR_1->w.width * 2;

  if (VAR_0->width > 768) {




   if (VAR_0->height != VAR_1->w.height)
    VAR_0->width = 768;
  }
 } else if (FUNC_1()) {

  if ((VAR_0->height/VAR_1->w.height) >= 4)
   VAR_0->height = VAR_1->w.height * 4;

  if ((VAR_0->width/VAR_1->w.width) >= 4)
   VAR_0->width = VAR_1->w.width * 4;
 }
 return 0;
}
