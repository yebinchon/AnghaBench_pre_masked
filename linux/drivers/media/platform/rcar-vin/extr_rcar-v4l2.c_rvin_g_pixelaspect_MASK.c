
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int dummy; } ;
struct rvin_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,struct v4l2_fract*) ;
 int VAR_3 ;
 struct rvin_dev* FUNC_1 (struct file*) ;
 struct v4l2_subdev* FUNC_2 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
         int VAR_6, struct v4l2_fract *VAR_7)
{
 struct rvin_dev *VAR_8 = FUNC_1(VAR_4);
 struct v4l2_subdev *VAR_9 = FUNC_2(VAR_8);

 if (VAR_6 != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_9, VAR_3, VAR_2, VAR_7);
}
