
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvme_ctrl {int device; int fabrics_q; } ;
struct TYPE_2__ {int value; int offset; scalar_t__ attrib; int fctype; int opcode; } ;
struct nvme_command {TYPE_1__ prop_set; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct nvme_command*,int *,int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (struct nvme_command*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct nvme_ctrl *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct nvme_command VAR_7;
 int VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.prop_set.opcode = VAR_2;
 VAR_7.prop_set.fctype = VAR_3;
 VAR_7.prop_set.attrib = 0;
 VAR_7.prop_set.offset = FUNC_1(VAR_5);
 VAR_7.prop_set.value = FUNC_2(VAR_6);

 VAR_8 = FUNC_0(VAR_4->fabrics_q, &VAR_7, ((void*)0), ((void*)0), 0, 0,
   VAR_0, 0, 0, 0);
 if (FUNC_5(VAR_8))
  FUNC_3(VAR_4->device,
   "Property Set error: %d, offset %#x\n",
   VAR_8 > 0 ? VAR_8 & ~VAR_1 : VAR_8, VAR_5);
 return VAR_8;
}
