
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int dev; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct virtio_device*) ;

size_t FUNC_2(struct virtio_device *VAR_1)
{
 size_t VAR_2 = VAR_0;

 if (FUNC_1(VAR_1))
  VAR_2 = FUNC_0(&VAR_1->dev);

 return VAR_2;
}
