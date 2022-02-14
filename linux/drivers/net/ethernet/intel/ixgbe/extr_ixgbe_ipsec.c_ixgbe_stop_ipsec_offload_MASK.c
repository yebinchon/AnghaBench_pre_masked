
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ipsec {struct ixgbe_ipsec* tx_tbl; struct ixgbe_ipsec* rx_tbl; struct ixgbe_ipsec* ip_tbl; } ;
struct ixgbe_adapter {struct ixgbe_ipsec* ipsec; } ;


 int FUNC_0 (struct ixgbe_ipsec*) ;

void FUNC_1(struct ixgbe_adapter *VAR_0)
{
 struct ixgbe_ipsec *VAR_1 = VAR_0->ipsec;

 VAR_0->ipsec = ((void*)0);
 if (VAR_1) {
  FUNC_0(VAR_1->ip_tbl);
  FUNC_0(VAR_1->rx_tbl);
  FUNC_0(VAR_1->tx_tbl);
  FUNC_0(VAR_1);
 }
}
