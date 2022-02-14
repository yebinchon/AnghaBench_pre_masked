
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct scsi_disk {int zeroing_mode; scalar_t__ ws16; } ;
struct scsi_device {scalar_t__ no_write_same; } ;
struct scsi_cmnd {struct scsi_device* device; struct request* request; } ;
struct request {int cmd_flags; int rq_disk; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 struct scsi_disk* FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_cmnd*,int) ;
 int FUNC_4 (struct scsi_cmnd*,int) ;
 int FUNC_5 (struct scsi_device*,int ) ;

__attribute__((used)) static blk_status_t FUNC_6(struct scsi_cmnd *VAR_2)
{
 struct request *VAR_3 = VAR_2->request;
 struct scsi_device *VAR_4 = VAR_2->device;
 struct scsi_disk *VAR_5 = FUNC_2(VAR_3->rq_disk);
 u64 VAR_6 = FUNC_5(VAR_4, FUNC_0(VAR_3));
 u32 VAR_7 = FUNC_5(VAR_4, FUNC_1(VAR_3));

 if (!(VAR_3->cmd_flags & VAR_1)) {
  switch (VAR_5->zeroing_mode) {
  case 128:
   return FUNC_4(VAR_2, 1);
  case 129:
   return FUNC_3(VAR_2, 1);
  }
 }

 if (VAR_4->no_write_same)
  return VAR_0;

 if (VAR_5->ws16 || VAR_6 > 0xffffffff || VAR_7 > 0xffff)
  return FUNC_4(VAR_2, 0);

 return FUNC_3(VAR_2, 0);
}
