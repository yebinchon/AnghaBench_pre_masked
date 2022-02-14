
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; scalar_t__ nr_to_write; } ;
struct pagevec {struct page** pages; } ;
struct page {scalar_t__ mapping; } ;
struct f2fs_sb_info {int * wb_sync_req; } ;
typedef scalar_t__ pgoff_t ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int FUNC_3 (struct page*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct page*,int,int*,struct writeback_control*,int,int,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct f2fs_sb_info*,size_t) ;
 int FUNC_11 (struct page*,size_t,int,int) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (struct f2fs_sb_info*,int ) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 scalar_t__ FUNC_16 (struct page*) ;
 int FUNC_17 (struct f2fs_sb_info*,int ) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct pagevec*) ;
 int FUNC_20 (struct pagevec*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_21 (struct pagevec*) ;
 int FUNC_22 (struct page*,int ) ;
 int FUNC_23 (struct page*,int ) ;
 int FUNC_24 (struct page*) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (struct page*) ;

int FUNC_27(struct f2fs_sb_info *VAR_6,
    struct writeback_control *VAR_7,
    bool VAR_8, enum iostat_type VAR_9)
{
 pgoff_t VAR_10;
 struct pagevec VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15, VAR_16 = 0;

 FUNC_19(&VAR_11);

next_step:
 VAR_10 = 0;

 while (!VAR_16 && (VAR_15 = FUNC_20(&VAR_11,
   FUNC_2(VAR_6), &VAR_10, VAR_2))) {
  int VAR_17;

  for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
   struct page *VAR_18 = VAR_11.pages[VAR_17];
   bool VAR_19 = 0;
   bool VAR_20 = 1;


   if (FUNC_5(&VAR_6->wb_sync_req[VAR_1]) &&
     VAR_7->sync_mode == VAR_5) {
    VAR_16 = 1;
    break;
   }







   if (VAR_12 == 0 && FUNC_0(VAR_18))
    continue;
   if (VAR_12 == 1 && (!FUNC_0(VAR_18) ||
      FUNC_15(VAR_18)))
    continue;
   if (VAR_12 == 2 && (!FUNC_0(VAR_18) ||
      !FUNC_15(VAR_18)))
    continue;
lock_node:
   if (VAR_7->sync_mode == VAR_4)
    FUNC_18(VAR_18);
   else if (!FUNC_24(VAR_18))
    continue;

   if (FUNC_25(VAR_18->mapping != FUNC_2(VAR_6))) {
continue_unlock:
    FUNC_26(VAR_18);
    continue;
   }

   if (!FUNC_3(VAR_18)) {

    goto continue_unlock;
   }


   if (FUNC_16(VAR_18)) {
    FUNC_6(VAR_18);
    FUNC_26(VAR_18);
    FUNC_13(VAR_6, FUNC_14(VAR_18));
    goto lock_node;
   }


   if (FUNC_1(VAR_18) && VAR_20) {
    VAR_20 = 0;
    if (FUNC_12(VAR_18))
     goto lock_node;
   }

   FUNC_11(VAR_18, VAR_1, 1, 1);

   if (!FUNC_7(VAR_18))
    goto continue_unlock;

   FUNC_23(VAR_18, 0);
   FUNC_22(VAR_18, 0);

   VAR_14 = FUNC_4(VAR_18, 0, &VAR_19,
      VAR_7, VAR_8, VAR_9, ((void*)0));
   if (VAR_14)
    FUNC_26(VAR_18);
   else if (VAR_19)
    VAR_13++;

   if (--VAR_7->nr_to_write == 0)
    break;
  }
  FUNC_21(&VAR_11);
  FUNC_8();

  if (VAR_7->nr_to_write == 0) {
   VAR_12 = 2;
   break;
  }
 }

 if (VAR_12 < 2) {
  if (!FUNC_17(VAR_6, VAR_3) &&
    VAR_7->sync_mode == VAR_5 && VAR_12 == 1)
   goto out;
  VAR_12++;
  goto next_step;
 }
out:
 if (VAR_13)
  FUNC_10(VAR_6, VAR_1);

 if (FUNC_25(FUNC_9(VAR_6)))
  return -VAR_0;
 return VAR_14;
}
