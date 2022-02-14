
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id; } ;
struct nic {TYPE_1__ mii; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nic*,int *,int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,struct ethtool_link_ksettings const*) ;
 struct nic* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
       const struct ethtool_link_ksettings *VAR_4)
{
 struct nic *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 FUNC_1(VAR_3, VAR_5->mii.phy_id, VAR_1, VAR_0);
 VAR_6 = FUNC_2(&VAR_5->mii, VAR_4);
 FUNC_0(VAR_5, ((void*)0), VAR_2);

 return VAR_6;
}
