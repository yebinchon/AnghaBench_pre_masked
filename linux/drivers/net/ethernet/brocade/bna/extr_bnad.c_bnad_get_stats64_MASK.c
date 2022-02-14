
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct bnad {int bna_lock; } ;


 int FUNC_0 (struct bnad*,struct rtnl_link_stats64*) ;
 int FUNC_1 (struct bnad*,struct rtnl_link_stats64*) ;
 struct bnad* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct bnad *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 FUNC_3(&VAR_2->bna_lock, VAR_3);

 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2, VAR_1);

 FUNC_4(&VAR_2->bna_lock, VAR_3);
}
