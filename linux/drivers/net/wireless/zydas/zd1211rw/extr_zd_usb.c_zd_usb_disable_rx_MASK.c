
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_rx {int idle_work; int reset_timer_tasklet; int setup_mutex; } ;
struct zd_usb {struct zd_usb_rx rx; } ;


 int FUNC_0 (struct zd_usb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct zd_usb *VAR_0)
{
 struct zd_usb_rx *VAR_1 = &VAR_0->rx;

 FUNC_2(&VAR_1->setup_mutex);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_1->setup_mutex);

 FUNC_4(&VAR_1->reset_timer_tasklet);
 FUNC_1(&VAR_1->idle_work);
}
