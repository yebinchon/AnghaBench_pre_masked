
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct v4l2_subdev *VAR_0, u16 VAR_1, u8 VAR_2, u8 *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_6 = FUNC_0(VAR_0, VAR_1 + VAR_4);
  if (VAR_6 < 0)
   break;
  VAR_3[VAR_4] = VAR_6;
  VAR_5++;
 }

 return VAR_5;
}
