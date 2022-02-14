
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef scalar_t__ u32 ;
struct scsi_cmnd {int request; int * cmnd; TYPE_1__* device; } ;
struct Scsi_Host {int host_no; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;
 int FUNC_1 (struct Scsi_Host*,char*,struct scsi_cmnd*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct Scsi_Host*,struct scsi_cmnd*) ;

int
FUNC_8(struct scsi_cmnd *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->device->host;
 u32 VAR_4 = VAR_1;
 int VAR_5 = VAR_0;

 FUNC_1(VAR_3,
        "host reset:sc %p sc_cmd 0x%x req %p tag %d flags 0x%llx\n",
        VAR_2, VAR_2->cmnd[0], VAR_2->request,
        FUNC_6(VAR_2), FUNC_0(VAR_2));

 VAR_5 = FUNC_7(VAR_3, VAR_2);

 FUNC_2(VAR_3->host_no, FUNC_6(VAR_2), (ulong) VAR_2,
   FUNC_5(VAR_1 - VAR_4),
   0, FUNC_3(VAR_2), FUNC_4(VAR_2));

 return VAR_5;
}
