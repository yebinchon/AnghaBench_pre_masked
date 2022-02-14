
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phase; } ;
struct scsi_cmnd {int result; TYPE_1__ SCp; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct fib {int dummy; } ;
struct aac_dev {scalar_t__ maximum_num_physicals; } ;
struct TYPE_4__ {int lun; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fib*,struct scsi_cmnd*) ;
 struct fib* FUNC_1 (struct aac_dev*,struct scsi_cmnd*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 struct aac_dev* FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_4)
{
 struct fib *VAR_5;
 struct aac_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_4->device->host);
 if (FUNC_5(VAR_4) >= VAR_6->maximum_num_physicals ||
   VAR_4->device->lun > VAR_0 - 1) {
  VAR_4->result = VAR_2 << 16;
  VAR_4->scsi_done(VAR_4);
  return 0;
 }




 VAR_5 = FUNC_1(VAR_6, VAR_4);
 if (!VAR_5)
  return -1;

 VAR_4->SCp.phase = VAR_1;
 VAR_7 = FUNC_0(VAR_5, VAR_4);




 if (VAR_7 == -VAR_3)
  return 0;

 FUNC_4("aac_hba_cmd_req: aac_fib_send failed with status: %d\n",
  VAR_7);
 FUNC_2(VAR_5);
 FUNC_3(VAR_5);

 return -1;
}
