
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lp_advertising; int advertising; int supported; } ;
struct TYPE_5__ {scalar_t__ link_mode_masks_nwords; scalar_t__ cmd; scalar_t__ duplex; int port; scalar_t__ speed; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static bool
FUNC_3(const struct ethtool_link_ksettings *VAR_3)
{
 struct ethtool_link_ksettings VAR_4 = *VAR_3;
 struct ethtool_link_ksettings VAR_5 = {};




 VAR_4 = 0;
 VAR_5 = VAR_0;
 FUNC_1(&VAR_4, VAR_2);
 VAR_4 = 0;
 VAR_4 = 0;
 VAR_4 = 0;

 return !FUNC_2(&VAR_4, &VAR_5, sizeof(VAR_4)) &&
  FUNC_0(VAR_4,
        VAR_1) &&
  FUNC_0(VAR_4,
        VAR_1) &&
  FUNC_0(VAR_4,
        VAR_1);
}
