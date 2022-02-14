
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rtsx_dev {int control_exit; int dev_mutex; int notify; TYPE_2__* pci; int cmnd_ready; struct rtsx_chip* chip; } ;
struct rtsx_chip {scalar_t__ max_lun; TYPE_3__* srb; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {int result; scalar_t__ sc_data_direction; int (* scsi_done ) (TYPE_3__*) ;TYPE_1__* device; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ lun; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct rtsx_chip*,int ) ;
 int FUNC_7 (TYPE_3__*,struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*,int ) ;
 struct Scsi_Host* FUNC_9 (struct rtsx_dev*) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct Scsi_Host*) ;
 int FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(void *VAR_7)
{
 struct rtsx_dev *VAR_8 = VAR_7;
 struct rtsx_chip *VAR_9 = VAR_8->chip;
 struct Scsi_Host *VAR_10 = FUNC_9(VAR_8);

 for (;;) {
  if (FUNC_14(&VAR_8->cmnd_ready))
   break;


  FUNC_4(&VAR_8->dev_mutex);


  if (FUNC_6(VAR_9, VAR_5)) {
   FUNC_3(&VAR_8->pci->dev, "-- rtsx-control exiting\n");
   FUNC_5(&VAR_8->dev_mutex);
   break;
  }


  FUNC_10(VAR_10);


  if (FUNC_6(VAR_9, VAR_4)) {
   VAR_9->srb->result = VAR_0 << 16;
   goto skip_for_abort;
  }

  FUNC_12(VAR_10);




  if (VAR_9->srb->sc_data_direction == VAR_3) {
   FUNC_2(&VAR_8->pci->dev, "UNKNOWN data direction\n");
   VAR_9->srb->result = VAR_2 << 16;
  }




  else if (VAR_9->srb->device->id) {
   FUNC_2(&VAR_8->pci->dev, "Bad target number (%d:%d)\n",
    VAR_9->srb->device->id,
    (u8)VAR_9->srb->device->lun);
   VAR_9->srb->result = VAR_1 << 16;
  }

  else if (VAR_9->srb->device->lun > VAR_9->max_lun) {
   FUNC_2(&VAR_8->pci->dev, "Bad LUN (%d:%d)\n",
    VAR_9->srb->device->id,
    (u8)VAR_9->srb->device->lun);
   VAR_9->srb->result = VAR_1 << 16;
  }


  else {
   FUNC_11(VAR_9);
   FUNC_7(VAR_9->srb, VAR_9);
  }


  FUNC_10(VAR_10);


  if (!VAR_9->srb)
   ;


  else if (VAR_9->srb->result != VAR_0 << 16) {
   VAR_9->srb->scsi_done(VAR_9->srb);
  } else {
skip_for_abort:
   FUNC_2(&VAR_8->pci->dev, "scsi command aborted\n");
  }

  if (FUNC_6(VAR_9, VAR_4)) {
   FUNC_0(&VAR_8->notify);

   FUNC_8(VAR_9, VAR_6);
  }


  VAR_9->srb = ((void*)0);
  FUNC_12(VAR_10);


  FUNC_5(&VAR_8->dev_mutex);
 }
 FUNC_1(&VAR_8->control_exit, 0);
}
