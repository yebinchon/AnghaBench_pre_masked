
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ func; } ;
struct TYPE_3__ {scalar_t__ function; } ;
struct ice_pf {int state; TYPE_2__ serv_task; TYPE_1__ serv_tmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ice_pf *VAR_2)
{
 FUNC_3(VAR_0, VAR_2->state);

 if (VAR_2->serv_tmr.function)
  FUNC_2(&VAR_2->serv_tmr);
 if (VAR_2->serv_task.func)
  FUNC_0(&VAR_2->serv_task);

 FUNC_1(VAR_1, VAR_2->state);
}
