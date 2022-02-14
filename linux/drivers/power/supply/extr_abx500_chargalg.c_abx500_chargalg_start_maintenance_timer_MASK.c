
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maintenance_timer_expired; } ;
struct abx500_chargalg {int maintenance_timer; TYPE_1__ events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct abx500_chargalg *VAR_3,
 int VAR_4)
{
 FUNC_0(&VAR_3->maintenance_timer,
  FUNC_2(VAR_4 * VAR_2, 0),
  FUNC_2(VAR_0, 0));
 VAR_3->events.maintenance_timer_expired = 0;
 FUNC_1(&VAR_3->maintenance_timer, VAR_1);
}
