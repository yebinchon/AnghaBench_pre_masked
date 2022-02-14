
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ibmvnic_tx_pool {int dummy; } ;
struct ibmvnic_adapter {int num_active_tx_pools; int * tso_pool; scalar_t__ req_mtu; int req_tx_entries_per_subcrq; int * tx_pool; TYPE_1__* login_rsp_buf; } ;
struct TYPE_2__ {int num_txsubm_subcrqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int *,int ,scalar_t__) ;
 void* FUNC_2 (int,int,int ) ;
 struct ibmvnic_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 struct ibmvnic_adapter *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_5->login_rsp_buf->num_txsubm_subcrqs);
 VAR_5->tx_pool = FUNC_2(VAR_6,
       sizeof(struct ibmvnic_tx_pool), VAR_0);
 if (!VAR_5->tx_pool)
  return -1;

 VAR_5->tso_pool = FUNC_2(VAR_6,
        sizeof(struct ibmvnic_tx_pool), VAR_0);
 if (!VAR_5->tso_pool)
  return -1;

 VAR_5->num_active_tx_pools = VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_1(VAR_4, &VAR_5->tx_pool[VAR_7],
          VAR_5->req_tx_entries_per_subcrq,
          VAR_5->req_mtu + VAR_3);
  if (VAR_8) {
   FUNC_4(VAR_5);
   return VAR_8;
  }

  VAR_8 = FUNC_1(VAR_4, &VAR_5->tso_pool[VAR_7],
          VAR_1,
          VAR_2);
  if (VAR_8) {
   FUNC_4(VAR_5);
   return VAR_8;
  }
 }

 return 0;
}
