
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 scalar_t__ FUNC_0 (struct v4l2_subdev*,int const,int const) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, const u8 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2] != 0x00; VAR_2 += 2)
  if (FUNC_0(VAR_0, VAR_1[VAR_2], VAR_1[VAR_2 + 1]) < 0)
   return -1;
 return 0;
}
