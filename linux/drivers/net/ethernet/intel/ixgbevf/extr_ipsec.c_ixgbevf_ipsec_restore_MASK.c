
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_sa {int xs; scalar_t__ used; } ;
struct rx_sa {int xs; scalar_t__ used; } ;
struct net_device {int features; } ;
struct ixgbevf_ipsec {struct tx_sa* tx_tbl; struct rx_sa* rx_tbl; } ;
struct ixgbevf_adapter {struct net_device* netdev; struct ixgbevf_ipsec* ipsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbevf_adapter*,int ) ;
 int FUNC_1 (struct net_device*,char*,int,int) ;

void FUNC_2(struct ixgbevf_adapter *VAR_2)
{
 struct ixgbevf_ipsec *VAR_3 = VAR_2->ipsec;
 struct net_device *VAR_4 = VAR_2->netdev;
 int VAR_5;

 if (!(VAR_2->netdev->features & VAR_1))
  return;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct rx_sa *VAR_6 = &VAR_3->rx_tbl[VAR_5];
  struct tx_sa *VAR_7 = &VAR_3->tx_tbl[VAR_5];
  int VAR_8;

  if (VAR_6->used) {
   VAR_8 = FUNC_0(VAR_2, VAR_6->xs);
   if (VAR_8 < 0)
    FUNC_1(VAR_4, "reload rx_tbl[%d] failed = %d\n",
        VAR_5, VAR_8);
  }

  if (VAR_7->used) {
   VAR_8 = FUNC_0(VAR_2, VAR_7->xs);
   if (VAR_8 < 0)
    FUNC_1(VAR_4, "reload tx_tbl[%d] failed = %d\n",
        VAR_5, VAR_8);
  }
 }
}
