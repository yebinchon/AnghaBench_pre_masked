
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int ushort ;
typedef int ulong ;
struct pci_dev {scalar_t__ device; } ;
struct TYPE_25__ {int max_host_qng; int serial_number_word3; int serial_number_word2; int serial_number_word1; int scsi_reset_delay; int start_motor; int tagqng_able; int sdtr_speed4; int sdtr_speed3; int sdtr_speed2; int sdtr_speed1; int wdtr_able; int bios_ctrl; int disc_enable; int termination_lvd; int max_dvc_qng; int adapter_scsi_id; } ;
struct TYPE_15__ {int max_host_qng; int serial_number_word3; int serial_number_word2; int serial_number_word1; int scsi_reset_delay; int start_motor; int tagqng_able; int sdtr_speed4; int sdtr_speed3; int sdtr_speed2; int sdtr_speed1; int wdtr_able; int bios_ctrl; int disc_enable; int termination_lvd; int max_dvc_qng; int adapter_scsi_id; } ;
struct TYPE_16__ {int max_host_qng; int serial_number_word3; int serial_number_word2; int serial_number_word1; int scsi_reset_delay; int start_motor; int tagqng_able; int ultra_able; int sdtr_able; int wdtr_able; int bios_ctrl; int disc_enable; int termination; int max_dvc_qng; int adapter_scsi_id; } ;
struct TYPE_23__ {int max_total_qng; int * adapter_info; int max_tag_qng; int no_scam; int cntl; int start_motor; int use_cmd_qng; int disc_enable; int init_sdtr; } ;
struct TYPE_19__ {TYPE_9__ adv_38C1600_eep; TYPE_10__ adv_38C0800_eep; TYPE_11__ adv_3550_eep; TYPE_7__ asc_eep; } ;
struct TYPE_20__ {int serial3; int serial2; int serial1; int disc_enable; int termination; } ;
struct TYPE_21__ {int isa_dma_channel; int chip_scsi_id; int * adapter_info; int * max_tag_qng; int isa_dma_speed; int cmd_qng_enabled; int disc_enable; int sdtr_enable; } ;
struct TYPE_18__ {TYPE_4__ adv_dvc_cfg; TYPE_5__ asc_dvc_cfg; } ;
struct TYPE_24__ {scalar_t__ chip_type; int max_host_qng; scalar_t__ iop_base; int chip_scsi_id; TYPE_4__* cfg; int scsi_reset_wait; int start_motor; int tagqng_able; int sdtr_speed4; int sdtr_speed3; int sdtr_speed2; int sdtr_speed1; int wdtr_able; int bios_ctrl; int max_dvc_qng; int ultra_able; int sdtr_able; struct asc_board* drv_ptr; } ;
struct TYPE_22__ {int bus_type; unsigned int iop_base; int max_total_qng; int overrun_buf; int overrun_dma; scalar_t__ err_code; int init_state; TYPE_5__* cfg; int no_scam; int dvc_cntl; int start_motor; struct asc_board* drv_ptr; } ;
struct TYPE_17__ {TYPE_8__ adv_dvc_var; TYPE_6__ asc_dvc_var; } ;
struct asc_board {unsigned int ioport; int bios_signature; int bios_version; int bios_codeseg; int bios_codelen; scalar_t__ ioremap_addr; int irq; int dev; int asc_n_io_port; int init_tidmask; TYPE_3__ eep_config; TYPE_2__ dvc_cfg; TYPE_1__ dvc_var; } ;
struct Scsi_Host {int unchecked_isa_dma; unsigned int io_port; int can_queue; int sg_tablesize; int base; int dma_channel; int this_id; int max_cmd_len; scalar_t__ max_lun; scalar_t__ max_id; scalar_t__ max_channel; } ;
typedef scalar_t__ AdvPortAddr ;
typedef TYPE_6__ ASC_DVC_VAR ;
typedef TYPE_7__ ASCEEP_CONFIG ;
typedef TYPE_8__ ADV_DVC_VAR ;
typedef TYPE_9__ ADVEEP_38C1600_CONFIG ;
typedef TYPE_10__ ADVEEP_38C0800_CONFIG ;
typedef TYPE_11__ ADVEEP_3550_CONFIG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,struct Scsi_Host*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int VAR_7 ;




 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_5 (struct asc_board*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (struct pci_dev*,struct Scsi_Host*) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned int,int) ;
 int FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (struct Scsi_Host*) ;
 scalar_t__ FUNC_12 (struct pci_dev*,struct Scsi_Host*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_13 (struct asc_board*) ;
 scalar_t__ FUNC_14 (struct Scsi_Host*) ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,struct Scsi_Host*) ;
 scalar_t__ FUNC_18 (unsigned int) ;
 scalar_t__ FUNC_19 (unsigned int) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 scalar_t__ FUNC_23 (struct pci_dev*,int) ;
 int FUNC_24 (struct pci_dev*,int) ;
 scalar_t__ FUNC_25 (struct pci_dev*,int) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ,int,int ,struct Scsi_Host*) ;
 int FUNC_28 (struct Scsi_Host*,int ) ;
 int FUNC_29 (struct Scsi_Host*) ;
 int FUNC_30 (int ,struct Scsi_Host*,char*,long,...) ;
 struct asc_board* FUNC_31 (struct Scsi_Host*) ;
 struct pci_dev* FUNC_32 (int ) ;

