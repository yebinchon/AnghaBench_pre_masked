
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef scalar_t__ u32 ;
struct snic {TYPE_2__* shost; } ;
struct scsi_cmnd {int request; int * cmnd; TYPE_1__* device; } ;
struct TYPE_5__ {int host_no; } ;
struct TYPE_4__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__) ;
 struct snic* FUNC_6 (int ) ;
 int FUNC_7 (struct snic*,struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_9 (struct snic*) ;
 int FUNC_10 (struct snic*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_11 (int) ;

int
FUNC_12(struct scsi_cmnd *VAR_4)
{
 struct snic *VAR_5 = FUNC_6(VAR_4->device->host);
 int VAR_6 = VAR_2, VAR_7 = FUNC_8(VAR_4);
 u32 VAR_8 = VAR_3;

 FUNC_1(VAR_5->shost, "abt_cmd:sc %p :0x%x :req = %p :tag = %d\n",
         VAR_4, VAR_4->cmnd[0], VAR_4->request, VAR_7);

 if (FUNC_11(FUNC_9(VAR_5) != VAR_1)) {
  FUNC_0(VAR_5->shost,
         "abt_cmd: tag %x Parent Devs are not rdy\n",
         VAR_7);
  VAR_6 = VAR_0;

  goto abort_end;
 }


 VAR_6 = FUNC_10(VAR_5, VAR_4);
 if (VAR_6)
  goto abort_end;

 VAR_6 = FUNC_7(VAR_5, VAR_4);

abort_end:
 FUNC_2(VAR_5->shost->host_no, VAR_7, (ulong) VAR_4,
   FUNC_5(VAR_3 - VAR_8), 0,
   FUNC_3(VAR_4), FUNC_4(VAR_4));

 FUNC_1(VAR_5->shost,
        "abts: Abort Req Status = %s\n",
        (VAR_6 == VAR_2) ? "SUCCESS" :
         ((VAR_6 == VAR_0) ? "FAST_IO_FAIL" : "FAILED"));

 return VAR_6;
}
