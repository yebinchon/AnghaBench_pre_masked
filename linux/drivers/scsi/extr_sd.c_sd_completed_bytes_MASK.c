
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scsi_device {scalar_t__ sector_size; } ;
struct scsi_cmnd {int sense_buffer; struct scsi_device* device; struct request* request; } ;
struct request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct scsi_device*,scalar_t__) ;
 unsigned int FUNC_2 (struct scsi_device*,scalar_t__) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct scsi_device*,int ) ;

__attribute__((used)) static unsigned int FUNC_8(struct scsi_cmnd *VAR_1)
{
 struct request *VAR_2 = VAR_1->request;
 struct scsi_device *VAR_3 = VAR_1->device;
 unsigned int VAR_4, VAR_5;
 u64 VAR_6, VAR_7, VAR_8;





 if (FUNC_4(VAR_1) <= VAR_3->sector_size)
  return 0;


 if (!FUNC_6(VAR_1->sense_buffer,
         VAR_0,
         &VAR_8))
  return 0;





 VAR_6 = FUNC_7(VAR_3, FUNC_0(VAR_2));
 VAR_7 = VAR_6 + FUNC_1(VAR_3, FUNC_4(VAR_1));
 if (VAR_8 < VAR_6 || VAR_8 >= VAR_7)
  return 0;





 VAR_4 = FUNC_4(VAR_1) - FUNC_5(VAR_1);




 VAR_5 = FUNC_2(VAR_3, VAR_8 - VAR_6);

 return FUNC_3(VAR_5, VAR_4);
}
