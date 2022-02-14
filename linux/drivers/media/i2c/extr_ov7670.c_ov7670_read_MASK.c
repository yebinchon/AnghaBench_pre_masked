
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7670_info {scalar_t__ use_smbus; } ;


 int FUNC_0 (struct v4l2_subdev*,unsigned char,unsigned char*) ;
 int FUNC_1 (struct v4l2_subdev*,unsigned char,unsigned char*) ;
 struct ov7670_info* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, unsigned char VAR_1,
  unsigned char *VAR_2)
{
 struct ov7670_info *VAR_3 = FUNC_2(VAR_0);
 if (VAR_3->use_smbus)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2);
}
