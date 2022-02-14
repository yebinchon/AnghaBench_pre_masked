
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;
struct board_info {int wake_state; scalar_t__ wake_supported; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethtool_wolinfo*,int ,int) ;
 struct board_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct board_info *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, 0, sizeof(struct ethtool_wolinfo));


 VAR_2->supported = VAR_3->wake_supported ? VAR_0 : 0;
 VAR_2->wolopts = VAR_3->wake_state;
}
