
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethtool_link_ksettings {int dummy; } ;
struct TYPE_2__ {struct ethtool_link_ksettings lks; } ;
struct xgbe_prv_data {TYPE_1__ phy; } ;


 int FUNC_0 (struct ethtool_link_ksettings*,int ,struct ethtool_link_ksettings*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_1,
        struct ethtool_link_ksettings *VAR_2)
{
 struct ethtool_link_ksettings *VAR_3 = &VAR_1->phy.lks;

 FUNC_0(VAR_2, VAR_0, VAR_3, VAR_0);
}
