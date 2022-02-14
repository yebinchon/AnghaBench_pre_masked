
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int dummy; } ;
struct v4l2_ctrl {scalar_t__ type; int flags; int ncontrols; struct v4l2_ctrl** cluster; int is_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct v4l2_ctrl*,int ) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct v4l2_ext_control*,struct v4l2_ctrl*) ;
 int VAR_5 ;
 int FUNC_3 (struct v4l2_ext_control*,struct v4l2_ctrl*) ;
 int FUNC_4 (struct v4l2_ctrl*) ;
 int FUNC_5 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_ctrl *VAR_6, struct v4l2_ext_control *VAR_7)
{
 struct v4l2_ctrl *VAR_8 = VAR_6->cluster[0];
 int VAR_9 = 0;
 int VAR_10;





 if (!VAR_6->is_int && VAR_6->type != VAR_4)
  return -VAR_1;

 if (VAR_6->flags & VAR_3)
  return -VAR_0;

 FUNC_4(VAR_8);

 if (VAR_6->flags & VAR_2) {
  for (VAR_10 = 0; VAR_10 < VAR_8->ncontrols; VAR_10++)
   FUNC_1(VAR_8->cluster[VAR_10]);
  VAR_9 = FUNC_0(VAR_8, VAR_5);
  FUNC_3(VAR_7, VAR_6);
 } else {
  FUNC_2(VAR_7, VAR_6);
 }
 FUNC_5(VAR_8);
 return VAR_9;
}
