
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_channels {int combined_count; int max_combined; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
          struct ethtool_channels *VAR_1)
{
 struct bnx2x *VAR_2 = FUNC_2(VAR_0);

 VAR_1->max_combined = FUNC_0(VAR_2);
 VAR_1->combined_count = FUNC_1(VAR_2);
}
