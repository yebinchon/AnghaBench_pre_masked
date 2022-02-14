
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int config_enabled; int config_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct virtio_device *VAR_0)
{
 FUNC_0(&VAR_0->config_lock);
 VAR_0->config_enabled = 0;
 FUNC_1(&VAR_0->config_lock);
}
