
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct reada_zone {scalar_t__ elems; int refcnt; int lock; struct btrfs_device* device; } ;
struct btrfs_key {int dummy; } ;
struct reada_extent {int refcnt; int nzones; struct reada_zone** zones; int lock; int extctl; struct btrfs_key top; scalar_t__ logical; } ;
struct TYPE_4__ {int rwsem; struct btrfs_device* tgtdev; } ;
struct btrfs_fs_info {scalar_t__ nodesize; int reada_lock; TYPE_2__ dev_replace; int reada_tree; } ;
struct btrfs_device {int reada_extents; int bdev; } ;
struct btrfs_bio {scalar_t__ num_stripes; int num_tgtdevs; TYPE_1__* stripes; } ;
struct TYPE_3__ {struct btrfs_device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,scalar_t__) ;
 int FUNC_4 (struct btrfs_fs_info*,int ,scalar_t__,scalar_t__*,struct btrfs_bio**,int ) ;
 int FUNC_5 (struct btrfs_bio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct reada_extent*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 struct reada_extent* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long,struct reada_extent*) ;
 struct reada_extent* FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 struct reada_zone* FUNC_16 (struct btrfs_device*,scalar_t__,struct btrfs_bio*) ;
 int VAR_5 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static struct reada_extent *FUNC_21(struct btrfs_fs_info *VAR_6,
           u64 VAR_7,
           struct btrfs_key *VAR_8)
{
 int VAR_9;
 struct reada_extent *VAR_10 = ((void*)0);
 struct reada_extent *VAR_11 = ((void*)0);
 struct btrfs_bio *VAR_12 = ((void*)0);
 struct btrfs_device *VAR_13;
 struct btrfs_device *VAR_14;
 u64 VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 unsigned long VAR_18 = VAR_7 >> VAR_4;
 int VAR_19;
 int VAR_20 = 0;

 FUNC_17(&VAR_6->reada_lock);
 VAR_10 = FUNC_13(&VAR_6->reada_tree, VAR_18);
 if (VAR_10)
  VAR_10->refcnt++;
 FUNC_19(&VAR_6->reada_lock);

 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return ((void*)0);

 VAR_10->logical = VAR_7;
 VAR_10->top = *VAR_8;
 FUNC_1(&VAR_10->extctl);
 FUNC_18(&VAR_10->lock);
 VAR_10->refcnt = 1;




 VAR_15 = VAR_6->nodesize;
 VAR_9 = FUNC_4(VAR_6, VAR_0, VAR_7,
   &VAR_15, &VAR_12, 0);
 if (VAR_9 || !VAR_12 || VAR_15 < VAR_6->nodesize)
  goto error;

 if (VAR_12->num_stripes > VAR_1) {
  FUNC_3(VAR_6,
      "readahead: more than %d copies not supported",
      VAR_1);
  goto error;
 }

 VAR_16 = VAR_12->num_stripes - VAR_12->num_tgtdevs;
 for (VAR_17 = 0; VAR_17 < VAR_16; ++VAR_17) {
  struct reada_zone *VAR_21;

  VAR_13 = VAR_12->stripes[VAR_17].dev;


  if (!VAR_13->bdev)
   continue;

  VAR_21 = FUNC_16(VAR_13, VAR_7, VAR_12);
  if (!VAR_21)
   continue;

  VAR_10->zones[VAR_10->nzones++] = VAR_21;
  FUNC_17(&VAR_21->lock);
  if (!VAR_21->elems)
   FUNC_8(&VAR_21->refcnt);
  ++VAR_21->elems;
  FUNC_19(&VAR_21->lock);
  FUNC_17(&VAR_6->reada_lock);
  FUNC_9(&VAR_21->refcnt, VAR_5);
  FUNC_19(&VAR_6->reada_lock);
 }
 if (VAR_10->nzones == 0) {

  goto error;
 }


 FUNC_6(&VAR_6->dev_replace.rwsem);
 VAR_9 = FUNC_14(VAR_3);
 if (VAR_9) {
  FUNC_20(&VAR_6->dev_replace.rwsem);
  goto error;
 }

 FUNC_17(&VAR_6->reada_lock);
 VAR_9 = FUNC_12(&VAR_6->reada_tree, VAR_18, VAR_10);
 if (VAR_9 == -VAR_2) {
  VAR_11 = FUNC_13(&VAR_6->reada_tree, VAR_18);
  VAR_11->refcnt++;
  FUNC_19(&VAR_6->reada_lock);
  FUNC_15();
  FUNC_20(&VAR_6->dev_replace.rwsem);
  goto error;
 }
 if (VAR_9) {
  FUNC_19(&VAR_6->reada_lock);
  FUNC_15();
  FUNC_20(&VAR_6->dev_replace.rwsem);
  goto error;
 }
 FUNC_15();
 VAR_14 = ((void*)0);
 VAR_19 = FUNC_2(
   &VAR_6->dev_replace);
 for (VAR_17 = 0; VAR_17 < VAR_10->nzones; ++VAR_17) {
  VAR_13 = VAR_10->zones[VAR_17]->device;

  if (VAR_13 == VAR_14) {







   continue;
  }
  if (!VAR_13->bdev)
   continue;

  if (VAR_19 &&
      VAR_13 == VAR_6->dev_replace.tgtdev) {




   continue;
  }
  VAR_14 = VAR_13;
  VAR_9 = FUNC_12(&VAR_13->reada_extents, VAR_18, VAR_10);
  if (VAR_9) {
   while (--VAR_17 >= 0) {
    VAR_13 = VAR_10->zones[VAR_17]->device;
    FUNC_0(VAR_13 == ((void*)0));

    FUNC_11(&VAR_13->reada_extents, VAR_18);
   }
   FUNC_11(&VAR_6->reada_tree, VAR_18);
   FUNC_19(&VAR_6->reada_lock);
   FUNC_20(&VAR_6->dev_replace.rwsem);
   goto error;
  }
  VAR_20 = 1;
 }
 FUNC_19(&VAR_6->reada_lock);
 FUNC_20(&VAR_6->dev_replace.rwsem);

 if (!VAR_20)
  goto error;

 FUNC_5(VAR_12);
 return VAR_10;

error:
 for (VAR_17 = 0; VAR_17 < VAR_10->nzones; ++VAR_17) {
  struct reada_zone *VAR_22;

  VAR_22 = VAR_10->zones[VAR_17];
  FUNC_8(&VAR_22->refcnt);
  FUNC_17(&VAR_22->lock);
  --VAR_22->elems;
  if (VAR_22->elems == 0) {




   FUNC_9(&VAR_22->refcnt, VAR_5);
  }
  FUNC_19(&VAR_22->lock);

  FUNC_17(&VAR_6->reada_lock);
  FUNC_9(&VAR_22->refcnt, VAR_5);
  FUNC_19(&VAR_6->reada_lock);
 }
 FUNC_5(VAR_12);
 FUNC_7(VAR_10);
 return VAR_11;
}
