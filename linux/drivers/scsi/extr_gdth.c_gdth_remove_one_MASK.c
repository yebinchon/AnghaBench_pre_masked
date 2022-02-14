
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Scsi_Host {scalar_t__ irq; } ;
typedef int gdth_msg_str ;
struct TYPE_7__ {scalar_t__ ccb_phys; TYPE_1__* pdev; int msg_phys; scalar_t__ pmsg; int scratch_phys; scalar_t__ pscratch; int * sdev; struct Scsi_Host* shost; } ;
typedef TYPE_2__ gdth_ha_str ;
typedef int gdth_cmd_str ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,scalar_t__,int ) ;
 int FUNC_2 (int *,scalar_t__,int,int ) ;
 int FUNC_3 (scalar_t__,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_8(gdth_ha_str *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->shost;

 FUNC_0(("gdth_remove_one()\n"));

 FUNC_7(VAR_3);

 FUNC_4(VAR_2);

 if (VAR_2->sdev) {
  FUNC_5(VAR_2->sdev);
  VAR_2->sdev = ((void*)0);
 }

 if (VAR_3->irq)
  FUNC_3(VAR_3->irq,VAR_2);

 if (VAR_2->pscratch)
  FUNC_1(&VAR_2->pdev->dev, VAR_1,
   VAR_2->pscratch, VAR_2->scratch_phys);
 if (VAR_2->pmsg)
  FUNC_1(&VAR_2->pdev->dev, sizeof(gdth_msg_str),
   VAR_2->pmsg, VAR_2->msg_phys);
 if (VAR_2->ccb_phys)
  FUNC_2(&VAR_2->pdev->dev, VAR_2->ccb_phys,
   sizeof(gdth_cmd_str), VAR_0);

 FUNC_6(VAR_3);
}
