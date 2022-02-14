
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct fnic_io_req {int dummy; } ;
struct fnic {int fnic_max_tag_id; TYPE_1__* lport; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int host; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,char*,int ) ;
 int VAR_1 ;
 int * FUNC_3 (struct fnic*,struct scsi_cmnd*) ;
 int FUNC_4 (scalar_t__) ;
 struct scsi_cmnd* FUNC_5 (int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct fnic *VAR_2, struct scsi_cmnd *VAR_3)
{
 int VAR_4;
 struct fnic_io_req *VAR_5;
 spinlock_t *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;
 struct scsi_cmnd *VAR_9;
 struct scsi_device *VAR_10 = ((void*)0);

 if (VAR_3)
  VAR_10 = VAR_3->device;


 for (VAR_4 = 0; VAR_4 < VAR_2->fnic_max_tag_id; VAR_4++) {
  VAR_9 = FUNC_5(VAR_2->lport->host, VAR_4);




  if (!VAR_9 || (VAR_3 && (VAR_9->device != VAR_10 || VAR_9 == VAR_3)))
   continue;

  VAR_6 = FUNC_3(VAR_2, VAR_9);
  FUNC_6(VAR_6, VAR_7);

  VAR_5 = (struct fnic_io_req *)FUNC_0(VAR_9);

  if (!VAR_5 || VAR_9->device != VAR_10) {
   FUNC_7(VAR_6, VAR_7);
   continue;
  }





  FUNC_2(VAR_1, VAR_2->lport->host,
         "Found IO in %s on lun\n",
         FUNC_4(FUNC_1(VAR_9)));

  if (FUNC_1(VAR_9) == VAR_0)
   VAR_8 = 1;
  FUNC_7(VAR_6, VAR_7);
 }

 return VAR_8;
}
