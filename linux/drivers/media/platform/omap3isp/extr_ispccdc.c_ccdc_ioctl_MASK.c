
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct isp_ccdc_device {int ioctl_lock; } ;


 long VAR_0 ;

 int FUNC_0 (struct isp_ccdc_device*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct isp_ccdc_device* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static long FUNC_4(struct v4l2_subdev *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 struct isp_ccdc_device *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 switch (VAR_2) {
 case 128:
  FUNC_1(&VAR_4->ioctl_lock);
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  FUNC_2(&VAR_4->ioctl_lock);
  break;

 default:
  return -VAR_0;
 }

 return VAR_5;
}
