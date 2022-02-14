
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct snic_icmnd_cmpl {int scsi_status; int resid; } ;
struct TYPE_7__ {int scsi_errs; int io_errs; int out_of_res; } ;
struct TYPE_6__ {int sgl_inval; int data_cnt_mismat; int io_aborted; int io_tmo; } ;
struct TYPE_5__ {int io_not_found; } ;
struct TYPE_8__ {TYPE_3__ fw; TYPE_2__ misc; TYPE_1__ io; } ;
struct snic {int shost; TYPE_4__ s_stats; } ;
struct scsi_cmnd {int result; } ;


 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct snic *VAR_5,
        struct snic_icmnd_cmpl *VAR_6,
        struct scsi_cmnd *VAR_7,
        u8 VAR_8)
{
 int VAR_9 = 0;

 switch (VAR_8) {
 case 128:
  FUNC_3(&VAR_5->s_stats.misc.io_tmo);
  VAR_9 = VAR_4;
  break;

 case 142:
  FUNC_3(&VAR_5->s_stats.misc.io_aborted);
  VAR_9 = VAR_0;
  break;

 case 140:
  FUNC_3(&VAR_5->s_stats.misc.data_cnt_mismat);
  FUNC_5(VAR_7, FUNC_4(VAR_6->resid));
  VAR_9 = VAR_1;
  break;

 case 132:
  FUNC_3(&VAR_5->s_stats.fw.out_of_res);
  VAR_9 = VAR_3;
  break;

 case 134:
  FUNC_3(&VAR_5->s_stats.io.io_not_found);
  VAR_9 = VAR_1;
  break;

 case 129:
  FUNC_3(&VAR_5->s_stats.misc.sgl_inval);
  VAR_9 = VAR_1;
  break;

 case 137:
  FUNC_3(&VAR_5->s_stats.fw.io_errs);
  VAR_9 = VAR_1;
  break;

 case 130:
  FUNC_3(&VAR_5->s_stats.fw.scsi_errs);
  break;

 case 133:
 case 139:
  VAR_9 = VAR_2;
  break;

 case 136:
 case 135:
 case 131:
 case 141:
 case 138:
 default:
  FUNC_2(VAR_5->shost,
         "Invalid Hdr/Param or Req Not Supported or Cmnd Rejected or Device Offline. or Unknown\n");
  VAR_9 = VAR_1;
  break;
 }

 FUNC_1(VAR_5->shost, "fw returns failed status %s flags 0x%llx\n",
        FUNC_6(VAR_8), FUNC_0(VAR_7));


 VAR_7->result = (VAR_9 << 16) | VAR_6->scsi_status;
}
