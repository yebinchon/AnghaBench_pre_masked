
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int phase; } ;
struct scsi_cmnd {unsigned char cmd_len; int * host_scribble; TYPE_2__ SCp; TYPE_1__* device; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {int commands; } ;
struct TYPE_4__ {struct Scsi_Host* host; } ;


 struct scsi_cmnd* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (struct Scsi_Host*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (struct scsi_cmnd*,int *,int ,int ) ;
 int FUNC_6 (int *,struct scsi_cmnd*) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,struct scsi_cmnd*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ,struct scsi_cmnd*,char*) ;
 unsigned long FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd * VAR_12)
{
 struct Scsi_Host *VAR_13 = VAR_12->device->host;
 FUNC_0(VAR_8);
 int VAR_14, VAR_15, VAR_16;
 unsigned char VAR_17 = VAR_12->cmd_len;
 unsigned long VAR_18;
 unsigned long VAR_19;

 if(VAR_0==VAR_12) {
  FUNC_9(VAR_5, VAR_12, "cannot reset current device\n");
  return VAR_2;
 }

 FUNC_1(VAR_18);
 VAR_15 = FUNC_8(&VAR_4, VAR_12) == ((void*)0);
 VAR_16 = VAR_15 && FUNC_8(&VAR_1, VAR_12);
 FUNC_2(VAR_18);

 VAR_12->cmd_len = 0;

 FUNC_5(VAR_12, &VAR_8, VAR_11, VAR_9);

 VAR_19 = FUNC_10(&VAR_8, 100*VAR_3);
 if (!VAR_19) {

  FUNC_1(VAR_18);
  FUNC_8(&VAR_4, VAR_12);
  FUNC_2(VAR_18);
 }

 VAR_12->cmd_len = VAR_17;

 FUNC_1(VAR_18);

 if(VAR_12->SCp.phase & VAR_10) {
  FUNC_3(VAR_13)->commands--;
  if (!FUNC_3(VAR_13)->commands)
   FUNC_4(VAR_6, 0);
  FUNC_7(VAR_12->host_scribble);
  VAR_12->host_scribble=((void*)0);

  VAR_14 = VAR_7;
 } else {

  if(!VAR_15) {
   FUNC_6(&VAR_4, VAR_12);
  } else if(VAR_16) {
   FUNC_6(&VAR_1, VAR_12);
  }

  VAR_14 = VAR_2;
 }

 FUNC_2(VAR_18);
 return VAR_14;
}
