
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ phase; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__ SCp; } ;
struct aac_dev {scalar_t__ handle_pci_error; TYPE_3__* fibs; TYPE_2__* scsi_host_ptr; } ;
struct TYPE_6__ {scalar_t__ callback_data; } ;
struct TYPE_5__ {int can_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_2(struct aac_dev *VAR_3)
{
 int VAR_4;
 struct scsi_cmnd *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->scsi_host_ptr->can_queue; VAR_4++) {
  VAR_5 = (struct scsi_cmnd *)VAR_3->fibs[VAR_4].callback_data;
  if (VAR_5 && (VAR_5->SCp.phase == VAR_0)) {
   FUNC_0(VAR_5);

   if (VAR_3->handle_pci_error)
    VAR_5->result = VAR_1 << 16;
   else
    VAR_5->result = VAR_2 << 16;

   VAR_5->scsi_done(VAR_5);
  }
 }
}
