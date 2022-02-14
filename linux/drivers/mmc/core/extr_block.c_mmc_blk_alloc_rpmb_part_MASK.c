
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_9__ {char* init_name; int release; int * parent; int devt; int * bus; } ;
struct TYPE_10__ {int owner; } ;
struct mmc_rpmb_data {int id; unsigned int part_index; TYPE_2__ dev; int node; TYPE_5__ chrdev; struct mmc_blk_data* md; } ;
struct mmc_card {int dev; TYPE_1__* host; } ;
struct mmc_blk_data {int rpmbs; } ;
typedef scalar_t__ sector_t ;
typedef int rpmb_name ;
typedef int cap_str ;
struct TYPE_8__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_2__*,struct mmc_rpmb_data*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int) ;
 struct mmc_rpmb_data* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct mmc_card*) ;
 int FUNC_11 (struct mmc_card*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*,int ,int ,int ,char*,int ,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (char*,int,char*,int,char const*) ;
 int FUNC_16 (int ,int,int ,char*,int) ;

__attribute__((used)) static int FUNC_17(struct mmc_card *VAR_12,
       struct mmc_blk_data *VAR_13,
       unsigned int VAR_14,
       sector_t VAR_15,
       const char *VAR_16)
{
 int VAR_17, VAR_18;
 char VAR_19[VAR_0];
 char VAR_20[10];
 struct mmc_rpmb_data *VAR_21;


 VAR_17 = FUNC_6(&VAR_11, 0, VAR_6, VAR_3);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_21 = FUNC_8(sizeof(*VAR_21), VAR_3);
 if (!VAR_21) {
  FUNC_7(&VAR_11, VAR_17);
  return -VAR_1;
 }

 FUNC_15(VAR_19, sizeof(VAR_19),
   "mmcblk%u%s", VAR_12->host->index, VAR_16 ? VAR_16 : "");

 VAR_21->id = VAR_17;
 VAR_21->part_index = VAR_14;
 VAR_21->dev.init_name = VAR_19;
 VAR_21->dev.bus = &VAR_8;
 VAR_21->dev.devt = FUNC_1(FUNC_0(VAR_9), VAR_21->id);
 VAR_21->dev.parent = &VAR_12->dev;
 VAR_21->dev.release = VAR_7;
 FUNC_5(&VAR_21->dev);
 FUNC_4(&VAR_21->dev, VAR_21);
 VAR_21->md = VAR_13;

 FUNC_3(&VAR_21->chrdev, &VAR_10);
 VAR_21->chrdev.owner = VAR_5;
 VAR_18 = FUNC_2(&VAR_21->chrdev, &VAR_21->dev);
 if (VAR_18) {
  FUNC_12("%s: could not add character device\n", VAR_19);
  goto out_put_device;
 }

 FUNC_9(&VAR_21->node, &VAR_13->rpmbs);

 FUNC_16((u64)VAR_15, 512, VAR_4,
   VAR_20, sizeof(VAR_20));

 FUNC_13("%s: %s %s partition %u %s, chardev (%d:%d)\n",
  VAR_19, FUNC_10(VAR_12),
  FUNC_11(VAR_12), VAR_2, VAR_20,
  FUNC_0(VAR_9), VAR_21->id);

 return 0;

out_put_device:
 FUNC_14(&VAR_21->dev);
 return VAR_18;
}
