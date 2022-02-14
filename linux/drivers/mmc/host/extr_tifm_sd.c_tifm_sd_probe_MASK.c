
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_sd {int timer; int finish_tasklet; int timeout_jiffies; struct tifm_dev* dev; } ;
struct tifm_dev {int data_event; int card_event; int dev; scalar_t__ addr; } ;
struct mmc_host {int ocr_avail; int f_min; int f_max; int max_blk_count; int max_segs; int max_blk_size; int max_seg_size; int max_req_size; int caps; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 struct mmc_host* FUNC_3 (int,int *) ;
 int FUNC_4 (struct mmc_host*) ;
 struct tifm_sd* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ,unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct tifm_sd*) ;
 int VAR_13 ;
 int FUNC_11 (struct tifm_dev*,struct mmc_host*) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct tifm_dev *VAR_14)
{
 struct mmc_host *VAR_15;
 struct tifm_sd *VAR_16;
 int VAR_17 = -VAR_0;

 if (!(VAR_8
       & FUNC_8(VAR_14->addr + VAR_6))) {
  FUNC_7("%s : card gone, unexpectedly\n",
   FUNC_0(&VAR_14->dev));
  return VAR_17;
 }

 VAR_15 = FUNC_3(sizeof(struct tifm_sd), &VAR_14->dev);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_5(VAR_15);
 FUNC_11(VAR_14, VAR_15);
 VAR_16->dev = VAR_14;
 VAR_16->timeout_jiffies = FUNC_6(1000);

 FUNC_9(&VAR_16->finish_tasklet, VAR_12,
       (unsigned long)VAR_16);
 FUNC_12(&VAR_16->timer, VAR_9, 0);

 VAR_15->ops = &VAR_13;
 VAR_15->ocr_avail = VAR_3 | VAR_4;
 VAR_15->caps = VAR_2;
 VAR_15->f_min = 20000000 / 60;
 VAR_15->f_max = 24000000;

 VAR_15->max_blk_count = 2048;
 VAR_15->max_segs = VAR_15->max_blk_count;
 VAR_15->max_blk_size = FUNC_1(VAR_7, VAR_5);
 VAR_15->max_seg_size = VAR_15->max_blk_count * VAR_15->max_blk_size;
 VAR_15->max_req_size = VAR_15->max_seg_size;

 VAR_14->card_event = VAR_10;
 VAR_14->data_event = VAR_11;
 VAR_17 = FUNC_10(VAR_16);

 if (!VAR_17)
  VAR_17 = FUNC_2(VAR_15);
 if (!VAR_17)
  return 0;

 FUNC_4(VAR_15);
 return VAR_17;
}
