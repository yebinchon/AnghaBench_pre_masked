
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_pre_ext_dl_body {int dummy; } ;
struct vsp1_dl_ext_cmd {size_t size; int num_cmds; int free; scalar_t__ dma; scalar_t__ data_dma; struct vsp1_dl_ext_cmd* mem; struct vsp1_dl_ext_cmd* data; scalar_t__ cmd_dma; struct vsp1_dl_ext_cmd* cmds; int opcode; struct vsp1_dl_ext_cmd* pool; int lock; } ;
struct vsp1_dl_cmd_pool {size_t size; int num_cmds; int free; scalar_t__ dma; scalar_t__ data_dma; struct vsp1_dl_cmd_pool* mem; struct vsp1_dl_cmd_pool* data; scalar_t__ cmd_dma; struct vsp1_dl_cmd_pool* cmds; int opcode; struct vsp1_dl_cmd_pool* pool; int lock; } ;
struct vsp1_device {int bus_master; } ;
typedef enum vsp1_extcmd_type { ____Placeholder_vsp1_extcmd_type } vsp1_extcmd_type ;
struct TYPE_2__ {int body_size; int opcode; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct vsp1_dl_ext_cmd* FUNC_2 (int ,size_t,scalar_t__*,int ) ;
 struct vsp1_dl_ext_cmd* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct vsp1_dl_ext_cmd*) ;
 struct vsp1_dl_ext_cmd* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static struct vsp1_dl_cmd_pool *
FUNC_8(struct vsp1_device *VAR_2, enum vsp1_extcmd_type VAR_3,
   unsigned int VAR_4)
{
 struct vsp1_dl_cmd_pool *VAR_5;
 unsigned int VAR_6;
 size_t VAR_7;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_7(&VAR_5->lock);
 FUNC_1(&VAR_5->free);

 VAR_5->cmds = FUNC_3(VAR_4, sizeof(*VAR_5->cmds), VAR_0);
 if (!VAR_5->cmds) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 VAR_7 = sizeof(struct vsp1_pre_ext_dl_body) +
     VAR_1[VAR_3].body_size;
 VAR_7 = FUNC_0(VAR_7, 16);

 VAR_5->size = VAR_7 * VAR_4;
 VAR_5->mem = FUNC_2(VAR_2->bus_master, VAR_5->size, &VAR_5->dma,
     VAR_0);
 if (!VAR_5->mem) {
  FUNC_4(VAR_5->cmds);
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  struct vsp1_dl_ext_cmd *VAR_8 = &VAR_5->cmds[VAR_6];
  size_t VAR_9 = VAR_6 * VAR_7;

  size_t VAR_10 = sizeof(struct vsp1_pre_ext_dl_body) +
         VAR_9;

  VAR_8->pool = VAR_5;
  VAR_8->opcode = VAR_1[VAR_3].opcode;





  VAR_8->num_cmds = 1;
  VAR_8->cmds = VAR_5->mem + VAR_9;
  VAR_8->cmd_dma = VAR_5->dma + VAR_9;

  VAR_8->data = VAR_5->mem + VAR_10;
  VAR_8->data_dma = VAR_5->dma + VAR_10;

  FUNC_6(&VAR_8->free, &VAR_5->free);
 }

 return VAR_5;
}
