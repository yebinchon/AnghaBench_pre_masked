
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvme_ctrl {int aen_result; int device; int ana_work; int ana_log_buf; int fw_act_work; int events; } ;






 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nvme_ctrl*,int ) ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int const,int *) ;
 int FUNC_5 (struct nvme_ctrl*,int) ;

__attribute__((used)) static void FUNC_6(struct nvme_ctrl *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = (VAR_3 & 0xff00) >> 8;

 FUNC_5(VAR_2, VAR_4);

 switch (VAR_4) {
 case 128:
  FUNC_4(128, &VAR_2->events);
  FUNC_2(VAR_2);
  break;
 case 129:





  if (FUNC_1(VAR_2, VAR_0))
   FUNC_3(VAR_1, &VAR_2->fw_act_work);
  break;







 case 130:
  VAR_2->aen_result = VAR_3;
  break;
 default:
  FUNC_0(VAR_2->device, "async event result %08x\n", VAR_3);
 }
}
