
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nvme_result {int u32; } ;
typedef int u32 ;
struct nvme_ctrl {int aen_result; int async_event_work; } ;
typedef int __le16 ;







 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_ctrl*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct nvme_ctrl*,int) ;

void FUNC_5(struct nvme_ctrl *VAR_2, __le16 VAR_3,
  volatile union nvme_result *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4->u32);
 u32 VAR_6 = VAR_5 & 0x07;

 if (FUNC_0(VAR_3) >> 1 != VAR_0)
  return;

 switch (VAR_6) {
 case 130:
  FUNC_2(VAR_2, VAR_5);
  break;
 case 131:
 case 129:
 case 132:
 case 128:
  FUNC_4(VAR_2, VAR_6);
  VAR_2->aen_result = VAR_5;
  break;
 default:
  break;
 }
 FUNC_3(VAR_1, &VAR_2->async_event_work);
}
