
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {scalar_t__ device; } ;
struct TYPE_6__ {int err_code; int bus_type; int init_state; TYPE_2__* cfg; int bug_fix_cntl; int iop_base; } ;
struct TYPE_4__ {TYPE_3__ asc_dvc_var; } ;
struct asc_board {TYPE_1__ dvc_var; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_5__ {int cmd_qng_enabled; int disc_enable; scalar_t__ chip_scsi_id; int isa_dma_speed; int isa_dma_channel; } ;
typedef int PortAddr ;
typedef TYPE_3__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 unsigned short VAR_12 ;




 int FUNC_0 (int ) ;
 unsigned short FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,unsigned short) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_8 (int ,struct Scsi_Host*,char*,...) ;
 struct asc_board* FUNC_9 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_18, struct Scsi_Host *VAR_19)
{
 struct asc_board *VAR_20 = FUNC_9(VAR_19);
 ASC_DVC_VAR *VAR_21 = &VAR_20->dvc_var.asc_dvc_var;
 PortAddr VAR_22 = VAR_21->iop_base;
 unsigned short VAR_23;
 unsigned short VAR_24 = 0;

 VAR_21->init_state |= VAR_6;
 if (VAR_21->err_code != 0)
  return VAR_21->err_code;
 if (!FUNC_0(VAR_21->iop_base)) {
  VAR_21->err_code = VAR_4;
  return VAR_21->err_code;
 }

 VAR_23 = FUNC_1(VAR_22);
 if ((VAR_23 & VAR_2) != 0) {
  VAR_23 &= ~VAR_2;
  VAR_24 |= VAR_12;
  FUNC_4(VAR_22, VAR_23);
 }
 if ((VAR_21->cfg->cmd_qng_enabled & VAR_21->cfg->disc_enable) !=
     VAR_21->cfg->cmd_qng_enabled) {
  VAR_21->cfg->disc_enable = VAR_21->cfg->cmd_qng_enabled;
  VAR_24 |= 131;
 }
 if (FUNC_2(VAR_22) & VAR_13) {
  VAR_24 |= 132;
 }
 if (VAR_21->bus_type == VAR_9) {
  if (FUNC_3(VAR_22, VAR_21->bus_type)
      == VAR_3) {
   VAR_21->bug_fix_cntl |= VAR_0;
  }
 }
 if (FUNC_5(VAR_22, VAR_21->cfg->chip_scsi_id) !=
     VAR_21->cfg->chip_scsi_id) {
  VAR_21->err_code |= VAR_5;
 }







 VAR_21->init_state |= VAR_7;

 switch (VAR_24) {
 case 0:
  break;
 case 129:
  FUNC_8(VAR_15, VAR_19, "I/O port address "
    "modified\n");
  break;
 case 132:
  FUNC_8(VAR_15, VAR_19, "I/O port increment switch "
    "enabled\n");
  break;
 case 130:
  FUNC_8(VAR_15, VAR_19, "EEPROM checksum error\n");
  break;
 case 128:
  FUNC_8(VAR_15, VAR_19, "IRQ modified\n");
  break;
 case 131:
  FUNC_8(VAR_15, VAR_19, "tag queuing w/o "
    "disconnects\n");
  break;
 default:
  FUNC_8(VAR_15, VAR_19, "unknown warning: 0x%x\n",
    VAR_24);
  break;
 }

 if (VAR_21->err_code != 0)
  FUNC_8(VAR_14, VAR_19, "error 0x%x at init_state "
   "0x%x\n", VAR_21->err_code, VAR_21->init_state);

 return VAR_21->err_code;
}
