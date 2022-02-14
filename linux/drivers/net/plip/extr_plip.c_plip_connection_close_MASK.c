
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plip_local {int dummy; } ;
struct net_local {scalar_t__ connection; int pardev; scalar_t__ port_owner; scalar_t__ should_relinquish; int lock; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, struct net_local *VAR_4,
        struct plip_local *VAR_5, struct plip_local *VAR_6)
{
 FUNC_2(&VAR_4->lock);
 if (VAR_4->connection == VAR_1) {
  VAR_4->connection = VAR_2;
  FUNC_0 (VAR_3);
 }
 FUNC_3(&VAR_4->lock);
 if (VAR_4->should_relinquish) {
  VAR_4->should_relinquish = VAR_4->port_owner = 0;
  FUNC_1(VAR_4->pardev);
 }
 return VAR_0;
}
