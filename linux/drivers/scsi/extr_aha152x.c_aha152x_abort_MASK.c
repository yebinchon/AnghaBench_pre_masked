
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int * host_scribble; TYPE_1__* device; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int commands; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (struct Scsi_Host*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 struct scsi_cmnd* FUNC_5 (int *,struct scsi_cmnd*) ;
 int FUNC_6 (int ,struct scsi_cmnd*,char*) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->device->host;
 struct scsi_cmnd *VAR_7;
 unsigned long VAR_8;

 FUNC_0(VAR_8);

 VAR_7=FUNC_5(&VAR_1, VAR_5);

 if(VAR_7) {
  FUNC_2(VAR_6)->commands--;
  if (!FUNC_2(VAR_6)->commands)
   FUNC_3(VAR_3, 0);
  FUNC_1(VAR_8);

  FUNC_4(VAR_5->host_scribble);
  VAR_5->host_scribble=((void*)0);

  return VAR_4;
 }

 FUNC_1(VAR_8);
 FUNC_6(VAR_2, VAR_5,
      "cannot abort running or disconnected command\n");

 return VAR_0;
}
