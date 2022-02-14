
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dummy; } ;
struct net_device {int mtu; } ;
struct ibmveth_adapter {int pool_config; int netdev; TYPE_1__* rx_buff_pool; struct vio_dev* vdev; } ;
struct TYPE_2__ {int buff_size; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vio_dev*) ;
 int FUNC_2 (int ) ;
 struct ibmveth_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct vio_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, int VAR_4)
{
 struct ibmveth_adapter *VAR_5 = FUNC_3(VAR_3);
 struct vio_dev *VAR_6 = VAR_5->vdev;
 int VAR_7 = VAR_4 + VAR_1;
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  if (VAR_7 <= VAR_5->rx_buff_pool[VAR_8].buff_size)
   break;

 if (VAR_8 == VAR_2)
  return -VAR_0;



 if (FUNC_4(VAR_5->netdev)) {
  VAR_10 = 1;
  VAR_5->pool_config = 1;
  FUNC_0(VAR_5->netdev);
  VAR_5->pool_config = 0;
 }


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5->rx_buff_pool[VAR_8].active = 1;

  if (VAR_7 <= VAR_5->rx_buff_pool[VAR_8].buff_size) {
   VAR_3->mtu = VAR_4;
   FUNC_5(VAR_6,
      FUNC_1
      (VAR_6));
   if (VAR_10) {
    return FUNC_2(VAR_5->netdev);
   }
   return 0;
  }
 }

 if (VAR_10 && (VAR_9 = FUNC_2(VAR_5->netdev)))
  return VAR_9;

 return -VAR_0;
}
