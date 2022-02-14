
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
 int VAR_5 ;

 struct s5p_mfc_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct s5p_mfc_ctx*,int ,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_6)
{
 struct s5p_mfc_ctx *VAR_7 = FUNC_0(VAR_6);
 struct s5p_mfc_dev *VAR_8 = VAR_7->dev;

 switch (VAR_6->id) {
 case 128:
  if (VAR_7->state >= VAR_2 &&
      VAR_7->state < VAR_1) {
   VAR_6->val = VAR_7->pb_count;
   break;
  } else if (VAR_7->state != VAR_3 &&
    VAR_7->state != VAR_4) {
   FUNC_2(&VAR_8->v4l2_dev, "Decoding not initialised\n");
   return -VAR_0;
  }

  FUNC_1(VAR_7,
    VAR_5, 0);
  if (VAR_7->state >= VAR_2 &&
      VAR_7->state < VAR_1) {
   VAR_6->val = VAR_7->pb_count;
  } else {
   FUNC_2(&VAR_8->v4l2_dev, "Decoding not initialised\n");
   return -VAR_0;
  }
  break;
 }
 return 0;
}
