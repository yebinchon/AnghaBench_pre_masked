
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_omap_slot {int id; TYPE_2__* pdata; int cover_tasklet; int cover_timer; int power_mode; struct mmc_host* mmc; struct mmc_omap_host* host; } ;
struct mmc_omap_host {TYPE_1__* pdata; struct mmc_omap_slot** slots; int dev; } ;
struct mmc_host {int caps; int f_min; int f_max; int max_segs; int max_blk_size; int max_blk_count; int max_req_size; int max_seg_size; int class_dev; int ocr_avail; int * ops; } ;
struct TYPE_4__ {int wires; int * name; int * get_cover_state; int ocr_mask; } ;
struct TYPE_3__ {scalar_t__ max_freq; TYPE_2__* slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct mmc_host*) ;
 struct mmc_host* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mmc_host*) ;
 scalar_t__ FUNC_6 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mmc_omap_slot* FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int *,int ,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct mmc_omap_host *VAR_9, int VAR_10)
{
 struct mmc_omap_slot *VAR_11 = ((void*)0);
 struct mmc_host *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(sizeof(struct mmc_omap_slot), VAR_9->dev);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_12);
 VAR_11->host = VAR_9;
 VAR_11->mmc = VAR_12;
 VAR_11->id = VAR_10;
 VAR_11->power_mode = VAR_3;
 VAR_11->pdata = &VAR_9->pdata->slots[VAR_10];

 VAR_9->slots[VAR_10] = VAR_11;

 VAR_12->caps = 0;
 if (VAR_9->pdata->slots[VAR_10].wires >= 4)
  VAR_12->caps |= VAR_1 | VAR_2;

 VAR_12->ops = &VAR_8;
 VAR_12->f_min = 400000;

 if (FUNC_6())
  VAR_12->f_max = 48000000;
 else
  VAR_12->f_max = 24000000;
 if (VAR_9->pdata->max_freq)
  VAR_12->f_max = FUNC_2(VAR_9->pdata->max_freq, VAR_12->f_max);
 VAR_12->ocr_avail = VAR_11->pdata->ocr_mask;





 VAR_12->max_segs = 32;
 VAR_12->max_blk_size = 2048;
 VAR_12->max_blk_count = 2048;
 VAR_12->max_req_size = VAR_12->max_blk_size * VAR_12->max_blk_count;
 VAR_12->max_seg_size = VAR_12->max_req_size;

 if (VAR_11->pdata->get_cover_state != ((void*)0)) {
  FUNC_11(&VAR_11->cover_timer, VAR_7, 0);
  FUNC_9(&VAR_11->cover_tasklet, VAR_6,
        (unsigned long)VAR_11);
 }

 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13 < 0)
  goto err_remove_host;

 if (VAR_11->pdata->name != ((void*)0)) {
  VAR_13 = FUNC_0(&VAR_12->class_dev,
     &VAR_5);
  if (VAR_13 < 0)
   goto err_remove_host;
 }

 if (VAR_11->pdata->get_cover_state != ((void*)0)) {
  VAR_13 = FUNC_0(&VAR_12->class_dev,
     &VAR_4);
  if (VAR_13 < 0)
   goto err_remove_slot_name;
  FUNC_10(&VAR_11->cover_tasklet);
 }

 return 0;

err_remove_slot_name:
 if (VAR_11->pdata->name != ((void*)0))
  FUNC_1(&VAR_12->class_dev, &VAR_5);
err_remove_host:
 FUNC_8(VAR_12);
 FUNC_5(VAR_12);
 return VAR_13;
}
