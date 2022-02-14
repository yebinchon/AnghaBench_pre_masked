
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvme_nvm_id20 {int dummy; } ;
struct nvme_nvm_id12 {int ver_id; } ;
struct TYPE_6__ {int nsid; int opcode; } ;
struct nvme_nvm_command {TYPE_2__ identity; } ;
struct nvme_ns {TYPE_4__* ctrl; TYPE_3__* head; } ;
struct nvme_command {int dummy; } ;
struct nvm_dev {int geo; TYPE_1__* q; } ;
struct TYPE_8__ {int device; int admin_q; } ;
struct TYPE_7__ {int ns_id; } ;
struct TYPE_5__ {struct nvme_ns* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct nvme_nvm_id12*) ;
 struct nvme_nvm_id12* FUNC_3 (int,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct nvme_nvm_id12*,int *) ;
 int FUNC_5 (struct nvme_nvm_id20*,int *) ;
 int FUNC_6 (int ,struct nvme_command*,struct nvme_nvm_id12*,int) ;

__attribute__((used)) static int FUNC_7(struct nvm_dev *VAR_5)
{
 struct nvme_ns *VAR_6 = VAR_5->q->queuedata;
 struct nvme_nvm_id12 *VAR_7;
 struct nvme_nvm_command VAR_8 = {};
 int VAR_9;

 VAR_8.identity.opcode = VAR_4;
 VAR_8.identity.nsid = FUNC_0(VAR_6->head->ns_id);

 VAR_7 = FUNC_3(sizeof(struct nvme_nvm_id12), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_9 = FUNC_6(VAR_6->ctrl->admin_q, (struct nvme_command *)&VAR_8,
    VAR_7, sizeof(struct nvme_nvm_id12));
 if (VAR_9) {
  VAR_9 = -VAR_1;
  goto out;
 }





 switch (VAR_7->ver_id) {
 case 1:
  VAR_9 = FUNC_4(VAR_7, &VAR_5->geo);
  break;
 case 2:
  VAR_9 = FUNC_5((struct nvme_nvm_id20 *)VAR_7,
       &VAR_5->geo);
  break;
 default:
  FUNC_1(VAR_6->ctrl->device, "OCSSD revision not supported (%d)\n",
       VAR_7->ver_id);
  VAR_9 = -VAR_0;
 }

out:
 FUNC_2(VAR_7);
 return VAR_9;
}
