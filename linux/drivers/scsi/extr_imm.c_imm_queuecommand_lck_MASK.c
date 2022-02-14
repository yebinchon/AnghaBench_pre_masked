
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ phase; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; TYPE_1__ SCp; TYPE_2__* device; } ;
struct TYPE_8__ {int imm_tq; struct scsi_cmnd* cur_cmd; int jstart; scalar_t__ failed; } ;
typedef TYPE_3__ imm_struct ;
struct TYPE_7__ {int host; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_2,
  void (*VAR_3)(struct scsi_cmnd *))
{
 imm_struct *VAR_4 = FUNC_0(VAR_2->device->host);

 if (VAR_4->cur_cmd) {
  FUNC_2("IMM: bug in imm_queuecommand\n");
  return 0;
 }
 VAR_4->failed = 0;
 VAR_4->jstart = VAR_1;
 VAR_4->cur_cmd = VAR_2;
 VAR_2->scsi_done = VAR_3;
 VAR_2->result = VAR_0 << 16;
 VAR_2->SCp.phase = 0;

 FUNC_3(&VAR_4->imm_tq, 0);

 FUNC_1(VAR_4);

 return 0;
}
