
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee802154_hw {int flags; TYPE_3__* phy; } ;
struct TYPE_5__ {int opt; int mode; } ;
struct TYPE_4__ {int cca_ed_levels; int cca_ed_levels_size; int tx_powers; int tx_powers_size; int * channels; } ;
struct TYPE_6__ {int current_channel; int transmit_power; int cca_ed_level; int symbol_duration; int lifs_period; int sifs_period; int flags; TYPE_2__ cca; scalar_t__ current_page; TYPE_1__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_0(struct ieee802154_hw *VAR_15)
{

 VAR_15->phy->supported.channels[0] = VAR_2;
 VAR_15->phy->supported.tx_powers_size = VAR_1;
 VAR_15->phy->supported.tx_powers = VAR_14;
 VAR_15->phy->supported.cca_ed_levels_size = VAR_0;
 VAR_15->phy->supported.cca_ed_levels = VAR_13;
 VAR_15->phy->current_channel = 18;
 VAR_15->phy->current_page = 0;
 VAR_15->phy->transmit_power = 800;
 VAR_15->phy->cca.mode = VAR_8;
 VAR_15->phy->cca.opt = VAR_9;
 VAR_15->phy->cca_ed_level = -9800;
 VAR_15->phy->symbol_duration = 16;
 VAR_15->phy->lifs_period = 40;
 VAR_15->phy->sifs_period = 12;
 VAR_15->flags =
  VAR_3 |
  VAR_6 |
  VAR_5 |
  VAR_7 |
  VAR_4;
 VAR_15->phy->flags =
  VAR_12 |
  VAR_10 |
  VAR_11;
}
