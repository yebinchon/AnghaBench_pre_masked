
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cc2520_private {TYPE_4__* hw; TYPE_3__* spi; int amplified; } ;
struct TYPE_10__ {int flags; TYPE_2__* phy; scalar_t__ extra_tx_headroom; int * parent; struct cc2520_private* priv; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int* channels; int * tx_powers; void* tx_powers_size; } ;
struct TYPE_8__ {int current_channel; TYPE_1__ supported; int transmit_power; int flags; int perm_extended_addr; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (int *,char*) ;
 TYPE_4__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(struct cc2520_private *VAR_8)
{
 int VAR_9 = -VAR_0;

 VAR_8->hw = FUNC_2(sizeof(*VAR_8), &VAR_6);
 if (!VAR_8->hw)
  goto err_ret;

 VAR_8->hw->priv = VAR_8;
 VAR_8->hw->parent = &VAR_8->spi->dev;
 VAR_8->hw->extra_tx_headroom = 0;
 FUNC_4(&VAR_8->hw->phy->perm_extended_addr);


 VAR_8->hw->phy->supported.channels[0] = 0x7FFF800;
 VAR_8->hw->flags = VAR_3 | VAR_1 |
     VAR_2;

 VAR_8->hw->phy->flags = VAR_4;

 if (!VAR_8->amplified) {
  VAR_8->hw->phy->supported.tx_powers = VAR_7;
  VAR_8->hw->phy->supported.tx_powers_size = FUNC_0(VAR_7);
  VAR_8->hw->phy->transmit_power = VAR_8->hw->phy->supported.tx_powers[4];
 } else {
  VAR_8->hw->phy->supported.tx_powers = VAR_5;
  VAR_8->hw->phy->supported.tx_powers_size = FUNC_0(VAR_5);
  VAR_8->hw->phy->transmit_power = VAR_8->hw->phy->supported.tx_powers[0];
 }

 VAR_8->hw->phy->current_channel = 11;

 FUNC_1(&VAR_8->spi->dev, "registered cc2520\n");
 VAR_9 = FUNC_5(VAR_8->hw);
 if (VAR_9)
  goto err_free_device;

 return 0;

err_free_device:
 FUNC_3(VAR_8->hw);
err_ret:
 return VAR_9;
}
