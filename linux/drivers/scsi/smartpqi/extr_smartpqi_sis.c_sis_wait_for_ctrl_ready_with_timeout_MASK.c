
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; TYPE_2__* registers; } ;
struct TYPE_4__ {int * sis_mailbox; int sis_firmware_status; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct pqi_ctrl_info *VAR_7,
 unsigned int VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;

 VAR_9 = (VAR_8 * VAR_2) + VAR_6;

 while (1) {
  VAR_10 = FUNC_2(&VAR_7->registers->sis_firmware_status);
  if (VAR_10 != ~0) {
   if (VAR_10 & VAR_3) {
    FUNC_0(&VAR_7->pci_dev->dev,
     "controller is offline: status code 0x%x\n",
     FUNC_2(
     &VAR_7->registers->sis_mailbox[7]));
    return -VAR_0;
   }
   if (VAR_10 & VAR_4)
    break;
  }
  if (FUNC_3(VAR_6, VAR_9)) {
   FUNC_0(&VAR_7->pci_dev->dev,
    "controller not ready after %u seconds\n",
    VAR_8);
   return -VAR_1;
  }
  FUNC_1(VAR_5);
 }

 return 0;
}
