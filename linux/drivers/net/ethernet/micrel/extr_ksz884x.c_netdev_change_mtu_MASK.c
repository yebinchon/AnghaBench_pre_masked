
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ksz_hw {int dev_count; int features; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int mtu; struct net_device* dev; struct ksz_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dev_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, int VAR_6)
{
 struct dev_priv *VAR_7 = FUNC_0(VAR_5);
 struct dev_info *VAR_8 = VAR_7->adapter;
 struct ksz_hw *VAR_9 = &VAR_8->hw;
 int VAR_10;

 if (FUNC_1(VAR_5))
  return -VAR_0;


 if (VAR_9->dev_count > 1)
  if (VAR_5 != VAR_8->dev)
   return 0;

 VAR_10 = VAR_6 + VAR_1 + 4;
 if (VAR_10 > VAR_3) {
  VAR_9->features |= VAR_4;
  VAR_10 = VAR_2;
 } else {
  VAR_9->features &= ~VAR_4;
  VAR_10 = VAR_3;
 }
 VAR_10 = (VAR_10 + 3) & ~3;
 VAR_8->mtu = VAR_10;
 VAR_5->mtu = VAR_6;

 return 0;
}
