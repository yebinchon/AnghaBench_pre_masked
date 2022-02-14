
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int wol_support; int wol_enable; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int const*) ;
 struct dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
 struct ethtool_wolinfo *VAR_3)
{
 struct dev_priv *VAR_4 = FUNC_1(VAR_2);
 struct dev_info *VAR_5 = VAR_4->adapter;


 static const u8 VAR_6[] = { 192, 168, 1, 1 };

 if (VAR_3->wolopts & ~VAR_5->wol_support)
  return -VAR_0;

 VAR_5->wol_enable = VAR_3->wolopts;


 if (VAR_3->wolopts)
  VAR_5->wol_enable |= VAR_1;
 FUNC_0(&VAR_5->hw, VAR_5->wol_enable, VAR_6);
 return 0;
}
