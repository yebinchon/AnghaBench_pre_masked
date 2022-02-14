
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int top; int left; int height; int width; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_2__ r; } ;
struct TYPE_6__ {int top; int left; int height; int width; } ;
struct TYPE_4__ {int h; int w; } ;
struct s5p_jpeg_ctx {TYPE_3__ crop_rect; TYPE_1__ out_q; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;







 struct s5p_jpeg_ctx* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    struct v4l2_selection *VAR_5)
{
 struct s5p_jpeg_ctx *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->type != VAR_2 &&
     VAR_5->type != VAR_1)
  return -VAR_0;


 switch (VAR_5->target) {
 case 130:
 case 129:
 case 128:
 case 132:
  VAR_5->r.width = VAR_6->out_q.w;
  VAR_5->r.height = VAR_6->out_q.h;
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  break;
 case 134:
 case 133:
 case 131:
  VAR_5->r.width = VAR_6->crop_rect.width;
  VAR_5->r.height = VAR_6->crop_rect.height;
  VAR_5->r.left = VAR_6->crop_rect.left;
  VAR_5->r.top = VAR_6->crop_rect.top;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
