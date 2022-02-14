
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct tg3 {int lock; struct rtnl_link_stats64 net_stats_prev; int hw_stats; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct tg3* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tg3*,int ) ;
 int FUNC_4 (struct tg3*,struct rtnl_link_stats64*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
       struct rtnl_link_stats64 *VAR_2)
{
 struct tg3 *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_3->lock);
 if (!VAR_3->hw_stats || !FUNC_3(VAR_3, VAR_0)) {
  *VAR_2 = VAR_3->net_stats_prev;
  FUNC_2(&VAR_3->lock);
  return;
 }

 FUNC_4(VAR_3, VAR_2);
 FUNC_2(&VAR_3->lock);
}
