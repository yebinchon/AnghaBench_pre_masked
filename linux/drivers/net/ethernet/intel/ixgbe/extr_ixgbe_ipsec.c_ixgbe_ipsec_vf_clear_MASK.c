
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ixgbe_ipsec {TYPE_2__* tx_tbl; scalar_t__ num_tx_sa; TYPE_1__* rx_tbl; scalar_t__ num_rx_sa; } ;
struct ixgbe_adapter {struct ixgbe_ipsec* ipsec; } ;
struct TYPE_4__ {int mode; scalar_t__ vf; int xs; int used; } ;
struct TYPE_3__ {int mode; scalar_t__ vf; int xs; int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct ixgbe_adapter *VAR_2, u32 VAR_3)
{
 struct ixgbe_ipsec *VAR_4 = VAR_2->ipsec;
 int VAR_5;

 if (!VAR_4)
  return;


 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_4->num_rx_sa; VAR_5++) {
  if (!VAR_4->rx_tbl[VAR_5].used)
   continue;
  if (VAR_4->rx_tbl[VAR_5].mode & VAR_1 &&
      VAR_4->rx_tbl[VAR_5].vf == VAR_3)
   FUNC_0(VAR_4->rx_tbl[VAR_5].xs);
 }


 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_4->num_tx_sa; VAR_5++) {
  if (!VAR_4->tx_tbl[VAR_5].used)
   continue;
  if (VAR_4->tx_tbl[VAR_5].mode & VAR_1 &&
      VAR_4->tx_tbl[VAR_5].vf == VAR_3)
   FUNC_0(VAR_4->tx_tbl[VAR_5].xs);
 }
}
