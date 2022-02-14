
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct request {int cmd_flags; } ;
struct nvme_ns {int lba_shift; int pi_type; scalar_t__ ms; TYPE_1__* head; struct nvme_ctrl* ctrl; } ;
struct nvme_ctrl {scalar_t__ nr_streams; } ;
struct TYPE_4__ {void* dsmgmt; void* control; void* reftag; void* length; int slba; void* nsid; int opcode; } ;
struct nvme_command {TYPE_2__ rw; } ;
typedef int blk_status_t ;
struct TYPE_3__ {int ns_id; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nvme_ctrl*,struct request*,int*,int *) ;
 int FUNC_8 (struct nvme_ns*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (struct nvme_ns*) ;
 scalar_t__ FUNC_10 (struct request*) ;
 scalar_t__ FUNC_11 (struct request*) ;
 int FUNC_12 (struct request*) ;

__attribute__((used)) static inline blk_status_t FUNC_13(struct nvme_ns *VAR_13,
  struct request *VAR_14, struct nvme_command *VAR_15)
{
 struct nvme_ctrl *VAR_16 = VAR_13->ctrl;
 u16 VAR_17 = 0;
 u32 VAR_18 = 0;

 if (VAR_14->cmd_flags & VAR_8)
  VAR_17 |= VAR_2;
 if (VAR_14->cmd_flags & (VAR_7 | VAR_10))
  VAR_17 |= VAR_3;

 if (VAR_14->cmd_flags & VAR_10)
  VAR_18 |= VAR_1;

 VAR_15->rw.opcode = (FUNC_11(VAR_14) ? VAR_12 : VAR_11);
 VAR_15->rw.nsid = FUNC_5(VAR_13->head->ns_id);
 VAR_15->rw.slba = FUNC_6(FUNC_8(VAR_13, FUNC_3(VAR_14)));
 VAR_15->rw.length = FUNC_4((FUNC_2(VAR_14) >> VAR_13->lba_shift) - 1);

 if (FUNC_10(VAR_14) == VAR_9 && VAR_16->nr_streams)
  FUNC_7(VAR_16, VAR_14, &VAR_17, &VAR_18);

 if (VAR_13->ms) {






  if (!FUNC_1(VAR_14)) {
   if (FUNC_0(!FUNC_9(VAR_13)))
    return VAR_0;
   VAR_17 |= VAR_4;
  }

  switch (VAR_13->pi_type) {
  case 128:
   VAR_17 |= VAR_5;
   break;
  case 130:
  case 129:
   VAR_17 |= VAR_5 |
     VAR_6;
   VAR_15->rw.reftag = FUNC_5(FUNC_12(VAR_14));
   break;
  }
 }

 VAR_15->rw.control = FUNC_4(VAR_17);
 VAR_15->rw.dsmgmt = FUNC_5(VAR_18);
 return 0;
}
