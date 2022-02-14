
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_2__ r; } ;
struct TYPE_3__ {int pic_h; int pic_w; } ;
struct mtk_vcodec_ctx {TYPE_1__ picinfo; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 struct mtk_vcodec_ctx* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_selection *VAR_4)
{
 struct mtk_vcodec_ctx *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 128:
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  VAR_4->r.width = VAR_5->picinfo.pic_w;
  VAR_4->r.height = VAR_5->picinfo.pic_h;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
