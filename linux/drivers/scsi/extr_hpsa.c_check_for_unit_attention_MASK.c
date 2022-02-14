
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ctlr_info {int devname; TYPE_2__* pdev; } ;
struct CommandList {TYPE_1__* err_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int SenseLen; int SenseInfo; } ;






 scalar_t__ VAR_0 ;

 int FUNC_0 (int ,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct ctlr_info *VAR_1,
 struct CommandList *VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5;
 int VAR_6;

 if (VAR_2->err_info->SenseLen > sizeof(VAR_2->err_info->SenseInfo))
  VAR_6 = sizeof(VAR_2->err_info->SenseInfo);
 else
  VAR_6 = VAR_2->err_info->SenseLen;

 FUNC_0(VAR_2->err_info->SenseInfo, VAR_6,
    &VAR_3, &VAR_4, &VAR_5);
 if (VAR_3 != VAR_0 || VAR_4 == 0xff)
  return 0;

 switch (VAR_4) {
 case 129:
  FUNC_1(&VAR_1->pdev->dev,
   "%s: a state change detected, command retried\n",
   VAR_1->devname);
  break;
 case 132:
  FUNC_1(&VAR_1->pdev->dev,
   "%s: LUN failure detected\n", VAR_1->devname);
  break;
 case 130:
  FUNC_1(&VAR_1->pdev->dev,
   "%s: report LUN data changed\n", VAR_1->devname);




  break;
 case 131:
  FUNC_1(&VAR_1->pdev->dev,
   "%s: a power on or device reset detected\n",
   VAR_1->devname);
  break;
 case 128:
  FUNC_1(&VAR_1->pdev->dev,
   "%s: unit attention cleared by another initiator\n",
   VAR_1->devname);
  break;
 default:
  FUNC_1(&VAR_1->pdev->dev,
   "%s: unknown unit attention detected\n",
   VAR_1->devname);
  break;
 }
 return 1;
}
