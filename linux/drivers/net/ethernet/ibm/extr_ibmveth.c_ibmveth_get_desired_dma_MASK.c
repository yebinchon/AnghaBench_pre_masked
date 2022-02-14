
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dev; } ;
struct net_device {int mtu; } ;
struct iommu_table {int dummy; } ;
struct ibmveth_rx_q_entry {int dummy; } ;
struct ibmveth_adapter {TYPE_1__* rx_buff_pool; } ;
struct TYPE_2__ {unsigned long size; int buff_size; scalar_t__ active; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int,struct iommu_table*) ;
 struct net_device* FUNC_1 (int *) ;
 struct iommu_table* FUNC_2 (int *) ;
 struct ibmveth_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static unsigned long FUNC_4(struct vio_dev *VAR_4)
{
 struct net_device *VAR_5 = FUNC_1(&VAR_4->dev);
 struct ibmveth_adapter *VAR_6;
 struct iommu_table *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10 = 1;

 VAR_7 = FUNC_2(&VAR_4->dev);


 if (VAR_5 == ((void*)0))
  return FUNC_0(VAR_2, VAR_7);

 VAR_6 = FUNC_3(VAR_5);

 VAR_8 = VAR_0 + VAR_1;
 VAR_8 += FUNC_0(VAR_5->mtu, VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {

  if (VAR_6->rx_buff_pool[VAR_9].active)
   VAR_8 +=
       VAR_6->rx_buff_pool[VAR_9].size *
       FUNC_0(VAR_6->rx_buff_pool[VAR_9].
          buff_size, VAR_7);
  VAR_10 += VAR_6->rx_buff_pool[VAR_9].size;
 }

 VAR_8 += FUNC_0(
  VAR_10 * sizeof(struct ibmveth_rx_q_entry), VAR_7);

 return VAR_8;
}
