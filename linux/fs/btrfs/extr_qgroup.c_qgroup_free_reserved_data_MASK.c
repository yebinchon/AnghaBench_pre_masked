
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ulist_node {scalar_t__ val; scalar_t__ aux; } ;
struct ulist_iterator {int dummy; } ;
struct inode {int dummy; } ;
struct extent_changeset {scalar_t__ bytes_changed; int range_changed; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; TYPE_2__* fs_info; } ;
struct TYPE_6__ {int io_tree; struct btrfs_root* root; } ;
struct TYPE_5__ {int sectorsize; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ulist_iterator*) ;
 int FUNC_2 (TYPE_2__*,int ,int,int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,int ,struct extent_changeset*) ;
 int FUNC_4 (struct extent_changeset*) ;
 int FUNC_5 (struct extent_changeset*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 struct ulist_node* FUNC_10 (int *,struct ulist_iterator*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2,
   struct extent_changeset *VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct btrfs_root *VAR_6 = FUNC_0(VAR_2)->root;
 struct ulist_node *VAR_7;
 struct ulist_iterator VAR_8;
 struct extent_changeset VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 FUNC_4(&VAR_9);
 VAR_5 = FUNC_9(VAR_4 + VAR_5, VAR_6->fs_info->sectorsize);
 VAR_4 = FUNC_8(VAR_4, VAR_6->fs_info->sectorsize);

 FUNC_1(&VAR_8);
 while ((VAR_7 = FUNC_10(&VAR_3->range_changed, &VAR_8))) {
  u64 VAR_12 = VAR_7->val;

  u64 VAR_13 = VAR_7->aux - VAR_12 + 1;
  u64 VAR_14;
  u64 VAR_15;

  FUNC_5(&VAR_9);


  if (VAR_12 >= VAR_4 + VAR_5 ||
      VAR_12 + VAR_13 <= VAR_4)
   continue;
  VAR_14 = FUNC_6(VAR_12, VAR_4);
  VAR_15 = FUNC_7(VAR_4 + VAR_5, VAR_12 + VAR_13) -
      VAR_14;
  VAR_11 = FUNC_3(&FUNC_0(VAR_2)->io_tree,
    VAR_14, VAR_14 + VAR_15 - 1,
    VAR_1, &VAR_9);
  if (VAR_11 < 0)
   goto out;
  VAR_10 += VAR_9.bytes_changed;
 }
 FUNC_2(VAR_6->fs_info, VAR_6->root_key.objectid, VAR_10,
      VAR_0);
 VAR_11 = VAR_10;
out:
 FUNC_5(&VAR_9);
 return VAR_11;
}
