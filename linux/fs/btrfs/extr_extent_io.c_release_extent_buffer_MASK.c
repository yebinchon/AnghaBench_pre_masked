
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int start; int refs_lock; int rcu_head; int bflags; struct btrfs_fs_info* fs_info; int refs; } ;
struct btrfs_fs_info {int buffer_lock; int buffer_radix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct extent_buffer*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct extent_buffer *VAR_4)
{
 FUNC_6(&VAR_4->refs_lock);

 FUNC_0(FUNC_3(&VAR_4->refs) == 0);
 if (FUNC_2(&VAR_4->refs)) {
  if (FUNC_10(VAR_0, &VAR_4->bflags)) {
   struct btrfs_fs_info *VAR_5 = VAR_4->fs_info;

   FUNC_9(&VAR_4->refs_lock);

   FUNC_8(&VAR_5->buffer_lock);
   FUNC_7(&VAR_5->buffer_radix,
       VAR_4->start >> VAR_2);
   FUNC_9(&VAR_5->buffer_lock);
  } else {
   FUNC_9(&VAR_4->refs_lock);
  }


  FUNC_4(VAR_4);






  FUNC_5(&VAR_4->rcu_head, VAR_3);
  return 1;
 }
 FUNC_9(&VAR_4->refs_lock);

 return 0;
}
