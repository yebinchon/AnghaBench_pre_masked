
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_ccw_device {int going_away; } ;
struct ccw_device {int dev; } ;


 struct virtio_ccw_device* FUNC_0 (int *) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static struct virtio_ccw_device *FUNC_4(struct ccw_device *VAR_0)
{
 unsigned long VAR_1;
 struct virtio_ccw_device *VAR_2;

 FUNC_2(FUNC_1(VAR_0), VAR_1);
 VAR_2 = FUNC_0(&VAR_0->dev);
 if (!VAR_2 || VAR_2->going_away) {
  FUNC_3(FUNC_1(VAR_0), VAR_1);
  return ((void*)0);
 }
 VAR_2->going_away = 1;
 FUNC_3(FUNC_1(VAR_0), VAR_1);
 return VAR_2;
}
