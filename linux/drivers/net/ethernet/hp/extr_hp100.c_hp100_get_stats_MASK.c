
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {int base_addr; struct net_device_stats stats; } ;
struct hp100_private {int lock; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct net_device*) ;
 struct hp100_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static struct net_device_stats *FUNC_7(struct net_device *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = VAR_1->base_addr;
 struct hp100_private *VAR_4 = FUNC_4(VAR_1);





 FUNC_5(&VAR_4->lock, VAR_2);
 FUNC_0();
 FUNC_3(VAR_1);
 FUNC_1();
 FUNC_6(&VAR_4->lock, VAR_2);
 return &(VAR_1->stats);
}
