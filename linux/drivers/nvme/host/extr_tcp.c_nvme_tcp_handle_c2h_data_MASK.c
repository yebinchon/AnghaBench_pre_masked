
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int tag; } ;
struct nvme_tcp_queue {TYPE_2__* ctrl; int data_remaining; } ;
struct TYPE_4__ {int flags; } ;
struct nvme_tcp_data_pdu {TYPE_1__ hdr; int data_length; int command_id; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {TYPE_3__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct request* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct nvme_tcp_queue*) ;
 int FUNC_6 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nvme_tcp_queue *VAR_5,
  struct nvme_tcp_data_pdu *VAR_6)
{
 struct request *VAR_7;

 VAR_7 = FUNC_0(FUNC_6(VAR_5), VAR_6->command_id);
 if (!VAR_7) {
  FUNC_2(VAR_5->ctrl->ctrl.device,
   "queue %d tag %#x not found\n",
   FUNC_5(VAR_5), VAR_6->command_id);
  return -VAR_1;
 }

 if (!FUNC_1(VAR_7)) {
  FUNC_2(VAR_5->ctrl->ctrl.device,
   "queue %d tag %#x unexpected data\n",
   FUNC_5(VAR_5), VAR_7->tag);
  return -VAR_0;
 }

 VAR_5->data_remaining = FUNC_3(VAR_6->data_length);

 if (VAR_6->hdr.flags & VAR_4 &&
     FUNC_7(!(VAR_6->hdr.flags & VAR_3))) {
  FUNC_2(VAR_5->ctrl->ctrl.device,
   "queue %d tag %#x SUCCESS set but not last PDU\n",
   FUNC_5(VAR_5), VAR_7->tag);
  FUNC_4(&VAR_5->ctrl->ctrl);
  return -VAR_2;
 }

 return 0;
}
