
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eee {scalar_t__ tx_lpi_timer; int advertised; int supported; scalar_t__ eee_enabled; scalar_t__ tx_lpi_enabled; } ;
struct bnxt_link_info {int autoneg; int advertising; } ;
struct bnxt {int flags; scalar_t__ lpi_tmr_hi; scalar_t__ lpi_tmr_lo; struct bnxt_link_info link_info; struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bnxt*,int,int) ;
 struct bnxt* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, struct ethtool_eee *VAR_5)
{
 struct bnxt *VAR_6 = FUNC_3(VAR_4);
 struct ethtool_eee *VAR_7 = &VAR_6->eee;
 struct bnxt_link_info *VAR_8 = &VAR_6->link_info;
 u32 VAR_9 =
   FUNC_1(VAR_8->advertising, 0);
 int VAR_10 = 0;

 if (!FUNC_0(VAR_6))
  return -VAR_3;

 if (!(VAR_6->flags & VAR_1))
  return -VAR_3;

 if (!VAR_5->eee_enabled)
  goto eee_ok;

 if (!(VAR_8->autoneg & VAR_0)) {
  FUNC_4(VAR_4, "EEE requires autoneg\n");
  return -VAR_2;
 }
 if (VAR_5->tx_lpi_enabled) {
  if (VAR_6->lpi_tmr_hi && (VAR_5->tx_lpi_timer > VAR_6->lpi_tmr_hi ||
           VAR_5->tx_lpi_timer < VAR_6->lpi_tmr_lo)) {
   FUNC_4(VAR_4, "Valid LPI timer range is %d and %d microsecs\n",
        VAR_6->lpi_tmr_lo, VAR_6->lpi_tmr_hi);
   return -VAR_2;
  } else if (!VAR_6->lpi_tmr_hi) {
   VAR_5->tx_lpi_timer = VAR_7->tx_lpi_timer;
  }
 }
 if (!VAR_5->advertised) {
  VAR_5->advertised = VAR_9 & VAR_7->supported;
 } else if (VAR_5->advertised & ~VAR_9) {
  FUNC_4(VAR_4, "EEE advertised %x must be a subset of autoneg advertised speeds %x\n",
       VAR_5->advertised, VAR_9);
  return -VAR_2;
 }

 VAR_7->advertised = VAR_5->advertised;
 VAR_7->tx_lpi_enabled = VAR_5->tx_lpi_enabled;
 VAR_7->tx_lpi_timer = VAR_5->tx_lpi_timer;
eee_ok:
 VAR_7->eee_enabled = VAR_5->eee_enabled;

 if (FUNC_5(VAR_4))
  VAR_10 = FUNC_2(VAR_6, 0, 1);

 return VAR_10;
}
