
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; TYPE_2__* device; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {int soft_reset; } ;
struct TYPE_4__ {int soft_reset; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 struct scsi_cmnd* VAR_2 ;
 int VAR_3 ;
 struct scsi_cmnd* FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct Scsi_Host*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_cmnd**,struct scsi_cmnd*) ;
 int FUNC_4 (int ,struct Scsi_Host*,char*) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_6(struct Scsi_Host *VAR_4)
{
 struct scsi_cmnd *VAR_5;

 FUNC_4(VAR_3, VAR_4, "scsi reset in\n");

 VAR_5=VAR_2;
 while(VAR_5) {
  struct scsi_cmnd *VAR_6 = FUNC_0(VAR_5);

  if (!VAR_5->device->soft_reset) {
   FUNC_3(&VAR_2, VAR_5);

   FUNC_2(VAR_5->host_scribble);
   VAR_5->host_scribble=((void*)0);

   VAR_5->result = VAR_1 << 16;
   VAR_5->scsi_done(VAR_5);
  }

  VAR_5 = VAR_6;
 }

 if(VAR_0 && !VAR_0->device->soft_reset)
  FUNC_1(VAR_4, VAR_1 << 16 );
}
