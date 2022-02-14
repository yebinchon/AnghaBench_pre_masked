
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct ibmvnic_rx_pool {int size; int index; int buff_size; int active; int* free_map; scalar_t__ next_free; scalar_t__ next_alloc; int available; int long_term_buff; void* rx_buff; } ;
struct ibmvnic_rx_buff {int dummy; } ;
struct ibmvnic_adapter {int num_active_rx_pools; int req_rx_add_entries_per_subcrq; int netdev; struct ibmvnic_rx_pool* rx_pool; TYPE_2__* login_rsp_buf; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int off_rxadd_buff_size; int num_rxadd_subcrqs; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ibmvnic_adapter*,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ,char*,int,int,int) ;
 struct ibmvnic_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct ibmvnic_adapter *VAR_2 = FUNC_7(VAR_1);
 struct device *VAR_3 = &VAR_2->vdev->dev;
 struct ibmvnic_rx_pool *VAR_4;
 int VAR_5;
 u64 *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 =
  FUNC_2(VAR_2->login_rsp_buf->num_rxadd_subcrqs);
 VAR_6 = (u64 *)((u8 *)(VAR_2->login_rsp_buf) +
  FUNC_2(VAR_2->login_rsp_buf->off_rxadd_buff_size));

 VAR_2->rx_pool = FUNC_5(VAR_5,
       sizeof(struct ibmvnic_rx_pool),
       VAR_0);
 if (!VAR_2->rx_pool) {
  FUNC_4(VAR_3, "Failed to allocate rx pools\n");
  return -1;
 }

 VAR_2->num_active_rx_pools = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_4 = &VAR_2->rx_pool[VAR_7];

  FUNC_6(VAR_2->netdev,
      "Initializing rx_pool[%d], %lld buffs, %lld bytes each\n",
      VAR_7, VAR_2->req_rx_add_entries_per_subcrq,
      FUNC_3(VAR_6[VAR_7]));

  VAR_4->size = VAR_2->req_rx_add_entries_per_subcrq;
  VAR_4->index = VAR_7;
  VAR_4->buff_size = FUNC_3(VAR_6[VAR_7]);
  VAR_4->active = 1;

  VAR_4->free_map = FUNC_5(VAR_4->size, sizeof(int),
         VAR_0);
  if (!VAR_4->free_map) {
   FUNC_8(VAR_2);
   return -1;
  }

  VAR_4->rx_buff = FUNC_5(VAR_4->size,
        sizeof(struct ibmvnic_rx_buff),
        VAR_0);
  if (!VAR_4->rx_buff) {
   FUNC_4(VAR_3, "Couldn't alloc rx buffers\n");
   FUNC_8(VAR_2);
   return -1;
  }

  if (FUNC_0(VAR_2, &VAR_4->long_term_buff,
      VAR_4->size * VAR_4->buff_size)) {
   FUNC_8(VAR_2);
   return -1;
  }

  for (VAR_8 = 0; VAR_8 < VAR_4->size; ++VAR_8)
   VAR_4->free_map[VAR_8] = VAR_8;

  FUNC_1(&VAR_4->available, 0);
  VAR_4->next_alloc = 0;
  VAR_4->next_free = 0;
 }

 return 0;
}
