
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ppa_addr {int ppa; } ;
struct TYPE_7__ {int value; int nlb; int spba; int nsid; int opcode; } ;
struct nvme_nvm_command {TYPE_3__ set_bb; } ;
struct nvme_ns {TYPE_4__* ctrl; TYPE_2__* head; } ;
struct nvme_command {int dummy; } ;
struct nvm_dev {TYPE_1__* q; } ;
struct TYPE_8__ {int device; int admin_q; } ;
struct TYPE_6__ {int ns_id; } ;
struct TYPE_5__ {struct nvme_ns* queuedata; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct nvme_command*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct nvm_dev *VAR_1, struct ppa_addr *VAR_2,
       int VAR_3, int VAR_4)
{
 struct nvme_ns *VAR_5 = VAR_1->q->queuedata;
 struct nvme_nvm_command VAR_6 = {};
 int VAR_7 = 0;

 VAR_6.set_bb.opcode = VAR_0;
 VAR_6.set_bb.nsid = FUNC_1(VAR_5->head->ns_id);
 VAR_6.set_bb.spba = FUNC_2(VAR_2->ppa);
 VAR_6.set_bb.nlb = FUNC_0(VAR_3 - 1);
 VAR_6.set_bb.value = VAR_4;

 VAR_7 = FUNC_4(VAR_5->ctrl->admin_q, (struct nvme_command *)&VAR_6,
        ((void*)0), 0);
 if (VAR_7)
  FUNC_3(VAR_5->ctrl->device, "set bad block table failed (%d)\n",
         VAR_7);
 return VAR_7;
}
