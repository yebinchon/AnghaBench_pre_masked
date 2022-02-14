
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union nvme_result {int u64; } ;
typedef int u64 ;
typedef int u32 ;
struct nvme_ctrl {int device; int fabrics_q; } ;
struct TYPE_2__ {int attrib; int offset; int fctype; int opcode; } ;
struct nvme_command {TYPE_1__ prop_get; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct nvme_command*,union nvme_result*,int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_command*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct nvme_ctrl *VAR_4, u32 VAR_5, u64 *VAR_6)
{
 struct nvme_command VAR_7;
 union nvme_result VAR_8;
 int VAR_9;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.prop_get.opcode = VAR_2;
 VAR_7.prop_get.fctype = VAR_3;
 VAR_7.prop_get.attrib = 1;
 VAR_7.prop_get.offset = FUNC_1(VAR_5);

 VAR_9 = FUNC_0(VAR_4->fabrics_q, &VAR_7, &VAR_8, ((void*)0), 0, 0,
   VAR_0, 0, 0, 0);

 if (VAR_9 >= 0)
  *VAR_6 = FUNC_3(VAR_8.u64);
 if (FUNC_5(VAR_9 != 0))
  FUNC_2(VAR_4->device,
   "Property Get error: %d, offset %#x\n",
   VAR_9 > 0 ? VAR_9 & ~VAR_1 : VAR_9, VAR_5);
 return VAR_9;
}
