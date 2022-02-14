
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct rtsx_dev {int cmnd_ready; TYPE_1__* pci; struct rtsx_chip* chip; } ;
struct rtsx_chip {struct scsi_cmnd* srb; } ;
struct TYPE_4__ {int host; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,struct scsi_cmnd*) ;
 int FUNC_2 (int *,char*) ;
 struct rtsx_dev* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_3,
       void (*VAR_4)(struct scsi_cmnd *))
{
 struct rtsx_dev *VAR_5 = FUNC_3(VAR_3->device->host);
 struct rtsx_chip *VAR_6 = VAR_5->chip;


 if (VAR_6->srb) {
  FUNC_1(&VAR_5->pci->dev, "Error: chip->srb = %p\n",
   VAR_6->srb);
  return VAR_2;
 }


 if (FUNC_4(VAR_6, VAR_1)) {
  FUNC_2(&VAR_5->pci->dev, "Fail command during disconnect\n");
  VAR_3->result = VAR_0 << 16;
  VAR_4(VAR_3);
  return 0;
 }


 VAR_3->scsi_done = VAR_4;
 VAR_6->srb = VAR_3;
 FUNC_0(&VAR_5->cmnd_ready);

 return 0;
}
