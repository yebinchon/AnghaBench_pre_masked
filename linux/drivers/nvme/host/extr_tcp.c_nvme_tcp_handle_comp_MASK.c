
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_completion {scalar_t__ command_id; int result; int status; } ;
struct nvme_tcp_rsp_pdu {struct nvme_completion cqe; } ;
struct nvme_tcp_queue {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int ctrl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (struct nvme_tcp_queue*,struct nvme_completion*) ;
 scalar_t__ FUNC_2 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct nvme_tcp_queue *VAR_1,
  struct nvme_tcp_rsp_pdu *VAR_2)
{
 struct nvme_completion *VAR_3 = &VAR_2->cqe;
 int VAR_4 = 0;







 if (FUNC_3(FUNC_2(VAR_1) == 0 &&
     VAR_3->command_id >= VAR_0))
  FUNC_0(&VAR_1->ctrl->ctrl, VAR_3->status,
    &VAR_3->result);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_3);

 return VAR_4;
}
