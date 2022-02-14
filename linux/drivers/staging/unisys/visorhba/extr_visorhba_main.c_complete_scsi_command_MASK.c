
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ linuxstat; } ;
struct uiscmdrsp {TYPE_1__ scsi; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;scalar_t__ result; } ;


 int FUNC_0 (struct uiscmdrsp*,struct scsi_cmnd*) ;
 int FUNC_1 (struct uiscmdrsp*,struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct uiscmdrsp *VAR_0,
      struct scsi_cmnd *VAR_1)
{

 VAR_1->result = VAR_0->scsi.linuxstat;
 if (VAR_0->scsi.linuxstat)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);

 VAR_1->scsi_done(VAR_1);
}
