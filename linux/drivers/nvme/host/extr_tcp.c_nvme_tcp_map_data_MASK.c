
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_tcp_request {scalar_t__ data_len; struct nvme_tcp_cmd_pdu* pdu; } ;
struct nvme_tcp_queue {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct nvme_command {TYPE_1__ common; } ;
struct nvme_tcp_cmd_pdu {struct nvme_command cmd; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nvme_tcp_request* FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct nvme_tcp_queue*) ;
 int FUNC_2 (struct nvme_command*,scalar_t__) ;
 int FUNC_3 (struct nvme_tcp_queue*,struct nvme_command*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct request*) ;

__attribute__((used)) static blk_status_t FUNC_5(struct nvme_tcp_queue *VAR_2,
   struct request *VAR_3)
{
 struct nvme_tcp_request *VAR_4 = FUNC_0(VAR_3);
 struct nvme_tcp_cmd_pdu *VAR_5 = VAR_4->pdu;
 struct nvme_command *VAR_6 = &VAR_5->cmd;

 VAR_6->common.flags |= VAR_0;

 if (FUNC_4(VAR_3) == VAR_1 && VAR_4->data_len &&
     VAR_4->data_len <= FUNC_1(VAR_2))
  FUNC_3(VAR_2, VAR_6, VAR_4->data_len);
 else
  FUNC_2(VAR_6, VAR_4->data_len);

 return 0;
}
