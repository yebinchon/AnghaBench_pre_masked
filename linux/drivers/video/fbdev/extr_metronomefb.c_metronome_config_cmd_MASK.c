
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct metronomefb_par {size_t dt; TYPE_1__* board; TYPE_2__* metromem_cmd; } ;
struct TYPE_6__ {int config; } ;
struct TYPE_5__ {int csum; int opcode; int * args; } ;
struct TYPE_4__ {int (* met_wait_event ) (struct metronomefb_par*) ;} ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct metronomefb_par*) ;

__attribute__((used)) static int FUNC_5(struct metronomefb_par *VAR_1)
{




 FUNC_2(VAR_1->metromem_cmd->args, VAR_0[VAR_1->dt].config,
  sizeof(VAR_0[VAR_1->dt].config));

 FUNC_3(&VAR_1->metromem_cmd->args[4], 0,
        (FUNC_0(VAR_1->metromem_cmd->args) - 4) * 2);

 VAR_1->metromem_cmd->csum = 0xCC10;
 VAR_1->metromem_cmd->csum += FUNC_1(VAR_1->metromem_cmd->args, 4);
 VAR_1->metromem_cmd->opcode = 0xCC10;

 return VAR_1->board->met_wait_event(VAR_1);
}
