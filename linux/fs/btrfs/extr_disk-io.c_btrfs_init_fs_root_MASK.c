
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_subvolume_writers {int dummy; } ;
struct btrfs_root {scalar_t__ highest_objectid; int objectid_mutex; int anon_dev; int ino_cache_wait; int ino_cache_lock; struct btrfs_subvolume_writers* subv_writers; void* free_ino_ctl; void* free_ino_pinned; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct btrfs_subvolume_writers*) ;
 int FUNC_2 (struct btrfs_subvolume_writers*) ;
 struct btrfs_subvolume_writers* FUNC_3 () ;
 int FUNC_4 (struct btrfs_root*,scalar_t__*) ;
 int FUNC_5 (struct btrfs_root*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct btrfs_root *VAR_3)
{
 int VAR_4;
 struct btrfs_subvolume_writers *VAR_5;

 VAR_3->free_ino_ctl = FUNC_8(sizeof(*VAR_3->free_ino_ctl), VAR_2);
 VAR_3->free_ino_pinned = FUNC_8(sizeof(*VAR_3->free_ino_pinned),
     VAR_2);
 if (!VAR_3->free_ino_pinned || !VAR_3->free_ino_ctl) {
  VAR_4 = -VAR_1;
  goto fail;
 }

 VAR_5 = FUNC_3();
 if (FUNC_1(VAR_5)) {
  VAR_4 = FUNC_2(VAR_5);
  goto fail;
 }
 VAR_3->subv_writers = VAR_5;

 FUNC_5(VAR_3);
 FUNC_11(&VAR_3->ino_cache_lock);
 FUNC_7(&VAR_3->ino_cache_wait);

 VAR_4 = FUNC_6(&VAR_3->anon_dev);
 if (VAR_4)
  goto fail;

 FUNC_9(&VAR_3->objectid_mutex);
 VAR_4 = FUNC_4(VAR_3,
     &VAR_3->highest_objectid);
 if (VAR_4) {
  FUNC_10(&VAR_3->objectid_mutex);
  goto fail;
 }

 FUNC_0(VAR_3->highest_objectid <= VAR_0);

 FUNC_10(&VAR_3->objectid_mutex);

 return 0;
fail:

 return VAR_4;
}
