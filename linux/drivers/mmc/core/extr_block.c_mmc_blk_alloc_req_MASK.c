
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int rel_param; scalar_t__ rel_sectors; } ;
struct TYPE_13__ {int cmds; } ;
struct TYPE_12__ {scalar_t__ mmca_vsn; } ;
struct mmc_card {TYPE_3__ ext_csd; TYPE_2__ scr; TYPE_1__ csd; TYPE_8__* host; } ;
struct TYPE_16__ {int queue; struct mmc_blk_data* blkdata; } ;
struct mmc_blk_data {int area_type; int usage; int flags; TYPE_4__* disk; TYPE_7__ queue; scalar_t__ read_only; struct device* parent; int rpmbs; int part; } ;
struct device {int dummy; } ;
typedef int sector_t ;
struct TYPE_17__ {int index; } ;
struct TYPE_15__ {int first_minor; int flags; int disk_name; int queue; struct mmc_blk_data* private_data; int * fops; int major; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mmc_blk_data* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct mmc_blk_data*) ;
 struct mmc_blk_data* FUNC_9 (int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_10 (struct mmc_card*) ;
 scalar_t__ FUNC_11 (struct mmc_card*) ;
 scalar_t__ FUNC_12 (struct mmc_card*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_8__*) ;
 scalar_t__ FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (TYPE_7__*,struct mmc_card*) ;
 int VAR_18 ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (TYPE_4__*,int) ;
 int FUNC_20 (int ,int,char*,int,char const*) ;

__attribute__((used)) static struct mmc_blk_data *FUNC_21(struct mmc_card *VAR_19,
           struct device *VAR_20,
           sector_t VAR_21,
           bool VAR_22,
           const char *VAR_23,
           int VAR_24)
{
 struct mmc_blk_data *VAR_25;
 int VAR_26, VAR_27;

 VAR_26 = FUNC_6(&VAR_17, 0, VAR_15, VAR_8);
 if (VAR_26 < 0) {







  if (VAR_26 == -VAR_3)
   FUNC_5(FUNC_14(VAR_19->host),
    "no more device IDs available\n");

  return FUNC_0(VAR_26);
 }

 VAR_25 = FUNC_9(sizeof(struct mmc_blk_data), VAR_8);
 if (!VAR_25) {
  VAR_27 = -VAR_2;
  goto out;
 }

 VAR_25->area_type = VAR_24;





 VAR_25->read_only = FUNC_10(VAR_19);

 VAR_25->disk = FUNC_2(VAR_18);
 if (VAR_25->disk == ((void*)0)) {
  VAR_27 = -VAR_2;
  goto err_kfree;
 }

 FUNC_1(&VAR_25->part);
 FUNC_1(&VAR_25->rpmbs);
 VAR_25->usage = 1;

 VAR_27 = FUNC_16(&VAR_25->queue, VAR_19);
 if (VAR_27)
  goto err_putdisk;

 VAR_25->queue.blkdata = VAR_25;







 if (!FUNC_3(VAR_25->queue.queue)) {
  FUNC_13(&VAR_25->queue);
  VAR_27 = -VAR_1;
  goto err_putdisk;
 }

 VAR_25->disk->major = VAR_13;
 VAR_25->disk->first_minor = VAR_26 * VAR_18;
 VAR_25->disk->fops = &VAR_16;
 VAR_25->disk->private_data = VAR_25;
 VAR_25->disk->queue = VAR_25->queue.queue;
 VAR_25->parent = VAR_20;
 FUNC_19(VAR_25->disk, VAR_25->read_only || VAR_22);
 VAR_25->disk->flags = VAR_5;
 if (VAR_24 & (VAR_11 | VAR_10))
  VAR_25->disk->flags |= VAR_6
       | VAR_7;
 FUNC_20(VAR_25->disk->disk_name, sizeof(VAR_25->disk->disk_name),
   "mmcblk%u%s", VAR_19->host->index, VAR_23 ? VAR_23 : "");

 FUNC_18(VAR_25->disk, VAR_21);

 if (FUNC_15(VAR_19->host)) {
  if ((FUNC_11(VAR_19) &&
       VAR_19->csd.mmca_vsn >= VAR_0) ||
      (FUNC_12(VAR_19) &&
       VAR_19->scr.cmds & VAR_14))
   VAR_25->flags |= VAR_9;
 }

 if (FUNC_11(VAR_19) &&
     VAR_25->flags & VAR_9 &&
     ((VAR_19->ext_csd.rel_param & VAR_4) ||
      VAR_19->ext_csd.rel_sectors)) {
  VAR_25->flags |= VAR_12;
  FUNC_4(VAR_25->queue.queue, 1, 1);
 }

 return VAR_25;

 err_putdisk:
 FUNC_17(VAR_25->disk);
 err_kfree:
 FUNC_8(VAR_25);
 out:
 FUNC_7(&VAR_17, VAR_26);
 return FUNC_0(VAR_27);
}
