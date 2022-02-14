
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ethtool_link_ksettings {int dummy; } ;
struct bnxt_link_info {int autoneg; int lp_pause; int lp_auto_link_speeds; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ethtool_link_ksettings*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct bnxt_link_info *VAR_2,
    struct ethtool_link_ksettings *VAR_3)
{
 u16 VAR_4 = VAR_2->lp_auto_link_speeds;
 u8 VAR_5 = 0;

 if (VAR_2->autoneg & VAR_0)
  VAR_5 = VAR_2->lp_pause;

 FUNC_0(VAR_4, VAR_5, VAR_3,
    VAR_1);
}
