
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sxgbe_priv_data {int ioaddr; TYPE_2__* hw; int tx_path_in_lpi_mode; } ;
struct TYPE_4__ {TYPE_1__* mac; } ;
struct TYPE_3__ {int (* set_eee_mode ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct sxgbe_priv_data *VAR_0)
{

 if (!VAR_0->tx_path_in_lpi_mode)
  VAR_0->hw->mac->set_eee_mode(VAR_0->ioaddr);
}
