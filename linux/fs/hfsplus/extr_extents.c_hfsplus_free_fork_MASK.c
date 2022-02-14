
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct hfsplus_fork_raw {TYPE_4__* extents; int total_blocks; } ;
struct hfs_find_data {TYPE_3__* tree; TYPE_2__* key; } ;
typedef TYPE_4__* hfsplus_extent_rec ;
struct TYPE_12__ {int ext_tree; } ;
struct TYPE_11__ {int block_count; } ;
struct TYPE_10__ {int tree_lock; } ;
struct TYPE_8__ {int start_block; } ;
struct TYPE_9__ {TYPE_1__ ext; } ;


 TYPE_7__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct hfs_find_data*,TYPE_4__*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (struct hfs_find_data*) ;
 int FUNC_5 (int ,struct hfs_find_data*) ;
 int FUNC_6 (struct super_block*,TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct super_block *VAR_0, u32 VAR_1,
  struct hfsplus_fork_raw *VAR_2, int VAR_3)
{
 struct hfs_find_data VAR_4;
 hfsplus_extent_rec VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_2(VAR_2->total_blocks);
 if (!VAR_6)
  return 0;

 VAR_7 = 0;
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
  VAR_7 += FUNC_2(VAR_2->extents[VAR_10].block_count);

 VAR_9 = FUNC_6(VAR_0, VAR_2->extents, VAR_7, VAR_7);
 if (VAR_9)
  return VAR_9;
 if (VAR_6 == VAR_7)
  return 0;

 VAR_9 = FUNC_5(FUNC_0(VAR_0)->ext_tree, &VAR_4);
 if (VAR_9)
  return VAR_9;
 do {
  VAR_9 = FUNC_1(&VAR_4, VAR_5, VAR_1,
      VAR_6, VAR_3);
  if (VAR_9)
   break;
  VAR_8 = FUNC_2(VAR_4.key->ext.start_block);
  FUNC_3(&VAR_4);

  FUNC_8(&VAR_4.tree->tree_lock);
  FUNC_6(VAR_0, VAR_5, VAR_6 - VAR_8,
         VAR_6);
  VAR_6 = VAR_8;
  FUNC_7(&VAR_4.tree->tree_lock);
 } while (VAR_6 > VAR_7);
 FUNC_4(&VAR_4);

 return VAR_9;
}
