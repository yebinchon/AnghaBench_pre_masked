
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int timer_work; int bus_rescan_work; int reset_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mei_device *VAR_0)
{
 FUNC_1(&VAR_0->reset_work);
 FUNC_1(&VAR_0->bus_rescan_work);

 FUNC_0(&VAR_0->timer_work);
}
