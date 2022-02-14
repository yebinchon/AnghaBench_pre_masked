
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_pci_sdmmc {struct mmc_host* mmc; } ;
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
 int FUNC_0 (struct realtek_pci_sdmmc*) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_1(struct realtek_pci_sdmmc *VAR_13)
{
 struct mmc_host *VAR_14 = VAR_13->mmc;

 VAR_14->f_min = 250000;
 VAR_14->f_max = 208000000;
 VAR_14->ocr_avail = VAR_10 | VAR_11 | VAR_9;
 VAR_14->caps = VAR_2 | VAR_6 |
  VAR_5 | VAR_3 |
  VAR_7 | VAR_8 | VAR_4;
 VAR_14->caps2 = VAR_1 | VAR_0;
 VAR_14->max_current_330 = 400;
 VAR_14->max_current_180 = 800;
 VAR_14->ops = &VAR_12;

 FUNC_0(VAR_13);

 VAR_14->max_segs = 256;
 VAR_14->max_seg_size = 65536;
 VAR_14->max_blk_size = 512;
 VAR_14->max_blk_count = 65535;
 VAR_14->max_req_size = 524288;
}
