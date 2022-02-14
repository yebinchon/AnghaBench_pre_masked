
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_scsi_dev {int scsi_cmds_outstanding; } ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 unsigned long VAR_4 ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_3 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct pqi_ctrl_info *VAR_5,
 struct pqi_scsi_dev *VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;

 VAR_8 = (VAR_7 * VAR_3) + VAR_4;

 while (FUNC_0(&VAR_6->scsi_cmds_outstanding)) {
  FUNC_2(VAR_5);
  if (FUNC_3(VAR_5))
   return -VAR_0;
  if (VAR_7 != VAR_2) {
   if (FUNC_4(VAR_4, VAR_8)) {
    FUNC_1(&VAR_5->pci_dev->dev,
     "timed out waiting for pending IO\n");
    return -VAR_1;
   }
  }
  FUNC_5(1000, 2000);
 }

 return 0;
}
