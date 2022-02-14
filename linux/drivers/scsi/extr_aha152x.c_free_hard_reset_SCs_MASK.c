
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int * host_scribble; TYPE_1__* device; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int commands; } ;
struct TYPE_3__ {int soft_reset; } ;


 TYPE_2__* FUNC_0 (struct Scsi_Host*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 struct scsi_cmnd* FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct scsi_cmnd**,struct scsi_cmnd*) ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_6(struct Scsi_Host *VAR_1,
    struct scsi_cmnd **VAR_2)
{
 struct scsi_cmnd *VAR_3;

 VAR_3=*VAR_2;
 while(VAR_3) {
  struct scsi_cmnd *VAR_4;

  if(FUNC_1(VAR_3)) {
   VAR_4 = FUNC_2(VAR_3);
  } else {
   FUNC_5(VAR_0, VAR_3,
        "queue corrupted at %p\n", VAR_3);
   VAR_4 = ((void*)0);
  }

  if (!VAR_3->device->soft_reset) {
   FUNC_4(VAR_2, VAR_3);
   FUNC_0(VAR_1)->commands--;
   FUNC_3(VAR_3->host_scribble);
   VAR_3->host_scribble=((void*)0);
  }

  VAR_3 = VAR_4;
 }
}
