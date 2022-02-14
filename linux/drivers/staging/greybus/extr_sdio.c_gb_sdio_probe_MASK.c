
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int max_segs; int max_blk_count; int max_req_size; int max_blk_size; int max_seg_size; int * ops; } ;
struct gbphy_device_id {int dummy; } ;
struct gbphy_device {int dev; TYPE_1__* cport_desc; int bundle; } ;
struct gb_sdio_host {int removed; int mrq_workqueue; scalar_t__ queued_events; int mrqwork; int xfer; int lock; struct mmc_host* mmc; struct gbphy_device* gbphy_dev; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_sdio_host*,scalar_t__) ;
 int FUNC_4 (char*,int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct gb_connection* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct gb_connection*) ;
 int FUNC_9 (struct gb_connection*) ;
 int FUNC_10 (struct gb_connection*) ;
 int FUNC_11 (struct gb_connection*) ;
 int FUNC_12 (struct gb_connection*,struct gb_sdio_host*) ;
 int FUNC_13 (struct gbphy_device*,struct gb_sdio_host*) ;
 int FUNC_14 (struct gb_sdio_host*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_15 (struct gbphy_device*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct mmc_host*) ;
 struct mmc_host* FUNC_18 (int,int *) ;
 int FUNC_19 (struct mmc_host*) ;
 struct gb_sdio_host* FUNC_20 (struct mmc_host*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct gbphy_device *VAR_4,
    const struct gbphy_device_id *VAR_5)
{
 struct gb_connection *VAR_6;
 struct mmc_host *VAR_7;
 struct gb_sdio_host *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_18(sizeof(*VAR_8), &VAR_4->dev);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_4->bundle,
       FUNC_16(VAR_4->cport_desc->id),
       VAR_3);
 if (FUNC_1(VAR_6)) {
  VAR_9 = FUNC_2(VAR_6);
  goto exit_mmc_free;
 }

 VAR_8 = FUNC_20(VAR_7);
 VAR_8->mmc = VAR_7;
 VAR_8->removed = 1;

 VAR_8->connection = VAR_6;
 FUNC_12(VAR_6, VAR_8);
 VAR_8->gbphy_dev = VAR_4;
 FUNC_13(VAR_4, VAR_8);

 VAR_9 = FUNC_11(VAR_6);
 if (VAR_9)
  goto exit_connection_destroy;

 VAR_9 = FUNC_14(VAR_8);
 if (VAR_9 < 0)
  goto exit_connection_disable;

 VAR_7->ops = &VAR_2;

 VAR_7->max_segs = VAR_8->mmc->max_blk_count;


 VAR_7->max_req_size = VAR_7->max_blk_size * VAR_7->max_blk_count;
 VAR_7->max_seg_size = VAR_7->max_req_size;

 FUNC_21(&VAR_8->lock);
 FUNC_22(&VAR_8->xfer);
 VAR_8->mrq_workqueue = FUNC_4("mmc-%s", 0, 1,
           FUNC_6(&VAR_4->dev));
 if (!VAR_8->mrq_workqueue) {
  VAR_9 = -VAR_0;
  goto exit_connection_disable;
 }
 FUNC_0(&VAR_8->mrqwork, VAR_1);

 VAR_9 = FUNC_10(VAR_6);
 if (VAR_9)
  goto exit_wq_destroy;

 VAR_9 = FUNC_17(VAR_7);
 if (VAR_9 < 0)
  goto exit_wq_destroy;
 VAR_8->removed = 0;
 VAR_9 = FUNC_3(VAR_8, VAR_8->queued_events);
 VAR_8->queued_events = 0;

 FUNC_15(VAR_4);

 return VAR_9;

exit_wq_destroy:
 FUNC_5(VAR_8->mrq_workqueue);
exit_connection_disable:
 FUNC_9(VAR_6);
exit_connection_destroy:
 FUNC_8(VAR_6);
exit_mmc_free:
 FUNC_19(VAR_7);

 return VAR_9;
}
