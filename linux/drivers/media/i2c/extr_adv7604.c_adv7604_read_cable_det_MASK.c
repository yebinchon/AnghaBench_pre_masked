
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct v4l2_subdev *VAR_0)
{
 u8 VAR_1 = FUNC_0(VAR_0, 0x6f);

 return ((VAR_1 & 0x10) >> 4)
      | ((VAR_1 & 0x08) >> 2)
      | ((VAR_1 & 0x04) << 0)
      | ((VAR_1 & 0x02) << 2);
}
