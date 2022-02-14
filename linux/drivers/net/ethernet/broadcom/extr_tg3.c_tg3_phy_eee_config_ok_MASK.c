
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ advertised; scalar_t__ tx_lpi_timer; scalar_t__ tx_lpi_enabled; scalar_t__ eee_enabled; } ;
struct tg3 {int phy_flags; TYPE_1__ eee; } ;
struct ethtool_eee {scalar_t__ advertised; scalar_t__ tx_lpi_timer; scalar_t__ tx_lpi_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct tg3*,struct ethtool_eee*) ;

__attribute__((used)) static bool FUNC_1(struct tg3 *VAR_1)
{
 struct ethtool_eee VAR_2;

 if (!(VAR_1->phy_flags & VAR_0))
  return 1;

 FUNC_0(VAR_1, &VAR_2);

 if (VAR_1->eee.eee_enabled) {
  if (VAR_1->eee.advertised != VAR_2.advertised ||
      VAR_1->eee.tx_lpi_timer != VAR_2.tx_lpi_timer ||
      VAR_1->eee.tx_lpi_enabled != VAR_2.tx_lpi_enabled)
   return 0;
 } else {

  if (VAR_2.advertised)
   return 0;
 }

 return 1;
}
