
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,char*) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static long FUNC_2(struct v4l2_subdev *VAR_2,
   unsigned int VAR_3,
   void *VAR_4)
{
 u32 VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_1(VAR_2, VAR_0);
  *((int *)VAR_4) = ((VAR_5 & VAR_1) ==
  VAR_1);
  break;
 default:
  FUNC_0(VAR_2, "Wrong IOCTL cmd\n");
  break;
 }

 return 0;
}
