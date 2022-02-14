
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* length; void* control; void* metadata; void* spba; int nsid; int opcode; } ;
struct nvme_nvm_command {TYPE_3__ ph_rw; } ;
struct nvme_ns {TYPE_1__* head; } ;
struct TYPE_5__ {int ppa; } ;
struct nvm_rq {scalar_t__ nr_ppas; scalar_t__ flags; int dma_meta_list; TYPE_2__ ppa_addr; int opcode; } ;
struct TYPE_4__ {int ns_id; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct nvm_rq *VAR_0, struct nvme_ns *VAR_1,
        struct nvme_nvm_command *VAR_2)
{
 VAR_2->ph_rw.opcode = VAR_0->opcode;
 VAR_2->ph_rw.nsid = FUNC_1(VAR_1->head->ns_id);
 VAR_2->ph_rw.spba = FUNC_2(VAR_0->ppa_addr.ppa);
 VAR_2->ph_rw.metadata = FUNC_2(VAR_0->dma_meta_list);
 VAR_2->ph_rw.control = FUNC_0(VAR_0->flags);
 VAR_2->ph_rw.length = FUNC_0(VAR_0->nr_ppas - 1);
}
