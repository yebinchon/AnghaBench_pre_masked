
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct reserve_ticket {int list; int wait; scalar_t__ error; scalar_t__ bytes; } ;
struct btrfs_space_info {scalar_t__ total_bytes; int flush; int flags; int lock; int priority_tickets; int tickets; } ;
struct btrfs_fs_info {int async_reclaim_work; int flags; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;
struct TYPE_2__ {int journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_space_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct btrfs_space_info*,int) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*,struct btrfs_space_info*,scalar_t__,int,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (struct btrfs_fs_info*,struct btrfs_space_info*,struct reserve_ticket*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct btrfs_fs_info*,struct btrfs_space_info*,scalar_t__,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct btrfs_fs_info*,int,scalar_t__,int,char*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct btrfs_fs_info *VAR_7,
        struct btrfs_space_info *VAR_8,
        u64 VAR_9,
        enum btrfs_reserve_flush_enum VAR_10,
        bool VAR_11)
{
 struct reserve_ticket VAR_12;
 u64 VAR_13;
 int VAR_14 = 0;
 bool VAR_15;

 FUNC_0(VAR_9);
 FUNC_0(!VAR_5->journal_info || VAR_10 != VAR_2);

 FUNC_10(&VAR_8->lock);
 VAR_14 = -VAR_4;
 VAR_13 = FUNC_2(VAR_8, 1);
 VAR_15 = !FUNC_7(&VAR_8->tickets) ||
  !FUNC_7(&VAR_8->priority_tickets);





 if (!VAR_15 &&
     ((VAR_13 + VAR_9 <= VAR_8->total_bytes) ||
      FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11))) {
  FUNC_1(VAR_7, VAR_8,
            VAR_9);
  VAR_14 = 0;
 }
 if (VAR_14 && VAR_10 != VAR_3) {
  VAR_12.bytes = VAR_9;
  VAR_12.error = 0;
  FUNC_5(&VAR_12.wait);
  if (VAR_10 == VAR_2) {
   FUNC_6(&VAR_12.list, &VAR_8->tickets);
   if (!VAR_8->flush) {
    VAR_8->flush = 1;
    FUNC_13(VAR_7,
         VAR_8->flags,
         VAR_9, VAR_10,
         "enospc");
    FUNC_9(VAR_6,
        &VAR_7->async_reclaim_work);
   }
  } else {
   FUNC_6(&VAR_12.list,
          &VAR_8->priority_tickets);
  }
 } else if (!VAR_14 && VAR_8->flags & VAR_0) {
  VAR_13 += VAR_9;





  if (!FUNC_12(VAR_1, &VAR_7->flags) &&
      FUNC_8(VAR_7, VAR_8,
       VAR_13, VAR_11) &&
      !FUNC_14(&VAR_7->async_reclaim_work)) {
   FUNC_13(VAR_7, VAR_8->flags,
        VAR_9, VAR_10, "preempt");
   FUNC_9(VAR_6,
       &VAR_7->async_reclaim_work);
  }
 }
 FUNC_11(&VAR_8->lock);
 if (!VAR_14 || VAR_10 == VAR_3)
  return VAR_14;

 return FUNC_4(VAR_7, VAR_8, &VAR_12, VAR_10);
}
