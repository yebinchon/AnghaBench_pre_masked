
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ibmvnic_rx_pool {int buff_size; int size; int* free_map; int active; scalar_t__ next_free; scalar_t__ next_alloc; int available; int rx_buff; int long_term_buff; } ;
struct ibmvnic_rx_buff {int dummy; } ;
struct ibmvnic_adapter {int netdev; struct ibmvnic_rx_pool* rx_pool; TYPE_1__* login_rsp_buf; } ;
struct TYPE_2__ {int num_rxadd_subcrqs; int off_rxadd_buff_size; } ;


 int FUNC_0 (struct ibmvnic_adapter*,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ibmvnic_adapter*,int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct ibmvnic_adapter*,int *) ;

__attribute__((used)) static int FUNC_8(struct ibmvnic_adapter *VAR_0)
{
 struct ibmvnic_rx_pool *VAR_1;
 int VAR_2;
 int VAR_3, VAR_4, VAR_5;
 u64 *VAR_6;

 VAR_6 = (u64 *)((u8 *)(VAR_0->login_rsp_buf) +
  FUNC_2(VAR_0->login_rsp_buf->off_rxadd_buff_size));

 VAR_2 = FUNC_2(VAR_0->login_rsp_buf->num_rxadd_subcrqs);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1 = &VAR_0->rx_pool[VAR_3];

  FUNC_6(VAR_0->netdev, "Re-setting rx_pool[%d]\n", VAR_3);

  if (VAR_1->buff_size != FUNC_3(VAR_6[VAR_3])) {
   FUNC_4(VAR_0, &VAR_1->long_term_buff);
   VAR_1->buff_size = FUNC_3(VAR_6[VAR_3]);
   VAR_5 = FUNC_0(VAR_0,
        &VAR_1->long_term_buff,
        VAR_1->size *
        VAR_1->buff_size);
  } else {
   VAR_5 = FUNC_7(VAR_0,
        &VAR_1->long_term_buff);
  }

  if (VAR_5)
   return VAR_5;

  for (VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4++)
   VAR_1->free_map[VAR_4] = VAR_4;

  FUNC_5(VAR_1->rx_buff, 0,
         VAR_1->size * sizeof(struct ibmvnic_rx_buff));

  FUNC_1(&VAR_1->available, 0);
  VAR_1->next_alloc = 0;
  VAR_1->next_free = 0;
  VAR_1->active = 1;
 }

 return 0;
}
