
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tx_sa {int dummy; } ;
struct rx_sa {int dummy; } ;
struct rx_ip_sa {int dummy; } ;
struct ixgbe_ipsec {struct ixgbe_ipsec* tx_tbl; struct ixgbe_ipsec* rx_tbl; struct ixgbe_ipsec* ip_tbl; scalar_t__ num_tx_sa; scalar_t__ num_rx_sa; int rx_sa_list; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_2__* netdev; struct ixgbe_ipsec* ipsec; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int * xfrmdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ixgbe_ipsec*) ;
 void* FUNC_5 (size_t,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;

void FUNC_7(struct ixgbe_adapter *VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 struct ixgbe_ipsec *VAR_11;
 u32 VAR_12, VAR_13;
 size_t VAR_14;

 if (VAR_10->mac.type == VAR_7)
  return;




 VAR_12 = FUNC_0(VAR_10, VAR_5) &
  VAR_6;
 VAR_13 = FUNC_0(VAR_10, VAR_3) &
  VAR_4;
 if (VAR_12 || VAR_13)
  return;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  goto err1;
 FUNC_1(VAR_11->rx_sa_list);

 VAR_14 = sizeof(struct rx_sa) * VAR_2;
 VAR_11->rx_tbl = FUNC_5(VAR_14, VAR_0);
 if (!VAR_11->rx_tbl)
  goto err2;

 VAR_14 = sizeof(struct tx_sa) * VAR_2;
 VAR_11->tx_tbl = FUNC_5(VAR_14, VAR_0);
 if (!VAR_11->tx_tbl)
  goto err2;

 VAR_14 = sizeof(struct rx_ip_sa) * VAR_1;
 VAR_11->ip_tbl = FUNC_5(VAR_14, VAR_0);
 if (!VAR_11->ip_tbl)
  goto err2;

 VAR_11->num_rx_sa = 0;
 VAR_11->num_tx_sa = 0;

 VAR_9->ipsec = VAR_11;
 FUNC_3(VAR_9);
 FUNC_2(VAR_9);

 VAR_9->netdev->xfrmdev_ops = &VAR_8;

 return;

err2:
 FUNC_4(VAR_11->ip_tbl);
 FUNC_4(VAR_11->rx_tbl);
 FUNC_4(VAR_11->tx_tbl);
 FUNC_4(VAR_11);
err1:
 FUNC_6(VAR_9->netdev, "Unable to allocate memory for SA tables");
}
