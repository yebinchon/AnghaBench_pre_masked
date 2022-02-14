
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ulist_node {int aux; int val; } ;
struct ulist_iterator {int dummy; } ;
struct inode {int dummy; } ;
struct extent_changeset {scalar_t__ bytes_changed; int range_changed; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; TYPE_2__* fs_info; } ;
struct TYPE_6__ {int io_tree; struct btrfs_root* root; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ulist_iterator*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int *) ;
 struct extent_changeset* FUNC_5 () ;
 int FUNC_6 (struct extent_changeset*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct btrfs_root*,scalar_t__,int,int ) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,int ,struct extent_changeset*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct inode*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct ulist_node* FUNC_12 (int *,struct ulist_iterator*) ;

int FUNC_13(struct inode *VAR_6,
   struct extent_changeset **VAR_7, u64 VAR_8,
   u64 VAR_9)
{
 struct btrfs_root *VAR_10 = FUNC_0(VAR_6)->root;
 struct ulist_node *VAR_11;
 struct ulist_iterator VAR_12;
 struct extent_changeset *VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 int VAR_16;

 if (!FUNC_10(VAR_0, &VAR_10->fs_info->flags) ||
     !FUNC_7(VAR_10->root_key.objectid) || VAR_9 == 0)
  return 0;


 if (FUNC_2(!VAR_7))
  return -VAR_2;
 if (!*VAR_7) {
  *VAR_7 = FUNC_5();
  if (!*VAR_7)
   return -VAR_3;
 }
 VAR_13 = *VAR_7;

 VAR_14 = VAR_13->bytes_changed;
 VAR_16 = FUNC_9(&FUNC_0(VAR_6)->io_tree, VAR_8,
   VAR_8 + VAR_9 -1, VAR_4, VAR_13);


 VAR_15 = VAR_13->bytes_changed - VAR_14;
 FUNC_11(VAR_6, VAR_8, VAR_9,
     VAR_15, VAR_5);
 if (VAR_16 < 0)
  goto cleanup;
 VAR_16 = FUNC_8(VAR_10, VAR_15, 1, VAR_1);
 if (VAR_16 < 0)
  goto cleanup;

 return VAR_16;

cleanup:

 FUNC_1(&VAR_12);
 while ((VAR_11 = FUNC_12(&VAR_13->range_changed, &VAR_12)))
  FUNC_4(&FUNC_0(VAR_6)->io_tree, VAR_11->val,
     VAR_11->aux, VAR_4, 0, 0, ((void*)0));

 FUNC_3(VAR_10->fs_info, VAR_10->root_key.objectid,
      VAR_14, VAR_1);
 FUNC_6(VAR_13);
 return VAR_16;
}
