
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; int base_addr; } ;
struct corkscrew_private {int lock; } ;


 struct corkscrew_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_0)
{
 struct corkscrew_private *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;

 if (FUNC_1(VAR_0)) {
  FUNC_2(&VAR_1->lock, VAR_2);
  FUNC_4(VAR_0->base_addr, VAR_0);
  FUNC_3(&VAR_1->lock, VAR_2);
 }
 return &VAR_0->stats;
}
