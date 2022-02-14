
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {TYPE_2__* host; TYPE_1__* pdev; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {scalar_t__ subsystem_vendor; int device; int dev; int subsystem_device; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;





 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct megasas_instance *VAR_8)
{
 if (VAR_8->pdev->subsystem_vendor != VAR_7)
  return;

 switch (VAR_8->pdev->device) {
 case 128:
  switch (VAR_8->pdev->subsystem_device) {
  case 136:
   FUNC_0(&VAR_8->pdev->dev, "scsi host %d: %s\n",
    VAR_8->host->host_no,
    VAR_2);
   break;
  case 137:
   FUNC_0(&VAR_8->pdev->dev, "scsi host %d: %s\n",
    VAR_8->host->host_no,
    VAR_1);
   break;
  case 134:
   FUNC_0(&VAR_8->pdev->dev, "scsi host %d: %s\n",
    VAR_8->host->host_no,
    VAR_4);
   break;
  case 135:
   FUNC_0(&VAR_8->pdev->dev, "scsi host %d: %s\n",
    VAR_8->host->host_no,
    VAR_3);
   break;
  default:
   break;
  }
  break;
 case 129:
  switch (VAR_8->pdev->subsystem_device) {
  case 132:
   FUNC_0(&VAR_8->pdev->dev, "scsi host %d: %s\n",
    VAR_8->host->host_no,
    VAR_6);
   break;
  case 133:
   FUNC_0(&VAR_8->pdev->dev, "scsi host %d: %s\n",
    VAR_8->host->host_no,
    VAR_5);
   break;
  default:
   break;
  }
  break;
 case 131:
 case 130:
  switch (VAR_8->pdev->subsystem_device) {
  case 138:
   FUNC_0(&VAR_8->pdev->dev, "scsi host %d: %s\n",
    VAR_8->host->host_no,
    VAR_0);
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }
}
