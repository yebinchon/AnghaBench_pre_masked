
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {scalar_t__ connection; int should_relinquish; scalar_t__ port_owner; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct net_local* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1)
{
 struct net_device *VAR_2 = (struct net_device *)VAR_1;
 struct net_local *VAR_3 = FUNC_0(VAR_2);


 if (VAR_3->connection != VAR_0) {
  VAR_3->should_relinquish = 1;
  return 1;
 }

 VAR_3->port_owner = 0;
 return 0;
}
