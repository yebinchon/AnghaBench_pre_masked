
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {int uses_rxfcb; scalar_t__ rx_filer_enable; scalar_t__ hwts_rx_en; TYPE_1__* ndev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct gfar_private *VAR_2)
{

 VAR_2->uses_rxfcb = 0;

 if (VAR_2->ndev->features & (VAR_1 | VAR_0))
  VAR_2->uses_rxfcb = 1;

 if (VAR_2->hwts_rx_en || VAR_2->rx_filer_enable)
  VAR_2->uses_rxfcb = 1;
}
