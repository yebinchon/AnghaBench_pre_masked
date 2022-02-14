
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int collisions; } ;
struct net_device {struct net_device_stats stats; } ;
struct ioc3_private {struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int etcdc; } ;


 int VAR_0 ;
 struct ioc3_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_1)
{
 struct ioc3_private *VAR_2 = FUNC_0(VAR_1);
 struct ioc3_ethregs *VAR_3 = VAR_2->regs;

 VAR_1->stats.collisions += FUNC_1(&VAR_3->etcdc) & VAR_0;
 return &VAR_1->stats;
}
