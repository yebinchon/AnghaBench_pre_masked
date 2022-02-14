
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct metronomefb_par {TYPE_2__* board; TYPE_1__* metromem_cmd; } ;
struct TYPE_4__ {int (* met_wait_event ) (struct metronomefb_par*) ;} ;
struct TYPE_3__ {int csum; int opcode; scalar_t__* args; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct metronomefb_par*) ;

__attribute__((used)) static int FUNC_2(struct metronomefb_par *VAR_0)
{
 int VAR_1;
 u16 VAR_2;






 VAR_2 = 0xCC20;


 VAR_1 = 0;
 VAR_0->metromem_cmd->args[VAR_1] = 0;
 VAR_2 += VAR_0->metromem_cmd->args[VAR_1++];


 FUNC_0((u8 *) (VAR_0->metromem_cmd->args + VAR_1), 0, (32-VAR_1)*2);

 VAR_0->metromem_cmd->csum = VAR_2;
 VAR_0->metromem_cmd->opcode = 0xCC20;

 return VAR_0->board->met_wait_event(VAR_0);
}
