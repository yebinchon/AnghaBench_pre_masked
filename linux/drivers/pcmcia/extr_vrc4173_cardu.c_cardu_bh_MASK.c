
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info; int (* handler ) (int ,scalar_t__) ;int event_lock; scalar_t__ events; } ;
typedef TYPE_1__ vrc4173_socket_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 vrc4173_socket_t *VAR_1 = (vrc4173_socket_t *)VAR_0;
 uint16_t VAR_2;

 FUNC_0(&VAR_1->event_lock);
 VAR_2 = VAR_1->events;
 VAR_1->events = 0;
 FUNC_1(&VAR_1->event_lock);

 if (VAR_1->handler)
  VAR_1->handler(VAR_1->info, VAR_2);
}
