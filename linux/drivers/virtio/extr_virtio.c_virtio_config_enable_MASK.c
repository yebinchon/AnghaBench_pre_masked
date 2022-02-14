
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int config_enabled; int config_change_pending; int config_lock; } ;


 int FUNC_0 (struct virtio_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct virtio_device *VAR_0)
{
 FUNC_1(&VAR_0->config_lock);
 VAR_0->config_enabled = 1;
 if (VAR_0->config_change_pending)
  FUNC_0(VAR_0);
 VAR_0->config_change_pending = 0;
 FUNC_2(&VAR_0->config_lock);
}
