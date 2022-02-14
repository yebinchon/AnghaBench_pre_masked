
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dev; } ;
struct net_device {int dummy; } ;
struct ibmveth_adapter {TYPE_1__* rx_buff_pool; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 struct ibmveth_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct vio_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(&VAR_1->dev);
 struct ibmveth_adapter *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_3(&VAR_3->rx_buff_pool[VAR_4].kobj);

 FUNC_5(VAR_2);

 FUNC_2(VAR_2);
 FUNC_1(&VAR_1->dev, ((void*)0));

 return 0;
}
