
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int index; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;

void FUNC_2(struct virtio_device *VAR_1)
{
 int VAR_2 = VAR_1->index;

 FUNC_0(&VAR_1->dev);
 FUNC_1(&VAR_0, VAR_2);
}
