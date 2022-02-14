
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int dev; int failover; int config_work; } ;
struct virtio_device {struct virtnet_info* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct virtnet_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct virtnet_info*) ;

__attribute__((used)) static void FUNC_6(struct virtio_device *VAR_0)
{
 struct virtnet_info *VAR_1 = VAR_0->priv;

 FUNC_5(VAR_1);


 FUNC_0(&VAR_1->config_work);

 FUNC_4(VAR_1->dev);

 FUNC_2(VAR_1->failover);

 FUNC_3(VAR_1);

 FUNC_1(VAR_1->dev);
}
