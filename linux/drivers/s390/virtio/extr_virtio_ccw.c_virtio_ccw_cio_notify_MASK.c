
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_ccw_device {int device_lost; } ;
struct ccw_device {int dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct virtio_ccw_device* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ccw_device *VAR_2, int VAR_3)
{
 int VAR_4;
 struct virtio_ccw_device *VAR_5 = FUNC_0(&VAR_2->dev);





 if (!VAR_5)
  return VAR_0;

 switch (VAR_3) {
 case 129:
  VAR_5->device_lost = 1;
  VAR_4 = VAR_0;
  break;
 case 128:
  VAR_4 = VAR_1;
  break;
 default:
  VAR_4 = VAR_0;
  break;
 }
 return VAR_4;
}
