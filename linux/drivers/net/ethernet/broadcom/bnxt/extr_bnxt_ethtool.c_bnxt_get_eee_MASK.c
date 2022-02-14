
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_eee {scalar_t__ lp_advertised; int eee_active; scalar_t__ tx_lpi_enabled; scalar_t__ advertised; int eee_enabled; } ;
struct bnxt {int flags; struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bnxt* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, struct ethtool_eee *VAR_3)
{
 struct bnxt *VAR_4 = FUNC_0(VAR_2);

 if (!(VAR_4->flags & VAR_0))
  return -VAR_1;

 *VAR_3 = VAR_4->eee;
 if (!VAR_4->eee.eee_enabled) {



  VAR_3->advertised = 0;
  VAR_3->tx_lpi_enabled = 0;
 }

 if (!VAR_4->eee.eee_active)
  VAR_3->lp_advertised = 0;

 return 0;
}
