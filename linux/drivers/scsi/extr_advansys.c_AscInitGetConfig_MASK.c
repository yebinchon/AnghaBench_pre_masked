
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ err_code; scalar_t__ scsi_reset_wait; int init_state; int iop_base; } ;
struct TYPE_5__ {TYPE_2__ asc_dvc_var; } ;
struct asc_board {TYPE_1__ dvc_var; } ;
struct Scsi_Host {int dummy; } ;
typedef TYPE_2__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned short FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,struct Scsi_Host*,char*,...) ;
 struct asc_board* FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_5(struct Scsi_Host *VAR_6)
{
 struct asc_board *VAR_7 = FUNC_4(VAR_6);
 ASC_DVC_VAR *VAR_8 = &VAR_7->dvc_var.asc_dvc_var;
 unsigned short VAR_9 = 0;

 VAR_8->init_state = VAR_1;
 if (VAR_8->err_code != 0)
  return VAR_8->err_code;

 if (FUNC_0(VAR_8->iop_base)) {
  FUNC_1(VAR_8);
  VAR_9 = FUNC_2(VAR_8);
  VAR_8->init_state |= VAR_2;
  if (VAR_8->scsi_reset_wait > VAR_3)
   VAR_8->scsi_reset_wait = VAR_3;
 } else {
  VAR_8->err_code = VAR_0;
 }

 switch (VAR_9) {
 case 0:
  break;
 case 129:
  FUNC_3(VAR_5, VAR_6, "I/O port address "
    "modified\n");
  break;
 case 132:
  FUNC_3(VAR_5, VAR_6, "I/O port increment switch "
    "enabled\n");
  break;
 case 130:
  FUNC_3(VAR_5, VAR_6, "EEPROM checksum error\n");
  break;
 case 128:
  FUNC_3(VAR_5, VAR_6, "IRQ modified\n");
  break;
 case 131:
  FUNC_3(VAR_5, VAR_6, "tag queuing enabled w/o "
    "disconnects\n");
  break;
 default:
  FUNC_3(VAR_5, VAR_6, "unknown warning: 0x%x\n",
    VAR_9);
  break;
 }

 if (VAR_8->err_code != 0)
  FUNC_3(VAR_4, VAR_6, "error 0x%x at init_state "
   "0x%x\n", VAR_8->err_code, VAR_8->init_state);

 return VAR_8->err_code;
}
