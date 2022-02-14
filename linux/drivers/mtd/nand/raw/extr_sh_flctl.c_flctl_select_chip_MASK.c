
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_flctl {int qos_request; TYPE_1__* pdev; int holden; int pm_qos; int flcmncr_base; } ;
struct nand_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sh_flctl*) ;
 int FUNC_2 (struct sh_flctl*) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int *,int ,int) ;
 int FUNC_5 (int *) ;
 struct sh_flctl* FUNC_6 (int ) ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct nand_chip *VAR_3, int VAR_4)
{
 struct sh_flctl *VAR_5 = FUNC_6(FUNC_7(VAR_3));
 int VAR_6;

 switch (VAR_4) {
 case -1:
  VAR_5->flcmncr_base &= ~VAR_0;

  FUNC_8(&VAR_5->pdev->dev);
  FUNC_10(VAR_5->flcmncr_base, FUNC_1(VAR_5));

  if (VAR_5->qos_request) {
   FUNC_5(&VAR_5->pm_qos);
   VAR_5->qos_request = 0;
  }

  FUNC_9(&VAR_5->pdev->dev);
  break;
 case 0:
  VAR_5->flcmncr_base |= VAR_0;

  if (!VAR_5->qos_request) {
   VAR_6 = FUNC_4(&VAR_5->pdev->dev,
       &VAR_5->pm_qos,
       VAR_1,
       100);
   if (VAR_6 < 0)
    FUNC_3(&VAR_5->pdev->dev,
     "PM QoS request failed: %d\n", VAR_6);
   VAR_5->qos_request = 1;
  }

  if (VAR_5->holden) {
   FUNC_8(&VAR_5->pdev->dev);
   FUNC_10(VAR_2, FUNC_2(VAR_5));
   FUNC_9(&VAR_5->pdev->dev);
  }
  break;
 default:
  FUNC_0();
 }
}
