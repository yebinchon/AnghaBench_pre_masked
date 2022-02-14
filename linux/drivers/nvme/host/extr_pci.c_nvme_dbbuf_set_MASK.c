
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; int admin_q; } ;
struct nvme_dev {TYPE_1__ ctrl; int dbbuf_eis_dma_addr; int dbbuf_dbs_dma_addr; int dbbuf_dbs; } ;
struct TYPE_4__ {void* prp2; void* prp1; int opcode; } ;
struct nvme_command {TYPE_2__ dbbuf; } ;
typedef int c ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct nvme_command*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (struct nvme_dev*) ;
 scalar_t__ FUNC_4 (int ,struct nvme_command*,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct nvme_dev *VAR_1)
{
 struct nvme_command VAR_2;

 if (!VAR_1->dbbuf_dbs)
  return;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.dbbuf.opcode = VAR_0;
 VAR_2.dbbuf.prp1 = FUNC_0(VAR_1->dbbuf_dbs_dma_addr);
 VAR_2.dbbuf.prp2 = FUNC_0(VAR_1->dbbuf_eis_dma_addr);

 if (FUNC_4(VAR_1->ctrl.admin_q, &VAR_2, ((void*)0), 0)) {
  FUNC_1(VAR_1->ctrl.device, "unable to set dbbuf\n");

  FUNC_3(VAR_1);
 }
}
