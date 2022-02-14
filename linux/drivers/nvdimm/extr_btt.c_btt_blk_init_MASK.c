
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u64 ;
struct nd_namespace_common {int dummy; } ;
struct nd_btt {int size; int dev; struct nd_namespace_common* ndns; } ;
struct btt {int sector_size; int nlba; TYPE_2__* btt_disk; struct nd_btt* nd_btt; TYPE_8__* btt_queue; } ;
struct TYPE_17__ {struct btt* queuedata; TYPE_1__* backing_dev_info; } ;
struct TYPE_16__ {TYPE_8__* queue; int flags; struct btt* private_data; int * fops; scalar_t__ first_minor; int disk_name; } ;
struct TYPE_15__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_8__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*,int) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (TYPE_8__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct btt*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 int FUNC_11 (struct nd_namespace_common*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_15(struct btt *VAR_8)
{
 struct nd_btt *VAR_9 = VAR_8->nd_btt;
 struct nd_namespace_common *VAR_10 = VAR_9->ndns;


 VAR_8->btt_queue = FUNC_1(VAR_3);
 if (!VAR_8->btt_queue)
  return -VAR_1;

 VAR_8->btt_disk = FUNC_0(0);
 if (!VAR_8->btt_disk) {
  FUNC_2(VAR_8->btt_queue);
  return -VAR_1;
 }

 FUNC_11(VAR_10, VAR_8->btt_disk->disk_name);
 VAR_8->btt_disk->first_minor = 0;
 VAR_8->btt_disk->fops = &VAR_6;
 VAR_8->btt_disk->private_data = VAR_8;
 VAR_8->btt_disk->queue = VAR_8->btt_queue;
 VAR_8->btt_disk->flags = VAR_2;
 VAR_8->btt_disk->queue->backing_dev_info->capabilities |=
   VAR_0;

 FUNC_5(VAR_8->btt_queue, VAR_7);
 FUNC_4(VAR_8->btt_queue, VAR_8->sector_size);
 FUNC_6(VAR_8->btt_queue, VAR_5);
 FUNC_3(VAR_4, VAR_8->btt_queue);
 VAR_8->btt_queue->queuedata = VAR_8;

 if (FUNC_7(VAR_8)) {
  int VAR_11 = FUNC_10(VAR_8->btt_disk, FUNC_7(VAR_8));

  if (VAR_11) {
   FUNC_8(VAR_8->btt_disk);
   FUNC_12(VAR_8->btt_disk);
   FUNC_2(VAR_8->btt_queue);
   return VAR_11;
  }
 }
 FUNC_14(VAR_8->btt_disk, VAR_8->nlba * VAR_8->sector_size >> 9);
 FUNC_9(&VAR_8->nd_btt->dev, VAR_8->btt_disk, ((void*)0));
 VAR_8->nd_btt->size = VAR_8->nlba * (u64)VAR_8->sector_size;
 FUNC_13(VAR_8->btt_disk);

 return 0;
}
