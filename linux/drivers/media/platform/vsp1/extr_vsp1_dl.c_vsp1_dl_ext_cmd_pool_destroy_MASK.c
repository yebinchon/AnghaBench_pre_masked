
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_dl_cmd_pool {struct vsp1_dl_cmd_pool* cmds; int dma; scalar_t__ mem; int size; TYPE_1__* vsp1; } ;
struct TYPE_2__ {int bus_master; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct vsp1_dl_cmd_pool*) ;

__attribute__((used)) static void FUNC_2(struct vsp1_dl_cmd_pool *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->mem)
  FUNC_0(VAR_0->vsp1->bus_master, VAR_0->size, VAR_0->mem,
       VAR_0->dma);

 FUNC_1(VAR_0->cmds);
 FUNC_1(VAR_0);
}
