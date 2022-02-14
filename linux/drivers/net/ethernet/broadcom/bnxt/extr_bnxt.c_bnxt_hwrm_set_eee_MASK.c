
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hwrm_port_phy_cfg_input {int flags; int tx_lpi_timer; int eee_link_speed_mask; } ;
struct ethtool_eee {int tx_lpi_timer; int advertised; scalar_t__ tx_lpi_enabled; scalar_t__ eee_enabled; } ;
struct bnxt {struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_4,
         struct hwrm_port_phy_cfg_input *VAR_5)
{
 struct ethtool_eee *VAR_6 = &VAR_4->eee;

 if (VAR_6->eee_enabled) {
  u16 VAR_7;
  u32 VAR_8 = VAR_1;

  if (VAR_6->tx_lpi_enabled)
   VAR_8 |= VAR_3;
  else
   VAR_8 |= VAR_2;

  VAR_5->flags |= FUNC_2(VAR_8);
  VAR_7 = FUNC_0(VAR_6->advertised);
  VAR_5->eee_link_speed_mask = FUNC_1(VAR_7);
  VAR_5->tx_lpi_timer = FUNC_2(VAR_6->tx_lpi_timer);
 } else {
  VAR_5->flags |= FUNC_2(VAR_0);
 }
}
