
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int sopass; int wolopts; int supported; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int wol_enable; int wol_support; } ;


 int FUNC_0 (int *,int ,int) ;
 struct dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
 struct ethtool_wolinfo *VAR_1)
{
 struct dev_priv *VAR_2 = FUNC_1(VAR_0);
 struct dev_info *VAR_3 = VAR_2->adapter;

 VAR_1->supported = VAR_3->wol_support;
 VAR_1->wolopts = VAR_3->wol_enable;
 FUNC_0(&VAR_1->sopass, 0, sizeof(VAR_1->sopass));
}
