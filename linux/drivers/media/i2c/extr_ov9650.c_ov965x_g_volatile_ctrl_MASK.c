
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int name; } ;
struct ov965x {int lock; } ;


 int FUNC_0 (struct ov965x*,struct v4l2_ctrl*) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ov965x* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_1(VAR_1);
 struct ov965x *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_5(1, VAR_0, VAR_2, "g_ctrl: %s\n", VAR_1->name);

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 FUNC_3(&VAR_3->lock);
 return VAR_4;
}
