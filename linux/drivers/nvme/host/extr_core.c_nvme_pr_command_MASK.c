
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvme_ns_head {int dummy; } ;
struct nvme_ns {int queue; TYPE_1__* head; } ;
struct TYPE_4__ {void* cdw10; void* nsid; int opcode; } ;
struct nvme_command {TYPE_2__ common; } ;
struct block_device {int bd_disk; } ;
typedef int c ;
struct TYPE_3__ {int ns_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_command*,int ,int) ;
 struct nvme_ns* FUNC_2 (int ,struct nvme_ns_head**,int*) ;
 int FUNC_3 (struct nvme_ns_head*,int) ;
 int FUNC_4 (int ,struct nvme_command*,int *,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct block_device *VAR_1, u32 VAR_2,
    u64 VAR_3, u64 VAR_4, u8 VAR_5)
{
 struct nvme_ns_head *VAR_6 = ((void*)0);
 struct nvme_ns *VAR_7;
 struct nvme_command VAR_8;
 int VAR_9, VAR_10;
 u8 VAR_11[16] = { 0, };

 VAR_7 = FUNC_2(VAR_1->bd_disk, &VAR_6, &VAR_9);
 if (FUNC_6(!VAR_7))
  return -VAR_0;

 FUNC_5(VAR_3, &VAR_11[0]);
 FUNC_5(VAR_4, &VAR_11[8]);

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.common.opcode = VAR_5;
 VAR_8.common.nsid = FUNC_0(VAR_7->head->ns_id);
 VAR_8.common.cdw10 = FUNC_0(VAR_2);

 VAR_10 = FUNC_4(VAR_7->queue, &VAR_8, VAR_11, 16);
 FUNC_3(VAR_6, VAR_9);
 return VAR_10;
}
