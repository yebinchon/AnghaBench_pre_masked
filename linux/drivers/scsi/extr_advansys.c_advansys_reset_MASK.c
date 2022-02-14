
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_7__ {scalar_t__ err_code; int overrun_dma; } ;
struct TYPE_6__ {int adv_dvc_var; TYPE_3__ asc_dvc_var; } ;
struct asc_board {TYPE_2__ dvc_var; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {struct Scsi_Host* host; } ;
typedef TYPE_3__ ASC_DVC_VAR ;
typedef int ADV_DVC_VAR ;


 int FUNC_0 (int,char*,...) ;

 scalar_t__ FUNC_1 (struct asc_board*) ;
 int FUNC_2 (struct Scsi_Host*,int ) ;

 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,struct scsi_cmnd*,char*,...) ;
 struct asc_board* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4->device->host;
 struct asc_board *VAR_6 = FUNC_7(VAR_5);
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = VAR_2;

 FUNC_0(1, "0x%p\n", VAR_4);

 FUNC_2(VAR_5, VAR_3);

 FUNC_6(VAR_1, VAR_4, "SCSI host reset started...\n");

 if (FUNC_1(VAR_6)) {
  ASC_DVC_VAR *VAR_10 = &VAR_6->dvc_var.asc_dvc_var;


  FUNC_0(1, "before AscInitAsc1000Driver()\n");
  VAR_8 = FUNC_5(VAR_10);


  if (VAR_10->err_code || !VAR_10->overrun_dma) {
   FUNC_6(VAR_1, VAR_4, "SCSI host reset error: "
        "0x%x, status: 0x%x\n", VAR_10->err_code,
        VAR_8);
   VAR_9 = VAR_0;
  } else if (VAR_8) {
   FUNC_6(VAR_1, VAR_4, "SCSI host reset warning: "
        "0x%x\n", VAR_8);
  } else {
   FUNC_6(VAR_1, VAR_4, "SCSI host reset "
        "successful\n");
  }

  FUNC_0(1, "after AscInitAsc1000Driver()\n");
 } else {




  ADV_DVC_VAR *VAR_11 = &VAR_6->dvc_var.adv_dvc_var;




  FUNC_0(1, "before AdvResetChipAndSB()\n");
  switch (FUNC_4(VAR_11)) {
  case 128:
   FUNC_6(VAR_1, VAR_4, "SCSI host reset "
        "successful\n");
   break;
  case 129:
  default:
   FUNC_6(VAR_1, VAR_4, "SCSI host reset error\n");
   VAR_9 = VAR_0;
   break;
  }
  FUNC_8(VAR_5->host_lock, VAR_7);
  FUNC_3(VAR_11);
  FUNC_9(VAR_5->host_lock, VAR_7);
 }

 FUNC_0(1, "ret %d\n", VAR_9);

 return VAR_9;
}
