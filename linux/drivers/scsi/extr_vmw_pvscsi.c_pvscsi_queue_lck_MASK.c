
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;unsigned char* cmnd; TYPE_1__* device; } ;
struct pvscsi_ctx {int dummy; } ;
struct pvscsi_adapter {int hw_lock; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int sdev_gendev; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct scsi_cmnd*,struct pvscsi_ctx*,unsigned char) ;
 struct pvscsi_ctx* FUNC_1 (struct pvscsi_adapter*,struct scsi_cmnd*) ;
 int FUNC_2 (struct pvscsi_adapter*,unsigned char) ;
 scalar_t__ FUNC_3 (struct pvscsi_adapter*,struct pvscsi_ctx*,struct scsi_cmnd*) ;
 int FUNC_4 (struct pvscsi_adapter*,struct pvscsi_ctx*) ;
 struct pvscsi_adapter* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_1, void (*VAR_2)(struct scsi_cmnd *))
{
 struct Scsi_Host *VAR_3 = VAR_1->device->host;
 struct pvscsi_adapter *VAR_4 = FUNC_5(VAR_3);
 struct pvscsi_ctx *VAR_5;
 unsigned long VAR_6;
 unsigned char VAR_7;

 FUNC_6(&VAR_4->hw_lock, VAR_6);

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_5 || FUNC_3(VAR_4, VAR_5, VAR_1) != 0) {
  if (VAR_5)
   FUNC_4(VAR_4, VAR_5);
  FUNC_7(&VAR_4->hw_lock, VAR_6);
  return VAR_0;
 }

 VAR_1->scsi_done = VAR_2;
 VAR_7 = VAR_1->cmnd[0];

 FUNC_0(&VAR_1->device->sdev_gendev,
  "queued cmd %p, ctx %p, op=%x\n", VAR_1, VAR_5, VAR_7);

 FUNC_7(&VAR_4->hw_lock, VAR_6);

 FUNC_2(VAR_4, VAR_7);

 return 0;
}
