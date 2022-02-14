
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_2__ r; } ;
struct TYPE_3__ {int buf_h; int buf_w; int pic_h; int pic_w; } ;
struct mtk_vcodec_ctx {scalar_t__ state; TYPE_1__ picinfo; struct mtk_q_data* q_data; } ;
struct mtk_q_data {int visible_height; int visible_width; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct mtk_vcodec_ctx*,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
   struct v4l2_selection *VAR_7)
{
 struct mtk_vcodec_ctx *VAR_8 = FUNC_0(VAR_6);
 struct mtk_q_data *VAR_9;

 if (VAR_7->type != VAR_4)
  return -VAR_0;

 VAR_9 = &VAR_8->q_data[VAR_2];

 switch (VAR_7->target) {
 case 128:
  VAR_7->r.left = 0;
  VAR_7->r.top = 0;
  VAR_7->r.width = VAR_8->picinfo.pic_w;
  VAR_7->r.height = VAR_8->picinfo.pic_h;
  break;
 case 129:
  VAR_7->r.left = 0;
  VAR_7->r.top = 0;
  VAR_7->r.width = VAR_8->picinfo.buf_w;
  VAR_7->r.height = VAR_8->picinfo.buf_h;
  break;
 case 130:
  if (FUNC_1(VAR_8, VAR_1, &(VAR_7->r))) {

   VAR_7->r.left = 0;
   VAR_7->r.top = 0;
   VAR_7->r.width = VAR_9->visible_width;
   VAR_7->r.height = VAR_9->visible_height;
  }
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8->state < VAR_3) {

  VAR_7->r.left = 0;
  VAR_7->r.top = 0;
  VAR_7->r.width = VAR_9->visible_width;
  VAR_7->r.height = VAR_9->visible_height;
  return 0;
 }

 return 0;
}
