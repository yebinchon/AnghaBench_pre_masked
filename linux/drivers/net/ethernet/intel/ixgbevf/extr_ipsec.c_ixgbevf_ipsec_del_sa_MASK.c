
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {int flags; size_t offload_handle; struct net_device* dev; } ;
struct xfrm_state {TYPE_1__ xso; } ;
struct tx_sa {int dummy; } ;
struct rx_sa {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbevf_ipsec {int num_tx_sa; TYPE_2__* tx_tbl; int num_rx_sa; TYPE_2__* rx_tbl; } ;
struct ixgbevf_adapter {struct ixgbevf_ipsec* ipsec; } ;
struct TYPE_4__ {int pfsa; int used; int hlist; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ixgbevf_adapter*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (struct net_device*,char*,size_t,size_t) ;
 struct ixgbevf_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct xfrm_state *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->xso.dev;
 struct ixgbevf_adapter *VAR_5 = FUNC_4(VAR_4);
 struct ixgbevf_ipsec *VAR_6 = VAR_5->ipsec;
 u16 VAR_7;

 if (VAR_3->xso.flags & VAR_2) {
  VAR_7 = VAR_3->xso.offload_handle - VAR_0;

  if (!VAR_6->rx_tbl[VAR_7].used) {
   FUNC_3(VAR_4, "Invalid Rx SA selected sa_idx=%d offload_handle=%lu\n",
       VAR_7, VAR_3->xso.offload_handle);
   return;
  }

  FUNC_1(VAR_5, VAR_6->rx_tbl[VAR_7].pfsa);
  FUNC_0(&VAR_6->rx_tbl[VAR_7].hlist);
  FUNC_2(&VAR_6->rx_tbl[VAR_7], 0, sizeof(struct rx_sa));
  VAR_6->num_rx_sa--;
 } else {
  VAR_7 = VAR_3->xso.offload_handle - VAR_1;

  if (!VAR_6->tx_tbl[VAR_7].used) {
   FUNC_3(VAR_4, "Invalid Tx SA selected sa_idx=%d offload_handle=%lu\n",
       VAR_7, VAR_3->xso.offload_handle);
   return;
  }

  FUNC_1(VAR_5, VAR_6->tx_tbl[VAR_7].pfsa);
  FUNC_2(&VAR_6->tx_tbl[VAR_7], 0, sizeof(struct tx_sa));
  VAR_6->num_tx_sa--;
 }
}
