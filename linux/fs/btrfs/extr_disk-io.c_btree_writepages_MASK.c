
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; scalar_t__ for_kupdate; } ;
struct btrfs_fs_info {int dirty_metadata_batch; int dirty_metadata_bytes; } ;
struct address_space {int host; } ;
struct TYPE_4__ {TYPE_1__* root; } ;
struct TYPE_3__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct address_space*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_3(struct address_space *VAR_2,
       struct writeback_control *VAR_3)
{
 struct btrfs_fs_info *VAR_4;
 int VAR_5;

 if (VAR_3->sync_mode == VAR_1) {

  if (VAR_3->for_kupdate)
   return 0;

  VAR_4 = FUNC_0(VAR_2->host)->root->fs_info;

  VAR_5 = FUNC_1(&VAR_4->dirty_metadata_bytes,
          VAR_0,
          VAR_4->dirty_metadata_batch);
  if (VAR_5 < 0)
   return 0;
 }
 return FUNC_2(VAR_2, VAR_3);
}
