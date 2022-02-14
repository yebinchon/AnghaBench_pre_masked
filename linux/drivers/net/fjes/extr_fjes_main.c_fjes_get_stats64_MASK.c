
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct fjes_adapter {int stats64; } ;


 int FUNC_0 (struct rtnl_link_stats64*,int *,int) ;
 struct fjes_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct fjes_adapter *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, &VAR_2->stats64, sizeof(struct rtnl_link_stats64));
}
