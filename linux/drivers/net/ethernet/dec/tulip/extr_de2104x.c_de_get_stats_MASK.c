
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; } ;
struct de_private {int lock; } ;


 int FUNC_0 (struct de_private*) ;
 struct de_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_6(struct net_device *VAR_0)
{
 struct de_private *VAR_1 = FUNC_1(VAR_0);


 FUNC_4(&VAR_1->lock);
  if (FUNC_3(VAR_0) && FUNC_2(VAR_0))
   FUNC_0(VAR_1);
 FUNC_5(&VAR_1->lock);

 return &VAR_0->stats;
}
