
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int SUE; int SCSI; } ;
union wd719x_regs {TYPE_4__ bytes; } ;
struct wd719x_scb {TYPE_2__* cmd; } ;
struct wd719x {TYPE_3__* pdev; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct wd719x_scb*,int) ;

__attribute__((used)) static inline void FUNC_4(struct wd719x *VAR_7,
     union wd719x_regs VAR_8,
     struct wd719x_scb *VAR_9)
{
 int VAR_10;


 switch (VAR_8.bytes.SUE) {
 case 137:
  VAR_10 = VAR_3;
  break;
 case 135:
  FUNC_1(&VAR_7->pdev->dev, "command rejected\n");
  VAR_10 = VAR_1;
  break;
 case 133:
  FUNC_1(&VAR_7->pdev->dev, "SCB queue is full\n");
  VAR_10 = VAR_1;
  break;
 case 132:
  FUNC_0(&VAR_7->pdev->dev, "SCB terminated by direct command\n");
  VAR_10 = VAR_0;
  break;
 case 142:
 case 140:
  VAR_10 = VAR_0;
  FUNC_1(&VAR_7->pdev->dev, "DMA abort\n");
  break;
 case 141:
 case 139:
  VAR_10 = VAR_4;
  FUNC_1(&VAR_7->pdev->dev, "DMA parity error\n");
  break;
 case 131:
  VAR_10 = VAR_6;
  FUNC_0(&VAR_7->pdev->dev, "selection timeout\n");
  break;
 case 134:
  FUNC_0(&VAR_7->pdev->dev, "bus reset occurred\n");
  VAR_10 = VAR_5;
  break;
 case 144:
  FUNC_0(&VAR_7->pdev->dev, "SCSI bus error\n");
  VAR_10 = VAR_1;
  break;
 case 128:
  FUNC_1(&VAR_7->pdev->dev, "wrong data transfer direction\n");
  VAR_10 = VAR_1;
  break;
 case 146:
  FUNC_1(&VAR_7->pdev->dev, "invalid SCSI phase\n");
  VAR_10 = VAR_1;
  break;
 case 130:
  FUNC_1(&VAR_7->pdev->dev, "record too long\n");
  VAR_10 = VAR_1;
  break;
 case 143:
  FUNC_1(&VAR_7->pdev->dev, "unexpected bus free\n");
  VAR_10 = VAR_2;
  break;
 case 147:
  FUNC_0(&VAR_7->pdev->dev, "auto request sense\n");
  if (VAR_8.bytes.SCSI == 0)
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_4;
  break;
 case 138:
  FUNC_1(&VAR_7->pdev->dev, "target id %d ignored command\n",
   VAR_9->cmd->device->id);
  VAR_10 = VAR_2;
  break;
 case 129:
  FUNC_1(&VAR_7->pdev->dev, "reversed tags\n");
  VAR_10 = VAR_1;
  break;
 case 145:
  FUNC_1(&VAR_7->pdev->dev, "tag type not supported by target\n");
  VAR_10 = VAR_1;
  break;
 case 136:
  FUNC_1(&VAR_7->pdev->dev, "no SCAM soft ID available\n");
  VAR_10 = VAR_1;
  break;
 default:
  FUNC_2(&VAR_7->pdev->dev, "unknown SUE error code: 0x%x\n",
    VAR_8.bytes.SUE);
  VAR_10 = VAR_1;
  break;
 }

 FUNC_3(VAR_9, VAR_10);
}
