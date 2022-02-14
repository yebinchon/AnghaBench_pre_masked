
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_ns {int lba_shift; TYPE_1__* head; TYPE_2__* ctrl; } ;
struct TYPE_6__ {scalar_t__ control; int length; int slba; int nsid; int opcode; } ;
struct nvme_command {TYPE_3__ write_zeroes; } ;
typedef int blk_status_t ;
struct TYPE_5__ {int quirks; } ;
struct TYPE_4__ {int ns_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nvme_ns*,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct nvme_ns*,struct request*,struct nvme_command*) ;

__attribute__((used)) static inline blk_status_t FUNC_7(struct nvme_ns *VAR_3,
  struct request *VAR_4, struct nvme_command *VAR_5)
{
 if (VAR_3->ctrl->quirks & VAR_1)
  return FUNC_6(VAR_3, VAR_4, VAR_5);

 VAR_5->write_zeroes.opcode = VAR_2;
 VAR_5->write_zeroes.nsid = FUNC_3(VAR_3->head->ns_id);
 VAR_5->write_zeroes.slba =
  FUNC_4(FUNC_5(VAR_3, FUNC_1(VAR_4)));
 VAR_5->write_zeroes.length =
  FUNC_2((FUNC_0(VAR_4) >> VAR_3->lba_shift) - 1);
 VAR_5->write_zeroes.control = 0;
 return VAR_0;
}
