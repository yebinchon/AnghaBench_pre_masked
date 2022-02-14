
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct rvin_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int *) ;
 int VAR_1 ;
 struct rvin_dev* FUNC_1 (struct file*) ;
 struct v4l2_subdev* FUNC_2 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, v4l2_std_id *VAR_4)
{
 struct rvin_dev *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_subdev *VAR_6 = FUNC_2(VAR_5);

 return FUNC_0(VAR_6, VAR_1, VAR_0, VAR_4);
}
