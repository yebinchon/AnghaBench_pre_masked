
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_fs_info {TYPE_1__* btree_inode; int dirty_metadata_batch; int dirty_metadata_bytes; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_fs_info*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_info *VAR_3,
     int VAR_4)
{




 int VAR_5;

 if (VAR_2->flags & VAR_1)
  return;

 if (VAR_4)
  FUNC_2(VAR_3);

 VAR_5 = FUNC_0(&VAR_3->dirty_metadata_bytes,
         VAR_0,
         VAR_3->dirty_metadata_batch);
 if (VAR_5 > 0) {
  FUNC_1(VAR_3->btree_inode->i_mapping);
 }
}
