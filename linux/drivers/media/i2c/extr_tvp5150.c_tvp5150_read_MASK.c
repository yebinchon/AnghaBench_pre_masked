
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int regmap; } ;


 int FUNC_0 (int ,unsigned char,int*) ;
 struct tvp5150* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, unsigned char VAR_1)
{
 struct tvp5150 *VAR_2 = FUNC_1(VAR_0);
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2->regmap, VAR_1, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_4;
}
