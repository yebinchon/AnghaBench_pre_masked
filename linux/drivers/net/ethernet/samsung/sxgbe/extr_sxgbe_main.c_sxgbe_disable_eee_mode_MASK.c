
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sxgbe_priv_data {int tx_path_in_lpi_mode; int eee_ctrl_timer; int ioaddr; TYPE_2__* hw; } ;
struct TYPE_4__ {TYPE_1__* mac; } ;
struct TYPE_3__ {int (* reset_eee_mode ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct sxgbe_priv_data * const VAR_0)
{

 VAR_0->hw->mac->reset_eee_mode(VAR_0->ioaddr);
 FUNC_0(&VAR_0->eee_ctrl_timer);
 VAR_0->tx_path_in_lpi_mode = 0;
}
