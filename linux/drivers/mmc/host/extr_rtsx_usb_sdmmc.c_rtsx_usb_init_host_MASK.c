
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_usb_sdmmc {int power_mode; struct mmc_host* mmc; } ;
struct mmc_host {int f_min; int f_max; int ocr_avail; int caps; int caps2; int max_current_330; int max_current_180; int max_segs; int max_seg_size; int max_blk_size; int max_blk_count; int max_req_size; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_16 ;

__attribute__((used)) static void FUNC_0(struct rtsx_usb_sdmmc *VAR_17)
{
 struct mmc_host *VAR_18 = VAR_17->mmc;

 VAR_18->f_min = 250000;
 VAR_18->f_max = 208000000;
 VAR_18->ocr_avail = VAR_14 | VAR_15 | VAR_13;
 VAR_18->caps = VAR_3 | VAR_7 |
  VAR_6 | VAR_4 |
  VAR_9 | VAR_10 | VAR_11 |
  VAR_5 | VAR_8;
 VAR_18->caps2 = VAR_1 | VAR_0 |
  VAR_2;

 VAR_18->max_current_330 = 400;
 VAR_18->max_current_180 = 800;
 VAR_18->ops = &VAR_16;
 VAR_18->max_segs = 256;
 VAR_18->max_seg_size = 65536;
 VAR_18->max_blk_size = 512;
 VAR_18->max_blk_count = 65535;
 VAR_18->max_req_size = 524288;

 VAR_17->power_mode = VAR_12;
}
