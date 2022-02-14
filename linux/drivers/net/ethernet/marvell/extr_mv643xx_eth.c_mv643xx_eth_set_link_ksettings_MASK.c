
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int phydev; } ;
struct TYPE_2__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2,
          const struct ethtool_link_ksettings *VAR_3)
{
 struct ethtool_link_ksettings VAR_4 = *VAR_3;
 u32 VAR_5;
 int VAR_6;

 if (!VAR_2->phydev)
  return -VAR_1;




 FUNC_1(&VAR_5,
      VAR_4.link_modes.advertising);
 VAR_5 &= ~VAR_0;
 FUNC_0(VAR_4.link_modes.advertising,
      VAR_5);

 VAR_6 = FUNC_3(VAR_2->phydev, &VAR_4);
 if (!VAR_6)
  FUNC_2(VAR_2);
 return VAR_6;
}
