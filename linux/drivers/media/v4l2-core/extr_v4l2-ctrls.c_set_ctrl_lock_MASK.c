
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int dummy; } ;
struct v4l2_ext_control {int dummy; } ;
struct v4l2_ctrl {int dummy; } ;


 int FUNC_0 (struct v4l2_ext_control*,struct v4l2_ctrl*) ;
 int FUNC_1 (struct v4l2_fh*,struct v4l2_ctrl*,int ) ;
 int FUNC_2 (struct v4l2_ext_control*,struct v4l2_ctrl*) ;
 int FUNC_3 (struct v4l2_ctrl*) ;
 int FUNC_4 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_fh *VAR_0, struct v4l2_ctrl *VAR_1,
    struct v4l2_ext_control *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_1);
 FUNC_2(VAR_2, VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_1, 0);
 if (!VAR_3)
  FUNC_0(VAR_2, VAR_1);
 FUNC_4(VAR_1);
 return VAR_3;
}
