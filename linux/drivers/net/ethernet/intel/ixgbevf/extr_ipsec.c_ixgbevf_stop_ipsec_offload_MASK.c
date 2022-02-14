
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_ipsec {struct ixgbevf_ipsec* tx_tbl; struct ixgbevf_ipsec* rx_tbl; } ;
struct ixgbevf_adapter {struct ixgbevf_ipsec* ipsec; } ;


 int FUNC_0 (struct ixgbevf_ipsec*) ;

void FUNC_1(struct ixgbevf_adapter *VAR_0)
{
 struct ixgbevf_ipsec *VAR_1 = VAR_0->ipsec;

 VAR_0->ipsec = ((void*)0);
 if (VAR_1) {
  FUNC_0(VAR_1->rx_tbl);
  FUNC_0(VAR_1->tx_tbl);
  FUNC_0(VAR_1);
 }
}
