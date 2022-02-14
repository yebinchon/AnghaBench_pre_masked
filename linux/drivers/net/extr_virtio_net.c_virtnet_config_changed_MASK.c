
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int config_work; } ;
struct virtio_device {struct virtnet_info* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtio_device *VAR_0)
{
 struct virtnet_info *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->config_work);
}
