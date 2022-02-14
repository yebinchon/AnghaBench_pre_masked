
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {int len; int bflags; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dirty_metadata_batch; int dirty_metadata_bytes; TYPE_1__* running_transaction; } ;
struct TYPE_2__ {scalar_t__ transid; } ;


 int VAR_0 ;
 int FUNC_0 (struct extent_buffer*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct extent_buffer *VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_1->fs_info;
 if (FUNC_1(VAR_1) ==
     VAR_2->running_transaction->transid) {
  FUNC_0(VAR_1);

  if (FUNC_5(VAR_0, &VAR_1->bflags)) {
   FUNC_4(&VAR_2->dirty_metadata_bytes,
       -VAR_1->len,
       VAR_2->dirty_metadata_batch);

   FUNC_2(VAR_1);
   FUNC_3(VAR_1);
  }
 }
}
