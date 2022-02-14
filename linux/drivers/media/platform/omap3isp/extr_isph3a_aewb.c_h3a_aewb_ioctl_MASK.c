
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ispstat {int dummy; } ;


 long VAR_0 ;




 long FUNC_0 (struct ispstat*,void*) ;
 long FUNC_1 (struct ispstat*,int) ;
 long FUNC_2 (struct ispstat*,void*) ;
 long FUNC_3 (struct ispstat*,void*) ;
 struct ispstat* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static long FUNC_5(struct v4l2_subdev *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 struct ispstat *VAR_4 = FUNC_4(VAR_1);

 switch (VAR_2) {
 case 131:
  return FUNC_0(VAR_4, VAR_3);
 case 129:
  return FUNC_2(VAR_4, VAR_3);
 case 128:
  return FUNC_3(VAR_4, VAR_3);
 case 130: {
  unsigned long *VAR_5 = VAR_3;
  return FUNC_1(VAR_4, !!*VAR_5);
 }
 }

 return -VAR_0;
}
