
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* height; void* width; int left; int top; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct mtk_vcodec_ctx {int dummy; } ;
struct mtk_q_data {void* visible_height; void* visible_width; int coded_height; int coded_width; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 void* FUNC_1 (void*,int ) ;
 struct mtk_q_data* FUNC_2 (struct mtk_vcodec_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
         struct v4l2_selection *VAR_4)
{
 struct mtk_vcodec_ctx *VAR_5 = FUNC_0(VAR_3);
 struct mtk_q_data *VAR_6;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5, VAR_4->type);
 if (!VAR_6)
  return -VAR_0;

 switch (VAR_4->target) {
 case 128:

  VAR_4->r.top = 0;
  VAR_4->r.left = 0;
  VAR_4->r.width = FUNC_1(VAR_4->r.width, VAR_6->coded_width);
  VAR_4->r.height = FUNC_1(VAR_4->r.height, VAR_6->coded_height);
  VAR_6->visible_width = VAR_4->r.width;
  VAR_6->visible_height = VAR_4->r.height;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
