
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int refs_lock; int bflags; int refs; } ;
struct btrfs_fs_info {int buffer_radix; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct extent_buffer*,int *) ;
 struct extent_buffer* FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

struct extent_buffer *FUNC_8(struct btrfs_fs_info *VAR_2,
      u64 VAR_3)
{
 struct extent_buffer *VAR_4;

 FUNC_3();
 VAR_4 = FUNC_2(&VAR_2->buffer_radix,
          VAR_3 >> VAR_1);
 if (VAR_4 && FUNC_0(&VAR_4->refs)) {
  FUNC_4();
  if (FUNC_7(VAR_0, &VAR_4->bflags)) {
   FUNC_5(&VAR_4->refs_lock);
   FUNC_6(&VAR_4->refs_lock);
  }
  FUNC_1(VAR_4, ((void*)0));
  return VAR_4;
 }
 FUNC_4();

 return ((void*)0);
}
