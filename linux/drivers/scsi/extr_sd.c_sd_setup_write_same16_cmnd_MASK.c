
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef void* u32 ;
struct scsi_device {void* sector_size; } ;
struct scsi_cmnd {int cmd_len; int* cmnd; void* transfersize; int allowed; struct request* request; struct scsi_device* device; } ;
struct TYPE_2__ {void* bv_len; scalar_t__ bv_offset; int bv_page; } ;
struct request {int timeout; int rq_flags; TYPE_1__ special_vec; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int*) ;
 int FUNC_5 (void*,int*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int VAR_7 ;
 void* FUNC_7 (struct scsi_device*,int ) ;

__attribute__((used)) static blk_status_t FUNC_8(struct scsi_cmnd *VAR_8,
  bool VAR_9)
{
 struct scsi_device *VAR_10 = VAR_8->device;
 struct request *VAR_11 = VAR_8->request;
 u64 VAR_12 = FUNC_7(VAR_10, FUNC_0(VAR_11));
 u32 VAR_13 = FUNC_7(VAR_10, FUNC_1(VAR_11));
 u32 VAR_14 = VAR_10->sector_size;

 VAR_11->special_vec.bv_page = FUNC_3(VAR_7, VAR_1);
 if (!VAR_11->special_vec.bv_page)
  return VAR_0;
 FUNC_2(VAR_11->special_vec.bv_page);
 VAR_11->special_vec.bv_offset = 0;
 VAR_11->special_vec.bv_len = VAR_14;
 VAR_11->rq_flags |= VAR_2;

 VAR_8->cmd_len = 16;
 VAR_8->cmnd[0] = VAR_6;
 if (VAR_9)
  VAR_8->cmnd[1] = 0x8;
 FUNC_5(VAR_12, &VAR_8->cmnd[2]);
 FUNC_4(VAR_13, &VAR_8->cmnd[10]);

 VAR_8->allowed = VAR_3;
 VAR_8->transfersize = VAR_14;
 VAR_11->timeout = VAR_9 ? VAR_4 : VAR_5;

 return FUNC_6(VAR_8);
}
