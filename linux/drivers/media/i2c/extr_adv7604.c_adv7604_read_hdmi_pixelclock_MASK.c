
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static unsigned int FUNC_2(struct v4l2_subdev *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0, 0x06);
 VAR_3 = FUNC_0(VAR_0, 0x3b);
 if (VAR_2 < 0 || VAR_3 < 0)
  return 0;
 VAR_1 = VAR_2 * 1000000 + ((VAR_3 & 0x30) >> 4) * 250000;

 if (FUNC_1(VAR_0)) {

  unsigned VAR_4 = ((FUNC_0(VAR_0, 0x0b) & 0x60) >> 4) + 8;

  VAR_1 = VAR_1 * 8 / VAR_4;
 }

 return VAR_1;
}
