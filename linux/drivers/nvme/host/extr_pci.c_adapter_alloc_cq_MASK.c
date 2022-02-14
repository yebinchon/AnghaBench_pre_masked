
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct nvme_queue {int q_depth; int cq_dma_addr; int flags; } ;
struct TYPE_4__ {int admin_q; } ;
struct nvme_dev {TYPE_2__ ctrl; } ;
struct TYPE_3__ {void* irq_vector; void* cq_flags; void* qsize; void* cqid; int prp1; int opcode; } ;
struct nvme_command {TYPE_1__ create_cq; } ;
typedef int s16 ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_command*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct nvme_command*,int *,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct nvme_dev *VAR_4, u16 VAR_5,
  struct nvme_queue *VAR_6, s16 VAR_7)
{
 struct nvme_command VAR_8;
 int VAR_9 = VAR_2;

 if (!FUNC_4(VAR_0, &VAR_6->flags))
  VAR_9 |= VAR_1;





 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.create_cq.opcode = VAR_3;
 VAR_8.create_cq.prp1 = FUNC_1(VAR_6->cq_dma_addr);
 VAR_8.create_cq.cqid = FUNC_0(VAR_5);
 VAR_8.create_cq.qsize = FUNC_0(VAR_6->q_depth - 1);
 VAR_8.create_cq.cq_flags = FUNC_0(VAR_9);
 VAR_8.create_cq.irq_vector = FUNC_0(VAR_7);

 return FUNC_3(VAR_4->ctrl.admin_q, &VAR_8, ((void*)0), 0);
}
