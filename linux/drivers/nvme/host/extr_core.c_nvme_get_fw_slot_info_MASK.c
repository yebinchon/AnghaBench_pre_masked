
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fw_slot_info_log {int dummy; } ;
struct nvme_ctrl {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nvme_fw_slot_info_log*) ;
 struct nvme_fw_slot_info_log* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct nvme_ctrl*,int ,int ,int ,struct nvme_fw_slot_info_log*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct nvme_ctrl *VAR_3)
{
 struct nvme_fw_slot_info_log *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 if (FUNC_3(VAR_3, VAR_2, 0, VAR_1, VAR_4,
   sizeof(*VAR_4), 0))
  FUNC_0(VAR_3->device, "Get FW SLOT INFO log error\n");
 FUNC_1(VAR_4);
}
