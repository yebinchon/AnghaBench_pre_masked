
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; TYPE_2__* registers; } ;
struct TYPE_4__ {int sis_firmware_status; int sis_host_to_ctrl_doorbell; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 unsigned long VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(
 struct pqi_ctrl_info *VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9;
 unsigned long VAR_10;

 VAR_10 = (VAR_4 * VAR_2) + VAR_5;

 while (1) {
  VAR_9 =
   FUNC_1(&VAR_6->registers->sis_host_to_ctrl_doorbell);
  if ((VAR_9 & VAR_7) == 0)
   break;
  if (FUNC_1(&VAR_6->registers->sis_firmware_status) &
   VAR_3) {
   VAR_8 = -VAR_0;
   break;
  }
  if (FUNC_2(VAR_5, VAR_10)) {
   FUNC_0(&VAR_6->pci_dev->dev,
    "doorbell register bit 0x%x not cleared\n",
    VAR_7);
   VAR_8 = -VAR_1;
   break;
  }
  FUNC_3(1000, 2000);
 }

 return VAR_8;
}
