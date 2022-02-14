
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct us_data {int last_sector_retries; scalar_t__ use_last_sector_hacks; } ;
struct scsi_disk {int capacity; } ;
struct scsi_cmnd {int* cmnd; scalar_t__ result; int sense_buffer; TYPE_1__* request; } ;
struct gendisk {int dummy; } ;
typedef int record_not_found ;
struct TYPE_2__ {struct gendisk* rq_disk; } ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 struct scsi_disk* FUNC_1 (struct gendisk*) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct us_data *VAR_5, struct scsi_cmnd *VAR_6)
{
 struct gendisk *VAR_7;
 struct scsi_disk *VAR_8;
 u32 VAR_9;


 static unsigned char VAR_10[18] = {
  [0] = 0x70,
  [2] = 128,
  [7] = 0x0a,
  [12] = 0x14
 };







 if (!VAR_5->use_last_sector_hacks)
  return;


 if (VAR_6->cmnd[0] != VAR_0 && VAR_6->cmnd[0] != VAR_4)
  goto done;


 VAR_9 = (VAR_6->cmnd[2] << 24) | (VAR_6->cmnd[3] << 16) |
   (VAR_6->cmnd[4] << 8) | (VAR_6->cmnd[5]);
 VAR_7 = VAR_6->request->rq_disk;
 if (!VAR_7)
  goto done;
 VAR_8 = FUNC_1(VAR_7);
 if (!VAR_8)
  goto done;
 if (VAR_9 + 1 != VAR_8->capacity)
  goto done;

 if (VAR_6->result == VAR_2 && FUNC_2(VAR_6) == 0) {





  VAR_5->use_last_sector_hacks = 0;

 } else {
  if (++VAR_5->last_sector_retries < 3)
   return;
  VAR_6->result = VAR_1;
  FUNC_0(VAR_6->sense_buffer, VAR_10,
    sizeof(VAR_10));
 }

 done:





 if (VAR_6->cmnd[0] != VAR_3)
  VAR_5->last_sector_retries = 0;
}
