
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct rvin_dev {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct rvin_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,struct v4l2_dv_timings*) ;
 int VAR_1 ;
 struct rvin_dev* FUNC_2 (struct file*) ;
 struct v4l2_subdev* FUNC_3 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
        struct v4l2_dv_timings *VAR_4)
{
 struct rvin_dev *VAR_5 = FUNC_2(VAR_2);
 struct v4l2_subdev *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_1, VAR_0, VAR_4);
 if (VAR_7)
  return VAR_7;


 return FUNC_0(VAR_5);
}
