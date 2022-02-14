
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, bool VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2)
  VAR_4 &= ~0x01;
 else
  VAR_4 |= 0x01;

 return FUNC_1(VAR_1, VAR_0, VAR_4);
}
