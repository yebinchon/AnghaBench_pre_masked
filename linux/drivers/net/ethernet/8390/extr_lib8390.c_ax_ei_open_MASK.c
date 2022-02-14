
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ watchdog_timeo; } ;
struct ei_device {scalar_t__ irqlock; int page_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 struct ei_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 unsigned long VAR_2;
 struct ei_device *VAR_3 = FUNC_1(VAR_1);

 if (VAR_1->watchdog_timeo <= 0)
  VAR_1->watchdog_timeo = VAR_0;






 FUNC_3(&VAR_3->page_lock, VAR_2);
 FUNC_0(VAR_1, 1);


 FUNC_2(VAR_1);
 FUNC_4(&VAR_3->page_lock, VAR_2);
 VAR_3->irqlock = 0;
 return 0;
}
