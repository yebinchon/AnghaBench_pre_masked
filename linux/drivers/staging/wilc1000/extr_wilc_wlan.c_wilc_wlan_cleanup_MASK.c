
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int quit; TYPE_1__* hif_func; struct txq_entry_t* tx_buffer; struct txq_entry_t* rx_buffer; } ;
struct txq_entry_t {int priv; int (* tx_complete_func ) (int ,int ) ;} ;
struct rxq_entry_t {int priv; int (* tx_complete_func ) (int ,int ) ;} ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* hif_deinit ) (int *) ;} ;


 int FUNC_0 (struct txq_entry_t*) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 struct txq_entry_t* FUNC_4 (struct wilc*) ;
 struct txq_entry_t* FUNC_5 (struct net_device*) ;

void FUNC_6(struct net_device *VAR_0)
{
 struct txq_entry_t *VAR_1;
 struct rxq_entry_t *VAR_2;
 struct wilc_vif *VAR_3 = FUNC_1(VAR_0);
 struct wilc *VAR_4 = VAR_3->wilc;

 VAR_4->quit = 1;
 do {
  VAR_1 = FUNC_5(VAR_0);
  if (!VAR_1)
   break;
  if (VAR_1->tx_complete_func)
   VAR_1->tx_complete_func(VAR_1->priv, 0);
  FUNC_0(VAR_1);
 } while (1);

 do {
  VAR_2 = FUNC_4(VAR_4);
  if (!VAR_2)
   break;
  FUNC_0(VAR_2);
 } while (1);

 FUNC_0(VAR_4->rx_buffer);
 VAR_4->rx_buffer = ((void*)0);
 FUNC_0(VAR_4->tx_buffer);
 VAR_4->tx_buffer = ((void*)0);
 VAR_4->hif_func->hif_deinit(((void*)0));
}
