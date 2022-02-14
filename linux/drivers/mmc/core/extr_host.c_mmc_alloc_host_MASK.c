
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int power_delay_ms; } ;
struct TYPE_7__ {int * class; struct device* parent; } ;
struct mmc_host {int rescan_disable; int index; int max_segs; int max_seg_size; int max_req_size; int max_blk_size; int max_blk_count; TYPE_1__ ios; int fixed_drv_type; int retune_timer; int sdio_irq_work; int detect; int wq; int lock; TYPE_2__ class_dev; struct device* parent; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mmc_host*) ;
 struct mmc_host* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (struct mmc_host*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;

struct mmc_host *FUNC_12(int VAR_8, struct device *VAR_9)
{
 int VAR_10;
 struct mmc_host *VAR_11;

 VAR_11 = FUNC_7(sizeof(struct mmc_host) + VAR_8, VAR_1);
 if (!VAR_11)
  return ((void*)0);


 VAR_11->rescan_disable = 1;

 VAR_10 = FUNC_4(&VAR_4, 0, 0, VAR_1);
 if (VAR_10 < 0) {
  FUNC_6(VAR_11);
  return ((void*)0);
 }

 VAR_11->index = VAR_10;

 FUNC_1(&VAR_11->class_dev, "mmc%d", VAR_11->index);

 VAR_11->parent = VAR_9;
 VAR_11->class_dev.parent = VAR_9;
 VAR_11->class_dev.class = &VAR_3;
 FUNC_3(&VAR_11->class_dev);
 FUNC_2(&VAR_11->class_dev);

 if (FUNC_8(VAR_11)) {
  FUNC_9(&VAR_11->class_dev);
  return ((void*)0);
 }

 FUNC_10(&VAR_11->lock);
 FUNC_5(&VAR_11->wq);
 FUNC_0(&VAR_11->detect, VAR_5);
 FUNC_0(&VAR_11->sdio_irq_work, VAR_7);
 FUNC_11(&VAR_11->retune_timer, VAR_6, 0);





 VAR_11->max_segs = 1;
 VAR_11->max_seg_size = VAR_2;

 VAR_11->max_req_size = VAR_2;
 VAR_11->max_blk_size = 512;
 VAR_11->max_blk_count = VAR_2 / 512;

 VAR_11->fixed_drv_type = -VAR_0;
 VAR_11->ios.power_delay_ms = 10;

 return VAR_11;
}
