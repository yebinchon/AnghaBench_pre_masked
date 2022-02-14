
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_ccw_device {int vdev; scalar_t__ device_lost; } ;
struct ccw_device {int * handler; int dev; scalar_t__ online; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct virtio_ccw_device* FUNC_6 (struct ccw_device*) ;

__attribute__((used)) static void FUNC_7(struct ccw_device *VAR_0)
{
 unsigned long VAR_1;
 struct virtio_ccw_device *VAR_2 = FUNC_6(VAR_0);

 if (VAR_2 && VAR_0->online) {
  if (VAR_2->device_lost)
   FUNC_5(&VAR_2->vdev);
  FUNC_4(&VAR_2->vdev);
  FUNC_2(FUNC_1(VAR_0), VAR_1);
  FUNC_0(&VAR_0->dev, ((void*)0));
  FUNC_3(FUNC_1(VAR_0), VAR_1);
 }
 VAR_0->handler = ((void*)0);
}
