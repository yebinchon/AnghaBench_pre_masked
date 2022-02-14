
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int admin_q; } ;
struct nvme_dev {TYPE_2__ ctrl; } ;
struct TYPE_3__ {int qid; int opcode; } ;
struct nvme_command {TYPE_1__ delete_queue; } ;
typedef int c ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_command*,int ,int) ;
 int FUNC_2 (int ,struct nvme_command*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_dev *VAR_0, u8 VAR_1, u16 VAR_2)
{
 struct nvme_command VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.delete_queue.opcode = VAR_1;
 VAR_3.delete_queue.qid = FUNC_0(VAR_2);

 return FUNC_2(VAR_0->ctrl.admin_q, &VAR_3, ((void*)0), 0);
}
