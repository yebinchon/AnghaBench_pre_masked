
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct metronomefb_par {int frame_count; TYPE_2__* board; TYPE_1__* metromem_cmd; } ;
struct TYPE_4__ {int (* met_wait_event_intr ) (struct metronomefb_par*) ;} ;
struct TYPE_3__ {int opcode; int* args; void* csum; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct metronomefb_par*) ;

__attribute__((used)) static int FUNC_2(struct metronomefb_par *VAR_0)
{
 int VAR_1;
 u16 VAR_2;
 u16 VAR_3;
 static u8 VAR_4;






 if (VAR_0->metromem_cmd->opcode == 0xCC40)
  VAR_3 = VAR_2 = 0xCC41;
 else
  VAR_3 = VAR_2 = 0xCC40;


 VAR_1 = 0;
 VAR_0->metromem_cmd->args[VAR_1] = 1 << 3
     | ((VAR_4++ % 4) & 0x0F) << 4
     | (VAR_0->frame_count - 1) << 8;
 VAR_2 += VAR_0->metromem_cmd->args[VAR_1++];


 FUNC_0((u8 *) (VAR_0->metromem_cmd->args + VAR_1), 0, (32-VAR_1)*2);

 VAR_0->metromem_cmd->csum = VAR_2;
 VAR_0->metromem_cmd->opcode = VAR_3;

 return VAR_0->board->met_wait_event_intr(VAR_0);
}
