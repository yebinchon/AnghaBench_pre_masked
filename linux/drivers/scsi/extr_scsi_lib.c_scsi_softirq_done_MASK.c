
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int allowed; scalar_t__ jiffies_at_alloc; TYPE_1__* device; scalar_t__ result; int eh_entry; } ;
struct request {int timeout; } ;
struct TYPE_2__ {int ioerr_cnt; int iodone_cnt; } ;



 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (int *) ;
 struct scsi_cmnd* FUNC_2 (struct request*) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*,unsigned long) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,int) ;
 int FUNC_8 (struct scsi_cmnd*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_10(struct request *VAR_5)
{
 struct scsi_cmnd *VAR_6 = FUNC_2(VAR_5);
 unsigned long VAR_7 = (VAR_6->allowed + 1) * VAR_5->timeout;
 int VAR_8;

 FUNC_0(&VAR_6->eh_entry);

 FUNC_1(&VAR_6->device->iodone_cnt);
 if (VAR_6->result)
  FUNC_1(&VAR_6->device->ioerr_cnt);

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 != 128 &&
     FUNC_9(VAR_6->jiffies_at_alloc + VAR_7, VAR_4)) {
  FUNC_3(VAR_1, VAR_6,
       "timing out command, waited %lus\n",
       VAR_7/VAR_0);
  VAR_8 = 128;
 }

 FUNC_7(VAR_6, VAR_8);

 switch (VAR_8) {
  case 128:
   FUNC_6(VAR_6);
   break;
  case 129:
   FUNC_8(VAR_6, VAR_3);
   break;
  case 130:
   FUNC_8(VAR_6, VAR_2);
   break;
  default:
   FUNC_5(VAR_6);
   break;
 }
}
