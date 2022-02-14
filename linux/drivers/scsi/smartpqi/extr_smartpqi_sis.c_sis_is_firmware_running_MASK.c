
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pqi_ctrl_info {TYPE_2__* registers; TYPE_1__* pci_dev; } ;
struct TYPE_4__ {int * sis_mailbox; int sis_firmware_status; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct pqi_ctrl_info *VAR_1)
{
 bool VAR_2;
 u32 VAR_3;

 VAR_3 = FUNC_1(&VAR_1->registers->sis_firmware_status);

 if (VAR_3 & VAR_0)
  VAR_2 = 0;
 else
  VAR_2 = 1;

 if (!VAR_2)
  FUNC_0(&VAR_1->pci_dev->dev,
   "controller is offline: status code 0x%x\n",
   FUNC_1(&VAR_1->registers->sis_mailbox[7]));

 return VAR_2;
}
