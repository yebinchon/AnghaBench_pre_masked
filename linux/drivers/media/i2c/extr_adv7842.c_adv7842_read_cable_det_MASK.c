
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;

__attribute__((used)) static u16 FUNC_1(struct v4l2_subdev *VAR_0)
{
 u8 VAR_1 = FUNC_0(VAR_0, 0x6f);
 u16 VAR_2 = 0;

 if (VAR_1 & 0x02)
  VAR_2 |= 1;
 if (VAR_1 & 0x01)
  VAR_2 |= 2;
 return VAR_2;
}
