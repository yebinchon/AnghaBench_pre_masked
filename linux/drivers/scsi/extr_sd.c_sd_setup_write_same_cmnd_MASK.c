
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct scsi_disk {scalar_t__ ws16; TYPE_1__* device; } ;
struct scsi_device {scalar_t__ sector_size; } ;
struct scsi_cmnd {int cmd_len; scalar_t__ transfersize; int allowed; int * cmnd; struct scsi_device* device; struct request* request; } ;
struct request {scalar_t__ __data_len; int timeout; struct bio* bio; int rq_disk; } ;
struct bio {int dummy; } ;
typedef int blk_status_t ;
struct TYPE_4__ {scalar_t__ bv_len; } ;
struct TYPE_3__ {scalar_t__ no_write_same; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,int *) ;
 struct scsi_disk* FUNC_9 (int ) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (struct scsi_device*,int ) ;

__attribute__((used)) static blk_status_t FUNC_12(struct scsi_cmnd *VAR_5)
{
 struct request *VAR_6 = VAR_5->request;
 struct scsi_device *VAR_7 = VAR_5->device;
 struct scsi_disk *VAR_8 = FUNC_9(VAR_6->rq_disk);
 struct bio *VAR_9 = VAR_6->bio;
 u64 VAR_10 = FUNC_11(VAR_7, FUNC_4(VAR_6));
 u32 VAR_11 = FUNC_11(VAR_7, FUNC_5(VAR_6));
 blk_status_t VAR_12;

 if (VAR_8->device->no_write_same)
  return VAR_0;

 FUNC_0(FUNC_2(VAR_9) || FUNC_1(VAR_9).bv_len != VAR_7->sector_size);

 VAR_6->timeout = VAR_2;

 if (VAR_8->ws16 || VAR_10 > 0xffffffff || VAR_11 > 0xffff) {
  VAR_5->cmd_len = 16;
  VAR_5->cmnd[0] = VAR_4;
  FUNC_8(VAR_10, &VAR_5->cmnd[2]);
  FUNC_7(VAR_11, &VAR_5->cmnd[10]);
 } else {
  VAR_5->cmd_len = 10;
  VAR_5->cmnd[0] = VAR_3;
  FUNC_7(VAR_10, &VAR_5->cmnd[2]);
  FUNC_6(VAR_11, &VAR_5->cmnd[7]);
 }

 VAR_5->transfersize = VAR_7->sector_size;
 VAR_5->allowed = VAR_1;
 VAR_6->__data_len = VAR_7->sector_size;
 VAR_12 = FUNC_10(VAR_5);
 VAR_6->__data_len = FUNC_3(VAR_6);

 return VAR_12;
}
