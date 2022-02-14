
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int curr_step_change; } ;
struct abx500_chargalg {TYPE_1__ curr_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct abx500_chargalg*,int ) ;

__attribute__((used)) static void FUNC_1
 (struct abx500_chargalg *VAR_1)
{
 if (VAR_1->curr_status.curr_step_change)
  FUNC_0(VAR_1, VAR_0);
 VAR_1->curr_status.curr_step_change = 0;
}
