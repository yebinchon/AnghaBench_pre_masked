
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vio_dev {int dev; } ;
struct net_device {int dummy; } ;
struct iommu_table {int dummy; } ;
struct ibmvnic_statistics {int dummy; } ;
struct ibmvnic_adapter {int req_tx_queues; int req_rx_queues; TYPE_2__* rx_pool; TYPE_1__* login_rsp_buf; } ;
struct TYPE_4__ {unsigned long size; int buff_size; } ;
struct TYPE_3__ {int num_rxadd_subcrqs; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int,struct iommu_table*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int *) ;
 struct iommu_table* FUNC_3 (int *) ;
 struct ibmvnic_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static unsigned long FUNC_5(struct vio_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(&VAR_2->dev);
 struct ibmvnic_adapter *VAR_4;
 struct iommu_table *VAR_5;
 unsigned long VAR_6 = 0;
 int VAR_7;

 VAR_5 = FUNC_3(&VAR_2->dev);


 if (!VAR_3)
  return FUNC_0(VAR_0, VAR_5);

 VAR_4 = FUNC_4(VAR_3);

 VAR_6 += VAR_1;
 VAR_6 += FUNC_0(sizeof(struct ibmvnic_statistics), VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_4->req_tx_queues + VAR_4->req_rx_queues; VAR_7++)
  VAR_6 += 4 * VAR_1;

 for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_4->login_rsp_buf->num_rxadd_subcrqs);
      VAR_7++)
  VAR_6 += VAR_4->rx_pool[VAR_7].size *
      FUNC_0(VAR_4->rx_pool[VAR_7].buff_size, VAR_5);

 return VAR_6;
}
