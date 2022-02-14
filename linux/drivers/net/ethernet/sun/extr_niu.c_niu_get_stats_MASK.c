
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct niu {int dummy; } ;
struct net_device {int dummy; } ;


 struct niu* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct niu*,struct rtnl_link_stats64*) ;
 int FUNC_3 (struct niu*,struct rtnl_link_stats64*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
     struct rtnl_link_stats64 *VAR_1)
{
 struct niu *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0)) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_3(VAR_2, VAR_1);
 }
}
