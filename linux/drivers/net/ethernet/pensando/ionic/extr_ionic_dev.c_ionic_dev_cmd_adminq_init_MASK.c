
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq_ring_base; int ring_base; int ring_size; int intr_index; int pid; int flags; int index; int type; int lif_index; int opcode; } ;
union ionic_dev_cmd {TYPE_1__ q_init; } ;
typedef int u16 ;
struct ionic_queue {int pid; int base_pa; int num_descs; int index; int type; } ;
struct ionic_cq {int base_pa; } ;
struct ionic_qcq {struct ionic_cq cq; struct ionic_queue q; } ;
struct ionic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ionic_dev*,union ionic_dev_cmd*) ;

void FUNC_5(struct ionic_dev *VAR_3, struct ionic_qcq *VAR_4,
          u16 VAR_5, u16 VAR_6)
{
 struct ionic_queue *VAR_7 = &VAR_4->q;
 struct ionic_cq *VAR_8 = &VAR_4->cq;

 union ionic_dev_cmd VAR_9 = {
  .q_init.opcode = VAR_0,
  .q_init.lif_index = FUNC_0(VAR_5),
  .q_init.type = VAR_7->type,
  .q_init.index = FUNC_1(VAR_7->index),
  .q_init.flags = FUNC_0(VAR_2 |
         VAR_1),
  .q_init.pid = FUNC_0(VAR_7->pid),
  .q_init.intr_index = FUNC_0(VAR_6),
  .q_init.ring_size = FUNC_3(VAR_7->num_descs),
  .q_init.ring_base = FUNC_2(VAR_7->base_pa),
  .q_init.cq_ring_base = FUNC_2(VAR_8->base_pa),
 };

 FUNC_4(VAR_3, &VAR_9);
}
