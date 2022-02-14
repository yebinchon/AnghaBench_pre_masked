
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct TYPE_3__ {int objectid; } ;
struct btrfs_root {int root_item_lock; int dedupe_in_progress; scalar_t__ send_in_progress; TYPE_1__ root_key; int fs_info; } ;
struct TYPE_4__ {struct btrfs_root* root; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__,struct inode*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, u64 VAR_3, u64 VAR_4,
        struct inode *VAR_5, u64 VAR_6)
{
 int VAR_7;
 u64 VAR_8, VAR_9, VAR_10;
 struct btrfs_root *VAR_11 = FUNC_0(VAR_5)->root;

 FUNC_4(&VAR_11->root_item_lock);
 if (VAR_11->send_in_progress) {
  FUNC_2(VAR_11->fs_info,
"cannot deduplicate to root %llu while send operations are using it (%d in progress)",
         VAR_11->root_key.objectid,
         VAR_11->send_in_progress);
  FUNC_5(&VAR_11->root_item_lock);
  return -VAR_1;
 }
 VAR_11->dedupe_in_progress++;
 FUNC_5(&VAR_11->root_item_lock);

 VAR_9 = VAR_4 % VAR_0;
 VAR_10 = FUNC_3(VAR_4, VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_0,
           VAR_5, VAR_6);
  if (VAR_7)
   goto out;

  VAR_3 += VAR_0;
  VAR_6 += VAR_0;
 }

 if (VAR_9 > 0)
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_9, VAR_5,
           VAR_6);
out:
 FUNC_4(&VAR_11->root_item_lock);
 VAR_11->dedupe_in_progress--;
 FUNC_5(&VAR_11->root_item_lock);

 return VAR_7;
}
