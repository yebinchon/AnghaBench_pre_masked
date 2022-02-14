
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_space_info {int lock; int priority_tickets; int tickets; } ;
struct btrfs_fs_info {int dio_bytes; int delalloc_bytes; int async_delalloc_pages; int async_submit_wait; } ;
struct TYPE_2__ {scalar_t__ journal_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *) ;
 struct btrfs_space_info* FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (struct btrfs_fs_info*,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (struct btrfs_fs_info*,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_4 (struct btrfs_fs_info*,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 unsigned long FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 long FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static void FUNC_12(struct btrfs_fs_info *VAR_4, u64 VAR_5,
       u64 VAR_6, bool VAR_7)
{
 struct btrfs_space_info *VAR_8;
 struct btrfs_trans_handle *VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 long VAR_14;
 unsigned long VAR_15;
 int VAR_16;


 VAR_13 = FUNC_4(VAR_4, VAR_5);
 VAR_5 = VAR_13 * VAR_1;

 VAR_9 = (struct btrfs_trans_handle *)VAR_3->journal_info;
 VAR_8 = FUNC_1(VAR_4, VAR_0);

 VAR_10 = FUNC_7(
      &VAR_4->delalloc_bytes);
 VAR_11 = FUNC_7(&VAR_4->dio_bytes);
 if (VAR_10 == 0 && VAR_11 == 0) {
  if (VAR_9)
   return;
  if (VAR_7)
   FUNC_2(VAR_4, VAR_13, 0, (u64)-1);
  return;
 }






 if (VAR_11 > VAR_10)
  VAR_7 = 1;

 VAR_16 = 0;
 while ((VAR_10 || VAR_11) && VAR_16 < 3) {
  VAR_15 = FUNC_6(VAR_10, VAR_5) >> VAR_2;






  FUNC_3(VAR_4, VAR_15, VAR_13);





  VAR_12 = FUNC_0(&VAR_4->async_delalloc_pages);
  if (!VAR_12)
   goto skip_async;






  if (VAR_12 <= VAR_15)
   VAR_12 = 0;
  else
   VAR_12 -= VAR_15;

  FUNC_11(VAR_4->async_submit_wait,
      FUNC_0(&VAR_4->async_delalloc_pages) <=
      (int)VAR_12);
skip_async:
  FUNC_9(&VAR_8->lock);
  if (FUNC_5(&VAR_8->tickets) &&
      FUNC_5(&VAR_8->priority_tickets)) {
   FUNC_10(&VAR_8->lock);
   break;
  }
  FUNC_10(&VAR_8->lock);

  VAR_16++;
  if (VAR_7 && !VAR_9) {
   FUNC_2(VAR_4, VAR_13, 0, (u64)-1);
  } else {
   VAR_14 = FUNC_8(1);
   if (VAR_14)
    break;
  }
  VAR_10 = FUNC_7(
      &VAR_4->delalloc_bytes);
  VAR_11 = FUNC_7(&VAR_4->dio_bytes);
 }
}