__attribute__((used)) static int FUNC_33(struct Scsi_Host *VAR_31, unsigned int VAR_32,
    int VAR_33)
{
 struct pci_dev *VAR_34;
 struct asc_board *VAR_35 = FUNC_31(VAR_31);
 ASC_DVC_VAR *VAR_36 = ((void*)0);
 ADV_DVC_VAR *VAR_37 = ((void*)0);
 int VAR_38, VAR_39, VAR_40;

 VAR_34 = (VAR_33 == 129) ? FUNC_32(VAR_35->dev) : ((void*)0);

 if (FUNC_5(VAR_35)) {
  FUNC_1(1, "narrow board\n");
  VAR_36 = &VAR_35->dvc_var.asc_dvc_var;
  VAR_36->bus_type = VAR_33;
  VAR_36->drv_ptr = VAR_35;
  VAR_36->cfg = &VAR_35->dvc_cfg.asc_dvc_cfg;
  VAR_36->iop_base = VAR_32;
 } else {
 }

 if (FUNC_5(VAR_35)) {




  switch (VAR_36->bus_type) {
  default:
   FUNC_30(VAR_25, VAR_31, "unknown adapter type: "
     "%d\n", VAR_36->bus_type);
   VAR_31->unchecked_isa_dma = 0;
   VAR_38 = 0;
   break;
  }







  FUNC_1(2, "AscInitGetConfig()\n");
  VAR_40 = FUNC_11(VAR_31) ? -VAR_21 : 0;
 } else {
  VAR_38 = 0;
  VAR_40 = -VAR_21;

 }

 if (VAR_40)
  goto err_unmap;





 if (FUNC_5(VAR_35)) {

  ASCEEP_CONFIG *VAR_41;




  VAR_35->init_tidmask |=
      FUNC_0(VAR_36->cfg->chip_scsi_id);




  VAR_41 = &VAR_35->eep_config.asc_eep;

  VAR_41->init_sdtr = VAR_36->cfg->sdtr_enable;
  VAR_41->disc_enable = VAR_36->cfg->disc_enable;
  VAR_41->use_cmd_qng = VAR_36->cfg->cmd_qng_enabled;
  FUNC_4(VAR_41, VAR_36->cfg->isa_dma_speed);
  VAR_41->start_motor = VAR_36->start_motor;
  VAR_41->cntl = VAR_36->dvc_cntl;
  VAR_41->no_scam = VAR_36->no_scam;
  VAR_41->max_total_qng = VAR_36->max_total_qng;
  FUNC_3(VAR_41, VAR_36->cfg->chip_scsi_id);

  VAR_41->max_tag_qng = VAR_36->cfg->max_tag_qng[0];
  VAR_41->adapter_info[0] = VAR_36->cfg->adapter_info[0];
  VAR_41->adapter_info[1] = VAR_36->cfg->adapter_info[1];
  VAR_41->adapter_info[2] = VAR_36->cfg->adapter_info[2];
  VAR_41->adapter_info[3] = VAR_36->cfg->adapter_info[3];
  VAR_41->adapter_info[4] = VAR_36->cfg->adapter_info[4];
  VAR_41->adapter_info[5] = VAR_36->cfg->adapter_info[5];




  FUNC_1(2, "AscInitSetConfig()\n");
  VAR_40 = FUNC_12(VAR_34, VAR_31) ? -VAR_21 : 0;
  if (VAR_40)
   goto err_unmap;
 } else {
  ADVEEP_3550_CONFIG *VAR_42;
  ADVEEP_38C0800_CONFIG *VAR_43;
  ADVEEP_38C1600_CONFIG *VAR_44;




  if (VAR_37->chip_type == VAR_0) {
   VAR_42 = &VAR_35->eep_config.adv_3550_eep;

   VAR_42->adapter_scsi_id = VAR_37->chip_scsi_id;
   VAR_42->max_host_qng = VAR_37->max_host_qng;
   VAR_42->max_dvc_qng = VAR_37->max_dvc_qng;
   VAR_42->termination = VAR_37->cfg->termination;
   VAR_42->disc_enable = VAR_37->cfg->disc_enable;
   VAR_42->bios_ctrl = VAR_37->bios_ctrl;
   VAR_42->wdtr_able = VAR_37->wdtr_able;
   VAR_42->sdtr_able = VAR_37->sdtr_able;
   VAR_42->ultra_able = VAR_37->ultra_able;
   VAR_42->tagqng_able = VAR_37->tagqng_able;
   VAR_42->start_motor = VAR_37->start_motor;
   VAR_42->scsi_reset_delay =
       VAR_37->scsi_reset_wait;
   VAR_42->serial_number_word1 =
       VAR_37->cfg->serial1;
   VAR_42->serial_number_word2 =
       VAR_37->cfg->serial2;
   VAR_42->serial_number_word3 =
       VAR_37->cfg->serial3;
  } else if (VAR_37->chip_type == VAR_1) {
   VAR_43 = &VAR_35->eep_config.adv_38C0800_eep;

   VAR_43->adapter_scsi_id =
       VAR_37->chip_scsi_id;
   VAR_43->max_host_qng = VAR_37->max_host_qng;
   VAR_43->max_dvc_qng = VAR_37->max_dvc_qng;
   VAR_43->termination_lvd =
       VAR_37->cfg->termination;
   VAR_43->disc_enable =
       VAR_37->cfg->disc_enable;
   VAR_43->bios_ctrl = VAR_37->bios_ctrl;
   VAR_43->wdtr_able = VAR_37->wdtr_able;
   VAR_43->tagqng_able = VAR_37->tagqng_able;
   VAR_43->sdtr_speed1 = VAR_37->sdtr_speed1;
   VAR_43->sdtr_speed2 = VAR_37->sdtr_speed2;
   VAR_43->sdtr_speed3 = VAR_37->sdtr_speed3;
   VAR_43->sdtr_speed4 = VAR_37->sdtr_speed4;
   VAR_43->tagqng_able = VAR_37->tagqng_able;
   VAR_43->start_motor = VAR_37->start_motor;
   VAR_43->scsi_reset_delay =
       VAR_37->scsi_reset_wait;
   VAR_43->serial_number_word1 =
       VAR_37->cfg->serial1;
   VAR_43->serial_number_word2 =
       VAR_37->cfg->serial2;
   VAR_43->serial_number_word3 =
       VAR_37->cfg->serial3;
  } else {
   VAR_44 = &VAR_35->eep_config.adv_38C1600_eep;

   VAR_44->adapter_scsi_id =
       VAR_37->chip_scsi_id;
   VAR_44->max_host_qng = VAR_37->max_host_qng;
   VAR_44->max_dvc_qng = VAR_37->max_dvc_qng;
   VAR_44->termination_lvd =
       VAR_37->cfg->termination;
   VAR_44->disc_enable =
       VAR_37->cfg->disc_enable;
   VAR_44->bios_ctrl = VAR_37->bios_ctrl;
   VAR_44->wdtr_able = VAR_37->wdtr_able;
   VAR_44->tagqng_able = VAR_37->tagqng_able;
   VAR_44->sdtr_speed1 = VAR_37->sdtr_speed1;
   VAR_44->sdtr_speed2 = VAR_37->sdtr_speed2;
   VAR_44->sdtr_speed3 = VAR_37->sdtr_speed3;
   VAR_44->sdtr_speed4 = VAR_37->sdtr_speed4;
   VAR_44->tagqng_able = VAR_37->tagqng_able;
   VAR_44->start_motor = VAR_37->start_motor;
   VAR_44->scsi_reset_delay =
       VAR_37->scsi_reset_wait;
   VAR_44->serial_number_word1 =
       VAR_37->cfg->serial1;
   VAR_44->serial_number_word2 =
       VAR_37->cfg->serial2;
   VAR_44->serial_number_word3 =
       VAR_37->cfg->serial3;
  }




  VAR_35->init_tidmask |=
      FUNC_0(VAR_37->chip_scsi_id);
 }






 VAR_31->max_channel = 0;
 if (FUNC_5(VAR_35)) {
  VAR_31->max_id = VAR_10 + 1;
  VAR_31->max_lun = VAR_9 + 1;
  VAR_31->max_cmd_len = VAR_8;

  VAR_31->io_port = VAR_36->iop_base;
  VAR_35->asc_n_io_port = VAR_7;
  VAR_31->this_id = VAR_36->cfg->chip_scsi_id;


  VAR_31->can_queue = VAR_36->max_total_qng;
 } else {
  VAR_31->max_id = VAR_6 + 1;
  VAR_31->max_lun = VAR_4 + 1;
  VAR_31->max_cmd_len = VAR_3;







  VAR_31->io_port = VAR_32;

  VAR_31->this_id = VAR_37->chip_scsi_id;


  VAR_31->can_queue = VAR_37->max_host_qng;
 }





 if (FUNC_5(VAR_35)) {






  VAR_31->sg_tablesize =
      (((VAR_36->max_total_qng - 2) / 2) *
       VAR_12) + 1;
 } else {
  VAR_31->sg_tablesize = VAR_5;
 }







 if (VAR_31->sg_tablesize > VAR_29) {
  VAR_31->sg_tablesize = VAR_29;
 }

 FUNC_1(1, "sg_tablesize: %d\n", VAR_31->sg_tablesize);


 if (FUNC_5(VAR_35)) {
  VAR_31->base = FUNC_9(VAR_36->iop_base,
          VAR_36->bus_type);
 } else {




  FUNC_7(VAR_37->iop_base,
    VAR_15, VAR_35->bios_signature);
  FUNC_7(VAR_37->iop_base,
    VAR_16, VAR_35->bios_version);
  FUNC_7(VAR_37->iop_base,
    VAR_14, VAR_35->bios_codeseg);
  FUNC_7(VAR_37->iop_base,
    VAR_13, VAR_35->bios_codelen);

  FUNC_1(1, "bios_signature 0x%x, bios_version 0x%x\n",
    VAR_35->bios_signature, VAR_35->bios_version);

  FUNC_1(1, "bios_codeseg 0x%x, bios_codelen 0x%x\n",
    VAR_35->bios_codeseg, VAR_35->bios_codelen);





  if (VAR_35->bios_signature == 0x55AA) {




   VAR_31->base = ((ulong)VAR_35->bios_codeseg << 4);
  } else {
   VAR_31->base = 0;
  }
 }






 VAR_31->dma_channel = VAR_26;
 FUNC_1(2, "request_irq(%d, %p)\n", VAR_35->irq, VAR_31);

 VAR_40 = FUNC_27(VAR_35->irq, VAR_30, VAR_38,
     VAR_18, VAR_31);

 if (VAR_40) {
  if (VAR_40 == -VAR_19) {
   FUNC_30(VAR_25, VAR_31, "request_irq(): IRQ 0x%x "
     "already in use\n", VAR_35->irq);
  } else if (VAR_40 == -VAR_20) {
   FUNC_30(VAR_25, VAR_31, "request_irq(): IRQ 0x%x "
     "not valid\n", VAR_35->irq);
  } else {
   FUNC_30(VAR_25, VAR_31, "request_irq(): IRQ 0x%x "
     "failed with %d\n", VAR_35->irq, VAR_40);
  }
  goto err_free_dma;
 }




 if (FUNC_5(VAR_35)) {
  FUNC_1(2, "AscInitAsc1000Driver()\n");

  VAR_36->overrun_buf = FUNC_22(VAR_11, VAR_23);
  if (!VAR_36->overrun_buf) {
   VAR_40 = -VAR_22;
   goto err_free_irq;
  }
  VAR_39 = FUNC_10(VAR_36);

  if (VAR_39 || VAR_36->err_code) {
   FUNC_30(VAR_25, VAR_31, "error: init_state 0x%x, "
     "warn 0x%x, error 0x%x\n",
     VAR_36->init_state, VAR_39,
     VAR_36->err_code);
   if (!VAR_36->overrun_dma) {
    VAR_40 = -VAR_21;
    goto err_free_mem;
   }
  }
 } else {
  if (FUNC_14(VAR_31)) {
   VAR_40 = -VAR_21;
   goto err_free_mem;
  }
 }

 FUNC_2(2, VAR_31);

 VAR_40 = FUNC_28(VAR_31, VAR_35->dev);
 if (VAR_40)
  goto err_free_mem;

 FUNC_29(VAR_31);
 return 0;

 err_free_mem:
 if (FUNC_5(VAR_35)) {
  if (VAR_36->overrun_dma)
   FUNC_15(VAR_35->dev, VAR_36->overrun_dma,
      VAR_11, VAR_17);
  FUNC_21(VAR_36->overrun_buf);
 } else
  FUNC_13(VAR_35);
 err_free_irq:
 FUNC_17(VAR_35->irq, VAR_31);
 err_free_dma:




 err_unmap:
 if (VAR_35->ioremap_addr)
  FUNC_20(VAR_35->ioremap_addr);



 return VAR_40;
}
