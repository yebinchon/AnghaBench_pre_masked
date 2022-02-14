
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps; int max_blk_count; int max_req_size; int max_blk_size; int max_seg_size; int max_segs; int * ops; int caps2; int ocr_avail; int f_max; int f_min; } ;
struct alcor_sdmmc_host {int dev; } ;


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
 int FUNC_0 (int ,int ) ;
 struct mmc_host* FUNC_1 (struct alcor_sdmmc_host*) ;

__attribute__((used)) static void FUNC_2(struct alcor_sdmmc_host *VAR_14)
{
 struct mmc_host *VAR_15 = FUNC_1(VAR_14);

 VAR_15->f_min = VAR_3;
 VAR_15->f_max = VAR_0;
 VAR_15->ocr_avail = VAR_12;
 VAR_15->caps = VAR_5 | VAR_6
  | VAR_9 | VAR_10 | VAR_11
  | VAR_8 | VAR_7;
 VAR_15->caps2 = VAR_4;
 VAR_15->ops = &VAR_13;
 VAR_15->max_segs = VAR_2;
 VAR_15->max_seg_size = VAR_1;
 VAR_15->max_blk_count = 240;
 VAR_15->max_req_size = VAR_15->max_blk_count * VAR_15->max_blk_size;
 FUNC_0(VAR_14->dev, VAR_15->max_seg_size);
}
