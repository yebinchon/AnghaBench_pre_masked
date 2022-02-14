
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pcnet32_private {int watchdog_timer; int lock; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct pcnet32_private* FUNC_0 (int ,struct timer_list*,int ) ;
 struct pcnet32_private* VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct pcnet32_private *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct net_device *VAR_5 = VAR_4->dev;
 unsigned long VAR_6;


 FUNC_4(&VAR_4->lock, VAR_6);
 FUNC_2(VAR_5, 0);
 FUNC_5(&VAR_4->lock, VAR_6);

 FUNC_1(&VAR_4->watchdog_timer, FUNC_3(VAR_0));
}
