
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int lock; } ;
struct net_device {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 spinlock_t *VAR_1 = &((struct netdev_private *)FUNC_1(VAR_0))->lock;
 unsigned long VAR_2;
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_0);
 FUNC_3(VAR_1, VAR_2);
}
