
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct igb_adapter {int stats64_lock; int stats64; } ;


 int FUNC_0 (struct igb_adapter*) ;
 int FUNC_1 (struct rtnl_link_stats64*,int *,int) ;
 struct igb_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
       struct rtnl_link_stats64 *VAR_1)
{
 struct igb_adapter *VAR_2 = FUNC_2(VAR_0);

 FUNC_3(&VAR_2->stats64_lock);
 FUNC_0(VAR_2);
 FUNC_1(VAR_1, &VAR_2->stats64, sizeof(*VAR_1));
 FUNC_4(&VAR_2->stats64_lock);
}
