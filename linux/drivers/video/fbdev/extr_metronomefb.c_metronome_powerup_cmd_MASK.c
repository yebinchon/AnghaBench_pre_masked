
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct metronomefb_par {TYPE_2__* board; TYPE_1__* metromem_cmd; } ;
struct TYPE_4__ {int (* met_wait_event ) (struct metronomefb_par*) ;int (* set_stdby ) (struct metronomefb_par*,int) ;int (* set_rst ) (struct metronomefb_par*,int) ;} ;
struct TYPE_3__ {int opcode; int* args; int csum; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct metronomefb_par*,int) ;
 int FUNC_4 (struct metronomefb_par*,int) ;
 int FUNC_5 (struct metronomefb_par*) ;

__attribute__((used)) static int FUNC_6(struct metronomefb_par *VAR_0)
{
 int VAR_1;
 u16 VAR_2;


 VAR_0->metromem_cmd->opcode = 0x1234;
 VAR_2 = VAR_0->metromem_cmd->opcode;


 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
  VAR_0->metromem_cmd->args[VAR_1] = 1024;
  VAR_2 += VAR_0->metromem_cmd->args[VAR_1];
 }


 FUNC_1(&VAR_0->metromem_cmd->args[VAR_1], 0,
        (FUNC_0(VAR_0->metromem_cmd->args) - VAR_1) * 2);

 VAR_0->metromem_cmd->csum = VAR_2;

 FUNC_2(1);
 VAR_0->board->set_rst(VAR_0, 1);

 FUNC_2(1);
 VAR_0->board->set_stdby(VAR_0, 1);

 return VAR_0->board->met_wait_event(VAR_0);
}
