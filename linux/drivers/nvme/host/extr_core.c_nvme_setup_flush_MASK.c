
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_ns {TYPE_2__* head; } ;
struct TYPE_3__ {int nsid; int opcode; } ;
struct nvme_command {TYPE_1__ common; } ;
struct TYPE_4__ {int ns_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct nvme_ns *VAR_1,
  struct nvme_command *VAR_2)
{
 VAR_2->common.opcode = VAR_0;
 VAR_2->common.nsid = FUNC_0(VAR_1->head->ns_id);
}
