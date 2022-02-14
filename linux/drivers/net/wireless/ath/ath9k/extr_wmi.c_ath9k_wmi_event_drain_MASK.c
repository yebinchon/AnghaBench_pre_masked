
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_htc_priv {TYPE_1__* wmi; } ;
struct TYPE_2__ {int wmi_lock; int wmi_event_queue; int wmi_event_tasklet; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ath9k_htc_priv *VAR_0)
{
 unsigned long VAR_1;

 FUNC_3(&VAR_0->wmi->wmi_event_tasklet);
 FUNC_1(&VAR_0->wmi->wmi_lock, VAR_1);
 FUNC_0(&VAR_0->wmi->wmi_event_queue);
 FUNC_2(&VAR_0->wmi->wmi_lock, VAR_1);
}
