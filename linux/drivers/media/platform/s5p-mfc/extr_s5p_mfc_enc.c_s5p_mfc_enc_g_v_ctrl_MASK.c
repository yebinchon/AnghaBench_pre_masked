
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct s5p_mfc_dev {int v4l2_dev; } ;
struct s5p_mfc_ctx {int pb_count; int state; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 struct s5p_mfc_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct s5p_mfc_ctx*,int ,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_5)
{
 struct s5p_mfc_ctx *VAR_6 = FUNC_0(VAR_5);
 struct s5p_mfc_dev *VAR_7 = VAR_6->dev;

 switch (VAR_5->id) {
 case 128:
  if (VAR_6->state >= VAR_2 &&
      VAR_6->state < VAR_1) {
   VAR_5->val = VAR_6->pb_count;
   break;
  } else if (VAR_6->state != VAR_3) {
   FUNC_2(&VAR_7->v4l2_dev, "Encoding not initialised\n");
   return -VAR_0;
  }

  FUNC_1(VAR_6,
    VAR_4, 0);
  if (VAR_6->state >= VAR_2 &&
      VAR_6->state < VAR_1) {
   VAR_5->val = VAR_6->pb_count;
  } else {
   FUNC_2(&VAR_7->v4l2_dev, "Encoding not initialised\n");
   return -VAR_0;
  }
  break;
 }
 return 0;
}
