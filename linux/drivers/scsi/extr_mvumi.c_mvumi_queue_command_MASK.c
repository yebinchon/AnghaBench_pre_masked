
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__ SCp; scalar_t__ result; } ;
struct mvumi_hba {TYPE_2__* instancet; } ;
struct mvumi_cmd {struct scsi_cmnd* scmd; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
struct TYPE_4__ {int (* fire_cmd ) (struct mvumi_hba*,struct mvumi_cmd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mvumi_hba*,struct scsi_cmnd*,struct mvumi_cmd*) ;
 struct mvumi_cmd* FUNC_1 (struct mvumi_hba*) ;
 int FUNC_2 (struct mvumi_hba*,struct mvumi_cmd*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct mvumi_hba*,struct mvumi_cmd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct Scsi_Host *VAR_1,
     struct scsi_cmnd *VAR_2)
{
 struct mvumi_cmd *VAR_3;
 struct mvumi_hba *VAR_4;
 unsigned long VAR_5;

 FUNC_3(VAR_1->host_lock, VAR_5);

 VAR_4 = (struct mvumi_hba *) VAR_1->hostdata;
 VAR_2->result = 0;
 VAR_3 = FUNC_1(VAR_4);
 if (FUNC_7(!VAR_3)) {
  FUNC_4(VAR_1->host_lock, VAR_5);
  return VAR_0;
 }

 if (FUNC_7(FUNC_0(VAR_4, VAR_2, VAR_3)))
  goto out_return_cmd;

 VAR_3->scmd = VAR_2;
 VAR_2->SCp.ptr = (char *) VAR_3;
 VAR_4->instancet->fire_cmd(VAR_4, VAR_3);
 FUNC_4(VAR_1->host_lock, VAR_5);
 return 0;

out_return_cmd:
 FUNC_2(VAR_4, VAR_3);
 VAR_2->scsi_done(VAR_2);
 FUNC_4(VAR_1->host_lock, VAR_5);
 return 0;
}
