
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int top; int left; int height; int width; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_3__ r; } ;
struct TYPE_5__ {int h; int w; } ;
struct TYPE_4__ {int h; int w; } ;
struct mtk_jpeg_ctx {TYPE_2__ cap_q; TYPE_1__ out_q; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;




 struct mtk_jpeg_ctx* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_selection *VAR_4)
{
 struct mtk_jpeg_ctx *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 131:
 case 129:
  VAR_4->r.width = VAR_5->out_q.w;
  VAR_4->r.height = VAR_5->out_q.h;
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  break;
 case 130:
 case 128:
  VAR_4->r.width = VAR_5->cap_q.w;
  VAR_4->r.height = VAR_5->cap_q.h;
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
