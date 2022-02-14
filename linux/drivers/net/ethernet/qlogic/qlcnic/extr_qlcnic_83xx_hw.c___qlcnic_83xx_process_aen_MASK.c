
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_hardware_context {int* mbox_aen; int extend_lb_time; } ;
struct qlcnic_adapter {TYPE_1__* pdev; int dcb; int idc_aen_work; int qlcnic_wq; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct qlcnic_hardware_context*,int) ;


 int FUNC_1 (int) ;



 int FUNC_2 (struct qlcnic_hardware_context*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct qlcnic_adapter*,int*) ;
 int FUNC_6 (struct qlcnic_adapter*,int*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (struct qlcnic_adapter*,int) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;
 u32 VAR_5[VAR_2];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_5[VAR_6] = FUNC_10(FUNC_0(VAR_4, VAR_6));

 switch (FUNC_1(VAR_5[0])) {

 case 132:
  FUNC_6(VAR_3, VAR_5);
  break;
 case 134:
  FUNC_5(VAR_3, VAR_5);
  break;
 case 131:
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   VAR_3->ahw->mbox_aen[VAR_6] = FUNC_1(VAR_5[VAR_6]);
  FUNC_9(VAR_3->qlcnic_wq,
       &VAR_3->idc_aen_work, 0);
  break;
 case 128:
  VAR_4->extend_lb_time = VAR_5[1] >> 8 & 0xf;
  break;
 case 135:
  FUNC_8(VAR_3, VAR_5[1]);
  break;
 case 130:
  FUNC_4(&VAR_3->pdev->dev, "SFP+ Insert AEN:0x%x.\n",
    FUNC_1(VAR_5[0]));
  break;
 case 129:
  FUNC_4(&VAR_3->pdev->dev, "SFP Removed AEN:0x%x.\n",
    FUNC_1(VAR_5[0]));
  break;
 case 133:
  FUNC_7(VAR_3->dcb, (void *)&VAR_5[1]);
  break;
 default:
  FUNC_3(&VAR_3->pdev->dev, "Unsupported AEN:0x%x.\n",
   FUNC_1(VAR_5[0]));
  break;
 }

 FUNC_2(VAR_4, VAR_1, VAR_0);
}
