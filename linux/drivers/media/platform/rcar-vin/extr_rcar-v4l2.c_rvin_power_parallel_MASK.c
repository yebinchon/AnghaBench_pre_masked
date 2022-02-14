
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct rvin_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int) ;
 struct v4l2_subdev* FUNC_1 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_2(struct rvin_dev *VAR_4, bool VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = VAR_5 ? 1 : 0;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_2, VAR_3, VAR_7);
 if (VAR_8 < 0 && VAR_8 != -VAR_1 && VAR_8 != -VAR_0)
  return VAR_8;

 return 0;
}
