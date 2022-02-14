
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_selection {scalar_t__ type; int target; struct v4l2_rect r; } ;
struct file {int dummy; } ;
struct delta_frameinfo {int flags; int aligned_height; int aligned_width; int height; int width; struct v4l2_rect crop; } ;
struct delta_ctx {int flags; struct delta_frameinfo frameinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 struct delta_ctx* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
        struct v4l2_selection *VAR_6)
{
 struct delta_ctx *VAR_7 = FUNC_0(VAR_5);
 struct delta_frameinfo *VAR_8 = &VAR_7->frameinfo;
 struct v4l2_rect VAR_9;

 if (VAR_6->type != VAR_3)
  return -VAR_2;

 if ((VAR_7->flags & VAR_0) &&
     (VAR_8->flags & VAR_1)) {
  VAR_9 = VAR_8->crop;
 } else {

  VAR_9.left = 0;
  VAR_9.top = 0;
  VAR_9.width = VAR_8->width;
  VAR_9.height = VAR_8->height;
 }

 switch (VAR_6->target) {
 case 131:
 case 129:

  VAR_6->r = VAR_9;
  break;
 case 128:
 case 130:

  VAR_6->r.left = 0;
  VAR_6->r.top = 0;
  VAR_6->r.width = VAR_8->aligned_width;
  VAR_6->r.height = VAR_8->aligned_height;
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
