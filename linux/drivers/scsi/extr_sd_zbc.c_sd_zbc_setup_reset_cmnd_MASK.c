
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {TYPE_1__* device; } ;
struct scsi_cmnd {int cmd_len; int* cmnd; scalar_t__ allowed; scalar_t__ transfersize; int sc_data_direction; struct request* request; } ;
struct request {int timeout; int rq_disk; } ;
typedef int sector_t ;
typedef int blk_status_t ;
struct TYPE_2__ {scalar_t__ changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int,int*) ;
 struct scsi_disk* FUNC_3 (int ) ;
 int FUNC_4 (struct scsi_disk*) ;
 int FUNC_5 (struct scsi_disk*) ;
 int FUNC_6 (TYPE_1__*,int) ;

blk_status_t FUNC_7(struct scsi_cmnd *VAR_6, bool VAR_7)
{
 struct request *VAR_8 = VAR_6->request;
 struct scsi_disk *VAR_9 = FUNC_3(VAR_8->rq_disk);
 sector_t VAR_10 = FUNC_0(VAR_8);
 sector_t VAR_11 = FUNC_6(VAR_9->device, VAR_10);

 if (!FUNC_4(VAR_9))

  return VAR_0;

 if (VAR_9->device->changed)
  return VAR_0;

 if (VAR_10 & (FUNC_5(VAR_9) - 1))

  return VAR_0;

 VAR_6->cmd_len = 16;
 FUNC_1(VAR_6->cmnd, 0, VAR_6->cmd_len);
 VAR_6->cmnd[0] = VAR_4;
 VAR_6->cmnd[1] = VAR_5;
 if (VAR_7)
  VAR_6->cmnd[14] = 0x1;
 else
  FUNC_2(VAR_11, &VAR_6->cmnd[2]);

 VAR_8->timeout = VAR_3;
 VAR_6->sc_data_direction = VAR_2;
 VAR_6->transfersize = 0;
 VAR_6->allowed = 0;

 return VAR_1;
}
