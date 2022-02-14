
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fh {int dummy; } ;
struct v4l2_ctrl {int ncontrols; int is_new; scalar_t__ val; scalar_t__ manual_mode_value; scalar_t__ has_volatiles; scalar_t__ is_auto; int p_new; struct v4l2_ctrl** cluster; } ;


 int FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct v4l2_fh*,struct v4l2_ctrl*,int,int ) ;
 int FUNC_2 (struct v4l2_ctrl*) ;
 int FUNC_3 (struct v4l2_ctrl*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_fh *VAR_0, struct v4l2_ctrl *VAR_1, u32 VAR_2)
{
 struct v4l2_ctrl *VAR_3 = VAR_1->cluster[0];
 int VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->ncontrols; VAR_5++)
  if (VAR_3->cluster[VAR_5])
   VAR_3->cluster[VAR_5]->is_new = 0;

 VAR_4 = FUNC_3(VAR_1, VAR_1->p_new);
 if (VAR_4)
  return VAR_4;




 if (VAR_3->is_auto && VAR_3->has_volatiles && VAR_1 == VAR_3 &&
     !FUNC_0(VAR_3) && VAR_1->val == VAR_3->manual_mode_value)
  FUNC_2(VAR_3);

 VAR_1->is_new = 1;
 return FUNC_1(VAR_0, VAR_3, 1, VAR_2);
}
