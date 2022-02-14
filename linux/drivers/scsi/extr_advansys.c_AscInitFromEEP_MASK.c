
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ushort ;
typedef scalar_t__ uchar ;
struct TYPE_14__ {int cfg_lsw; int cfg_msw; int chksum; int init_sdtr; int disc_enable; int start_motor; int use_cmd_qng; int max_total_qng; int max_tag_qng; int cntl; int* adapter_info; int * dos_int13_table; scalar_t__ no_scam; } ;
struct TYPE_13__ {int scsi_reset_wait; int bus_type; int start_motor; int dvc_cntl; int max_total_qng; int min_sdtr_index; TYPE_1__* cfg; int * dos_int13_table; scalar_t__ no_scam; int err_code; int init_state; int iop_base; } ;
struct TYPE_12__ {int chip_version; int sdtr_enable; int disc_enable; int cmd_qng_enabled; int* adapter_info; int chip_scsi_id; int* max_tag_qng; scalar_t__* sdtr_period_offset; int isa_dma_speed; } ;
typedef int PortAddr ;
typedef TYPE_2__ ASC_DVC_VAR ;
typedef TYPE_3__ ASCEEP_CONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,TYPE_3__*,int) ;
 int FUNC_17 (int ,scalar_t__) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int ,int ,int) ;
 int VAR_25 ;
 int FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(ASC_DVC_VAR *VAR_26)
{
 ASCEEP_CONFIG VAR_27;
 ASCEEP_CONFIG *VAR_28;
 PortAddr VAR_29;
 ushort VAR_30;
 ushort VAR_31;
 ushort VAR_32, VAR_33;
 int VAR_34;
 int VAR_35 = 0;

 VAR_29 = VAR_26->iop_base;
 VAR_31 = 0;
 FUNC_21(VAR_29, VAR_0, 0x00FE);
 FUNC_19(VAR_29);
 if ((FUNC_18(VAR_29)) ||
     (FUNC_8(VAR_29) != 0)) {
  VAR_26->init_state |= VAR_8;
  FUNC_14(VAR_26);
  FUNC_22(VAR_26->scsi_reset_wait * 1000);
 }
 if (!FUNC_13(VAR_29)) {
  VAR_26->err_code |= VAR_7;
  return (VAR_31);
 }
 FUNC_17(VAR_29, VAR_16);
 if (FUNC_12(VAR_29) != VAR_16) {
  VAR_26->err_code |= VAR_6;
  return (VAR_31);
 }
 VAR_28 = (ASCEEP_CONFIG *)&VAR_27;
 VAR_32 = FUNC_7(VAR_29);
 VAR_33 = FUNC_6(VAR_29);
 if ((VAR_32 & VAR_2) != 0) {
  VAR_32 &= ~VAR_2;
  VAR_31 |= VAR_21;
  FUNC_15(VAR_29, VAR_32);
 }
 VAR_30 = FUNC_11(VAR_29, VAR_28, VAR_26->bus_type);
 FUNC_0(1, "chksum 0x%x\n", VAR_30);
 if (VAR_30 == 0) {
  VAR_30 = 0xaa55;
 }
 if (FUNC_9(VAR_29) & VAR_25) {
  VAR_31 |= VAR_20;
  if (VAR_26->cfg->chip_version == 3) {
   if (VAR_28->cfg_lsw != VAR_33) {
    VAR_31 |= VAR_24;
    VAR_28->cfg_lsw =
        FUNC_6(VAR_29);
   }
   if (VAR_28->cfg_msw != VAR_32) {
    VAR_31 |= VAR_24;
    VAR_28->cfg_msw =
        FUNC_7(VAR_29);
   }
  }
 }
 VAR_28->cfg_msw &= ~VAR_2;
 VAR_28->cfg_lsw |= VAR_1;
 FUNC_0(1, "eep_config->chksum 0x%x\n", VAR_28->chksum);
 if (VAR_30 != VAR_28->chksum) {
  if (FUNC_10(VAR_29, VAR_26->bus_type) ==
      VAR_3) {
   FUNC_0(1, "chksum error ignored; EEPROM-less board\n");
   VAR_28->init_sdtr = 0xFF;
   VAR_28->disc_enable = 0xFF;
   VAR_28->start_motor = 0xFF;
   VAR_28->use_cmd_qng = 0;
   VAR_28->max_total_qng = 0xF0;
   VAR_28->max_tag_qng = 0x20;
   VAR_28->cntl = 0xBFFF;
   FUNC_3(VAR_28, 7);
   VAR_28->no_scam = 0;
   VAR_28->adapter_info[0] = 0;
   VAR_28->adapter_info[1] = 0;
   VAR_28->adapter_info[2] = 0;
   VAR_28->adapter_info[3] = 0;
   VAR_28->adapter_info[4] = 0;

   VAR_28->adapter_info[5] = 0xBB;
  } else {
   FUNC_4
       ("AscInitFromEEP: EEPROM checksum error; Will try to re-write EEPROM.\n");
   VAR_35 = 1;
   VAR_31 |= VAR_23;
  }
 }
 VAR_26->cfg->sdtr_enable = VAR_28->init_sdtr;
 VAR_26->cfg->disc_enable = VAR_28->disc_enable;
 VAR_26->cfg->cmd_qng_enabled = VAR_28->use_cmd_qng;
 VAR_26->cfg->isa_dma_speed = FUNC_2(VAR_28);
 VAR_26->start_motor = VAR_28->start_motor;
 VAR_26->dvc_cntl = VAR_28->cntl;
 VAR_26->no_scam = VAR_28->no_scam;
 VAR_26->cfg->adapter_info[0] = VAR_28->adapter_info[0];
 VAR_26->cfg->adapter_info[1] = VAR_28->adapter_info[1];
 VAR_26->cfg->adapter_info[2] = VAR_28->adapter_info[2];
 VAR_26->cfg->adapter_info[3] = VAR_28->adapter_info[3];
 VAR_26->cfg->adapter_info[4] = VAR_28->adapter_info[4];
 VAR_26->cfg->adapter_info[5] = VAR_28->adapter_info[5];
 if (!FUNC_20(VAR_26)) {
  if (((VAR_26->bus_type & VAR_9) ==
       VAR_9)) {
   VAR_28->max_total_qng =
       VAR_13;
   VAR_28->max_tag_qng =
       VAR_12;
  } else {
   VAR_28->cfg_msw |= 0x0800;
   VAR_32 |= 0x0800;
   FUNC_15(VAR_29, VAR_32);
   VAR_28->max_total_qng = VAR_11;
   VAR_28->max_tag_qng = VAR_10;
  }
 } else {
 }
 if (VAR_28->max_total_qng < VAR_18) {
  VAR_28->max_total_qng = VAR_18;
 }
 if (VAR_28->max_total_qng > VAR_15) {
  VAR_28->max_total_qng = VAR_15;
 }
 if (VAR_28->max_tag_qng > VAR_28->max_total_qng) {
  VAR_28->max_tag_qng = VAR_28->max_total_qng;
 }
 if (VAR_28->max_tag_qng < VAR_17) {
  VAR_28->max_tag_qng = VAR_17;
 }
 VAR_26->max_total_qng = VAR_28->max_total_qng;
 if ((VAR_28->use_cmd_qng & VAR_28->disc_enable) !=
     VAR_28->use_cmd_qng) {
  VAR_28->disc_enable = VAR_28->use_cmd_qng;
  VAR_31 |= VAR_22;
 }
 FUNC_3(VAR_28,
       FUNC_1(VAR_28) & VAR_14);
 VAR_26->cfg->chip_scsi_id = FUNC_1(VAR_28);
 if (((VAR_26->bus_type & VAR_9) == VAR_9) &&
     !(VAR_26->dvc_cntl & VAR_4)) {
  VAR_26->min_sdtr_index = VAR_19;
 }

 for (VAR_34 = 0; VAR_34 <= VAR_14; VAR_34++) {
  VAR_26->dos_int13_table[VAR_34] = VAR_28->dos_int13_table[VAR_34];
  VAR_26->cfg->max_tag_qng[VAR_34] = VAR_28->max_tag_qng;
  VAR_26->cfg->sdtr_period_offset[VAR_34] =
      (uchar)(VAR_5 |
       (VAR_26->min_sdtr_index << 4));
 }
 VAR_28->cfg_msw = FUNC_7(VAR_29);
 if (VAR_35) {
  if ((VAR_34 = FUNC_16(VAR_29, VAR_28,
         VAR_26->bus_type)) != 0) {
   FUNC_5
       ("AscInitFromEEP: Failed to re-write EEPROM with %d errors.\n",
        VAR_34);
  } else {
   FUNC_4
       ("AscInitFromEEP: Successfully re-wrote EEPROM.\n");
  }
 }
 return (VAR_31);
}
