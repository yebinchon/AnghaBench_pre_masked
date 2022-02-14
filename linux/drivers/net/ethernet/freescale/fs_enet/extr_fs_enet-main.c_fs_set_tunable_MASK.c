
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct fs_platform_info {int rx_copybreak; } ;
struct fs_enet_private {struct fs_platform_info* fpi; } ;
struct ethtool_tunable {int id; } ;


 int VAR_0 ;

 struct fs_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
     const struct ethtool_tunable *VAR_2, const void *VAR_3)
{
 struct fs_enet_private *VAR_4 = FUNC_0(VAR_1);
 struct fs_platform_info *VAR_5 = VAR_4->fpi;
 int VAR_6 = 0;

 switch (VAR_2->id) {
 case 128:
  VAR_5->rx_copybreak = *(u32 *)VAR_3;
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
