
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int link_ksettings; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int FUNC_0 (int *,struct ethtool_link_ksettings const*,int) ;
 struct tun_struct* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
      const struct ethtool_link_ksettings *VAR_1)
{
 struct tun_struct *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->link_ksettings, VAR_1, sizeof(*VAR_1));
 return 0;
}
