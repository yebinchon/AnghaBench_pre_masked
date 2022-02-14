
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int qos_activate; int reset_wq; TYPE_1__* rtllib; int update_beacon_wq; int watch_dog_wq; } ;
struct TYPE_2__ {int hw_sleep_wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct r8192_priv *VAR_0)
{
 FUNC_1(&VAR_0->watch_dog_wq);
 FUNC_1(&VAR_0->update_beacon_wq);
 FUNC_0(&VAR_0->rtllib->hw_sleep_wq);
 FUNC_2(&VAR_0->reset_wq);
 FUNC_2(&VAR_0->qos_activate);
}
