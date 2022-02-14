
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct ef4_nic {int mdio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ef4_nic*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ef4_nic*,int ,int ) ;
 int FUNC_2 (int *,struct ethtool_link_ksettings*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ef4_nic *VAR_7,
        struct ethtool_link_ksettings *VAR_8)
{
 u32 VAR_9 = 0, VAR_10 = 0;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_5, VAR_1);
 if (VAR_11 & VAR_2)
  VAR_9 |= VAR_0;
 VAR_11 = FUNC_1(VAR_7, VAR_5, VAR_3);
 if (VAR_11 & VAR_4)
  VAR_10 |= VAR_0;

 FUNC_2(&VAR_7->mdio, VAR_8, VAR_9, VAR_10);



 if (FUNC_0(VAR_7))
  VAR_8->base.speed = VAR_6;
}
