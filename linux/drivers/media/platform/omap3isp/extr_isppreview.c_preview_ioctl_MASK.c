
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct isp_prev_device {int dummy; } ;


 long VAR_0 ;

 long FUNC_0 (struct isp_prev_device*,void*) ;
 struct isp_prev_device* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static long FUNC_2(struct v4l2_subdev *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 struct isp_prev_device *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_4, VAR_3);

 default:
  return -VAR_0;
 }
}
