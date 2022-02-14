
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int coal; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int dummy; } ;


 int FUNC_0 (struct ethtool_coalesce*,int *,int) ;
 struct tg3* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct ethtool_coalesce *VAR_1)
{
 struct tg3 *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, &VAR_2->coal, sizeof(*VAR_1));
 return 0;
}
