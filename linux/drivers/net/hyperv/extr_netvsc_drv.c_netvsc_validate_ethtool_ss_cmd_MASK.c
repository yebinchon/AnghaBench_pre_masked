
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; scalar_t__ cmd; scalar_t__ duplex; scalar_t__ speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
typedef int diff1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,struct ethtool_link_ksettings*,int) ;

__attribute__((used)) static bool
FUNC_2(const struct ethtool_link_ksettings *VAR_2)
{
 struct ethtool_link_ksettings VAR_3 = *VAR_2;
 struct ethtool_link_ksettings VAR_4 = {};

 VAR_3 = 0;
 VAR_3 = 0;

 FUNC_0(&VAR_3, VAR_1);
 VAR_3 = 0;

 VAR_4 = VAR_0;

 return !FUNC_1(&VAR_3, &VAR_4, sizeof(VAR_3));
}
