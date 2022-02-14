
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef void* u32 ;
struct scsi_device {int dummy; } ;
struct scsi_cmnd {int cmd_len; int* cmnd; unsigned int transfersize; int allowed; struct request* request; struct scsi_device* device; } ;
struct TYPE_2__ {unsigned int bv_len; int bv_page; scalar_t__ bv_offset; } ;
struct request {int timeout; TYPE_1__ special_vec; int rq_flags; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (void*,char*) ;
 int FUNC_7 (void*,char*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int VAR_6 ;
 void* FUNC_9 (struct scsi_device*,int ) ;

__attribute__((used)) static blk_status_t FUNC_10(struct scsi_cmnd *VAR_7)
{
 struct scsi_device *VAR_8 = VAR_7->device;
 struct request *VAR_9 = VAR_7->request;
 u64 VAR_10 = FUNC_9(VAR_8, FUNC_0(VAR_9));
 u32 VAR_11 = FUNC_9(VAR_8, FUNC_1(VAR_9));
 unsigned int VAR_12 = 24;
 char *VAR_13;

 VAR_9->special_vec.bv_page = FUNC_3(VAR_6, VAR_1);
 if (!VAR_9->special_vec.bv_page)
  return VAR_0;
 FUNC_2(VAR_9->special_vec.bv_page);
 VAR_9->special_vec.bv_offset = 0;
 VAR_9->special_vec.bv_len = VAR_12;
 VAR_9->rq_flags |= VAR_2;

 VAR_7->cmd_len = 10;
 VAR_7->cmnd[0] = VAR_5;
 VAR_7->cmnd[8] = 24;

 VAR_13 = FUNC_4(VAR_9->special_vec.bv_page);
 FUNC_5(6 + 16, &VAR_13[0]);
 FUNC_5(16, &VAR_13[2]);
 FUNC_7(VAR_10, &VAR_13[8]);
 FUNC_6(VAR_11, &VAR_13[16]);

 VAR_7->allowed = VAR_3;
 VAR_7->transfersize = VAR_12;
 VAR_9->timeout = VAR_4;

 return FUNC_8(VAR_7);
}
