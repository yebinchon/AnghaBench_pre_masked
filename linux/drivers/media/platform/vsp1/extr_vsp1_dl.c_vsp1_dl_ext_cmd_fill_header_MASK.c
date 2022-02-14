
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_dl_ext_cmd {TYPE_1__* cmds; int data_dma; int flags; int opcode; } ;
struct TYPE_2__ {scalar_t__ reserved; int address_set; int flags; int opcode; } ;



__attribute__((used)) static void FUNC_0(struct vsp1_dl_ext_cmd *VAR_0)
{
 VAR_0->cmds[0].opcode = VAR_0->opcode;
 VAR_0->cmds[0].flags = VAR_0->flags;
 VAR_0->cmds[0].address_set = VAR_0->data_dma;
 VAR_0->cmds[0].reserved = 0;
}
