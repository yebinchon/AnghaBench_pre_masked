
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct request_queue {int dummy; } ;
struct request {struct nvme_queue* end_io_data; int timeout; } ;
struct nvme_queue {int delete_done; int qid; TYPE_3__* dev; } ;
struct TYPE_4__ {int qid; scalar_t__ opcode; } ;
struct nvme_command {TYPE_1__ delete_queue; } ;
typedef int cmd ;
struct TYPE_5__ {struct request_queue* admin_q; } ;
struct TYPE_6__ {TYPE_2__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int VAR_2 ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request_queue*,int *,struct request*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nvme_command*,int ,int) ;
 scalar_t__ VAR_3 ;
 struct request* FUNC_6 (struct request_queue*,struct nvme_command*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct nvme_queue *VAR_6, u8 VAR_7)
{
 struct request_queue *VAR_8 = VAR_6->dev->ctrl.admin_q;
 struct request *VAR_9;
 struct nvme_command VAR_10;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.delete_queue.opcode = VAR_7;
 VAR_10.delete_queue.qid = FUNC_3(VAR_6->qid);

 VAR_9 = FUNC_6(VAR_8, &VAR_10, VAR_1, VAR_2);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_9->timeout = VAR_0;
 VAR_9->end_io_data = VAR_6;

 FUNC_4(&VAR_6->delete_done);
 FUNC_2(VAR_8, ((void*)0), VAR_9, 0,
   VAR_7 == VAR_3 ?
    VAR_4 : VAR_5);
 return 0;
}
