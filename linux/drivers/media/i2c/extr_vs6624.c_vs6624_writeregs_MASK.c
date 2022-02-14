
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, const u16 *VAR_1)
{
 u16 VAR_2;
 u8 VAR_3;

 while (*VAR_1 != 0x00) {
  VAR_2 = *VAR_1++;
  VAR_3 = *VAR_1++;

  FUNC_0(VAR_0, VAR_2, VAR_3);
 }
 return 0;
}
