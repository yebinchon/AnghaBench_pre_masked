
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ctlr_info {TYPE_2__* pdev; } ;
struct CommandList {TYPE_1__* err_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int ScsiStatus; } ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct ctlr_info *VAR_0,
     struct CommandList *VAR_1)
{
 u8 VAR_2 = VAR_1->err_info->ScsiStatus;

 switch (VAR_2) {
 case 134:




 case 129:
  return 0;
 case 132:
 case 131:
 case 133:
 case 128:
 case 130:
  break;
 default:
  FUNC_0(&VAR_0->pdev->dev, "Unknown TMF status: 0x%02x\n",
    VAR_2);
  break;
 }
 return -VAR_2;
}
