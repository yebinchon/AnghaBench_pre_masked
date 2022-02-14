
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct mtk_vcodec_ctx {int dpb_size; int state; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct mtk_vcodec_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_2)
{
 struct mtk_vcodec_ctx *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;

 switch (VAR_2->id) {
 case 128:
  if (VAR_3->state >= VAR_1) {
   VAR_2->val = VAR_3->dpb_size;
  } else {
   FUNC_1(0, "Seqinfo not ready");
   VAR_2->val = 0;
  }
  break;
 default:
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
