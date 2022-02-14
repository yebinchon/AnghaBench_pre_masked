
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct visorhba_devdata {TYPE_3__* dev; int idr; } ;
struct TYPE_5__ {int result; int handle; } ;
struct TYPE_4__ {int handle; } ;
struct uiscmdrsp {scalar_t__ cmdtype; TYPE_2__ scsitaskmgmt; TYPE_1__ scsi; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_6__ {int device; int visorchannel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uiscmdrsp*,struct scsi_cmnd*) ;
 int FUNC_1 (int *,struct uiscmdrsp*,int ) ;
 struct scsi_cmnd* FUNC_2 (struct visorhba_devdata*,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ,int ,struct uiscmdrsp*) ;

__attribute__((used)) static void FUNC_5(struct uiscmdrsp *VAR_4,
   struct visorhba_devdata *VAR_5)
{
 struct scsi_cmnd *VAR_6;

 while (1) {

  if (FUNC_4(VAR_5->dev->visorchannel,
           VAR_3,
           VAR_4))
   break;
  if (VAR_4->cmdtype == VAR_2) {



   VAR_6 = FUNC_2(VAR_5,
            VAR_4->scsi.handle);
   if (!VAR_6)
    break;

   FUNC_0(VAR_4, VAR_6);
  } else if (VAR_4->cmdtype == VAR_1) {
   if (!FUNC_2(VAR_5,
       VAR_4->scsitaskmgmt.handle))
    break;
   FUNC_1(&VAR_5->idr, VAR_4,
        VAR_4->scsitaskmgmt.result);
  } else if (VAR_4->cmdtype == VAR_0)
   FUNC_3(&VAR_5->dev->device,
         "ignoring unsupported NOTIFYGUEST\n");

 }
}
