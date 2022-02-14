
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtsx_chip {int adma_mode; int driver_first_load; int mspro_formatter_enable; int ss_idle_period; int dynamic_aspm; int asic_sd_sdr104_clk; int asic_sd_sdr50_clk; int asic_sd_ddr50_clk; int asic_sd_hs_clk; int asic_mmc_52m_clk; int asic_ms_hg_clk; int asic_ms_4bit_clk; int asic_ms_1bit_clk; int ssc_en; int sd_speed_prior; int sd_current_prior; int sd_ctl; int mmc_ddr_tx_phase; int sd_default_tx_phase; int sd_default_rx_phase; int pmos_pwr_on_interval; int sd_voltage_switch_delay; int ms_power_class_en; int sd_400mA_ocp_thd; int sd_800mA_ocp_thd; int ms_ocp_thd; int card_drive_sel; int sd30_drive_sel_1v8; int sd30_drive_sel_3v3; int do_delink_before_power_down; int auto_power_down; int force_clkreq_0; int sdio_retry_cnt; int xd_timeout; int sd_timeout; int ms_timeout; int mspro_timeout; int power_down_in_ss; int sdr104_en; int sdr50_en; int ddr50_en; int delink_stage1_step; int delink_stage2_step; int delink_stage3_step; int auto_delink_in_L1; int blink_led; int support_ms_8bit; int s3_pwr_off_delay; scalar_t__ phy_voltage; scalar_t__ max_payload; scalar_t__ hp_watch_bios_hotplug; int msi_en; scalar_t__ ft2_fast_mode; scalar_t__ polling_config; scalar_t__ sd_ddr_tx_phase; void* ssc_depth_low_speed; void* ssc_depth_ms_4bit; void* ssc_depth_ms_hg; void* ssc_depth_mmc_52m; void* ssc_depth_sd_hs; void* ssc_depth_sd_ddr50; void* ssc_depth_sd_sdr50; void* ssc_depth_sd_sdr104; int fpga_ms_1bit_clk; void* fpga_ms_4bit_clk; void* fpga_ms_hg_clk; void* fpga_mmc_52m_clk; void* fpga_sd_hs_clk; void* fpga_sd_sdr50_clk; void* fpga_sd_ddr50_clk; int fpga_sd_sdr104_clk; int aspm_l0s_l1_en; scalar_t__ remote_wakeup_en; int ss_en; int auto_delink_en; int lun_mode; scalar_t__ use_hw_setting; scalar_t__ ignore_sd; scalar_t__ sdio_in_charge; scalar_t__ lun_mc; TYPE_2__* rtsx; int product_id; int vendor_id; } ;
struct TYPE_4__ {TYPE_1__* pci; } ;
struct TYPE_3__ {int device; int vendor; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_0(struct rtsx_chip *VAR_16)
{
 VAR_16->vendor_id = VAR_16->rtsx->pci->vendor;
 VAR_16->product_id = VAR_16->rtsx->pci->device;
 VAR_16->adma_mode = 1;
 VAR_16->lun_mc = 0;
 VAR_16->driver_first_load = 1;




 VAR_16->mspro_formatter_enable = 1;
 VAR_16->ignore_sd = 0;
 VAR_16->use_hw_setting = 0;
 VAR_16->lun_mode = VAR_4;
 VAR_16->auto_delink_en = VAR_12;
 VAR_16->ss_en = VAR_14;
 VAR_16->ss_idle_period = VAR_15 * 1000;
 VAR_16->remote_wakeup_en = 0;
 VAR_16->aspm_l0s_l1_en = VAR_11;
 VAR_16->dynamic_aspm = 1;
 VAR_16->fpga_sd_sdr104_clk = VAR_1;
 VAR_16->fpga_sd_ddr50_clk = VAR_0;
 VAR_16->fpga_sd_sdr50_clk = VAR_0;
 VAR_16->fpga_sd_hs_clk = VAR_0;
 VAR_16->fpga_mmc_52m_clk = VAR_3;
 VAR_16->fpga_ms_hg_clk = VAR_3;
 VAR_16->fpga_ms_4bit_clk = VAR_3;
 VAR_16->fpga_ms_1bit_clk = VAR_2;
 VAR_16->asic_sd_sdr104_clk = 203;
 VAR_16->asic_sd_sdr50_clk = 98;
 VAR_16->asic_sd_ddr50_clk = 98;
 VAR_16->asic_sd_hs_clk = 98;
 VAR_16->asic_mmc_52m_clk = 98;
 VAR_16->asic_ms_hg_clk = 117;
 VAR_16->asic_ms_4bit_clk = 78;
 VAR_16->asic_ms_1bit_clk = 39;
 VAR_16->ssc_depth_sd_sdr104 = VAR_8;
 VAR_16->ssc_depth_sd_sdr50 = VAR_8;
 VAR_16->ssc_depth_sd_ddr50 = VAR_7;
 VAR_16->ssc_depth_sd_hs = VAR_7;
 VAR_16->ssc_depth_mmc_52m = VAR_7;
 VAR_16->ssc_depth_ms_hg = VAR_7;
 VAR_16->ssc_depth_ms_4bit = VAR_9;
 VAR_16->ssc_depth_low_speed = VAR_9;
 VAR_16->ssc_en = 1;
 VAR_16->sd_speed_prior = 0x01040203;
 VAR_16->sd_current_prior = 0x00010203;
 VAR_16->sd_ctl = VAR_5 |
         VAR_6 |
         VAR_10;
 VAR_16->sd_ddr_tx_phase = 0;
 VAR_16->mmc_ddr_tx_phase = 1;
 VAR_16->sd_default_tx_phase = 15;
 VAR_16->sd_default_rx_phase = 15;
 VAR_16->pmos_pwr_on_interval = 200;
 VAR_16->sd_voltage_switch_delay = 1000;
 VAR_16->ms_power_class_en = 3;

 VAR_16->sd_400mA_ocp_thd = 1;
 VAR_16->sd_800mA_ocp_thd = 5;
 VAR_16->ms_ocp_thd = 2;

 VAR_16->card_drive_sel = 0x55;
 VAR_16->sd30_drive_sel_1v8 = 0x03;
 VAR_16->sd30_drive_sel_3v3 = 0x01;

 VAR_16->do_delink_before_power_down = 1;
 VAR_16->auto_power_down = 1;
 VAR_16->polling_config = 0;

 VAR_16->force_clkreq_0 = 1;
 VAR_16->ft2_fast_mode = 0;

 VAR_16->sdio_retry_cnt = 1;

 VAR_16->xd_timeout = 2000;
 VAR_16->sd_timeout = 10000;
 VAR_16->ms_timeout = 2000;
 VAR_16->mspro_timeout = 15000;

 VAR_16->power_down_in_ss = 1;

 VAR_16->sdr104_en = 1;
 VAR_16->sdr50_en = 1;
 VAR_16->ddr50_en = 1;

 VAR_16->delink_stage1_step = 100;
 VAR_16->delink_stage2_step = 40;
 VAR_16->delink_stage3_step = 20;

 VAR_16->auto_delink_in_L1 = 1;
 VAR_16->blink_led = 1;
 VAR_16->msi_en = VAR_13;
 VAR_16->hp_watch_bios_hotplug = 0;
 VAR_16->max_payload = 0;
 VAR_16->phy_voltage = 0;

 VAR_16->support_ms_8bit = 1;
 VAR_16->s3_pwr_off_delay = 1000;
}
