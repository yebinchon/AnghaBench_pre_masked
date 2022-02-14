
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct pagevec {struct page** pages; } ;
struct page {scalar_t__ mapping; int index; } ;
struct inode {scalar_t__ i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;
 int VAR_4 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,int,int*,struct writeback_control*,int,int ,unsigned int*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct f2fs_sb_info*,char*,scalar_t__,int ) ;
 int FUNC_11 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_12 (struct page*,int ) ;
 int FUNC_13 (struct f2fs_sb_info*,int *,int *,scalar_t__,int ) ;
 int FUNC_14 (struct inode*,struct page*) ;
 int FUNC_15 (struct page*,int ,int,int) ;
 scalar_t__ FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 scalar_t__ FUNC_18 (struct inode*,int ) ;
 struct page* FUNC_19 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct pagevec*) ;
 int FUNC_22 (struct pagevec*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_23 (struct pagevec*) ;
 int FUNC_24 (struct page*,int ) ;
 int FUNC_25 (struct page*,int) ;
 int FUNC_26 (struct page*) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (struct page*) ;

int FUNC_29(struct f2fs_sb_info *VAR_5, struct inode *VAR_6,
   struct writeback_control *VAR_7, bool VAR_8,
   unsigned int *VAR_9)
{
 pgoff_t VAR_10;
 struct pagevec VAR_11;
 int VAR_12 = 0;
 struct page *VAR_13 = ((void*)0);
 bool VAR_14 = 0;
 nid_t VAR_15 = VAR_6->i_ino;
 int VAR_16;
 int VAR_17 = 0;

 if (VAR_8) {
  VAR_13 = FUNC_19(VAR_5, VAR_15);
  if (FUNC_1(VAR_13))
   return FUNC_4(VAR_13);
 }
retry:
 FUNC_21(&VAR_11);
 VAR_10 = 0;

 while ((VAR_16 = FUNC_22(&VAR_11, FUNC_3(VAR_5), &VAR_10,
    VAR_4))) {
  int VAR_18;

  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
   struct page *VAR_19 = VAR_11.pages[VAR_18];
   bool VAR_20 = 0;

   if (FUNC_27(FUNC_9(VAR_5))) {
    FUNC_12(VAR_13, 0);
    FUNC_23(&VAR_11);
    VAR_12 = -VAR_0;
    goto out;
   }

   if (!FUNC_0(VAR_19) || !FUNC_17(VAR_19))
    continue;
   if (FUNC_16(VAR_19) != VAR_15)
    continue;

   FUNC_20(VAR_19);

   if (FUNC_27(VAR_19->mapping != FUNC_3(VAR_5))) {
continue_unlock:
    FUNC_28(VAR_19);
    continue;
   }
   if (FUNC_16(VAR_19) != VAR_15)
    goto continue_unlock;

   if (!FUNC_5(VAR_19) && VAR_19 != VAR_13) {

    goto continue_unlock;
   }

   FUNC_15(VAR_19, VAR_3, 1, 1);

   FUNC_25(VAR_19, 0);
   FUNC_24(VAR_19, 0);

   if (!VAR_8 || VAR_19 == VAR_13) {
    FUNC_25(VAR_19, 1);
    if (FUNC_2(VAR_19)) {
     if (FUNC_18(VAR_6,
        VAR_1))
      FUNC_14(VAR_6, VAR_19);
     FUNC_24(VAR_19,
      FUNC_11(VAR_5, VAR_15));
    }

    if (!FUNC_5(VAR_19))
     FUNC_26(VAR_19);
   }

   if (!FUNC_7(VAR_19))
    goto continue_unlock;

   VAR_12 = FUNC_6(VAR_19, VAR_8 &&
      VAR_19 == VAR_13,
      &VAR_20, VAR_7, 1,
      VAR_2, VAR_9);
   if (VAR_12) {
    FUNC_28(VAR_19);
    FUNC_12(VAR_13, 0);
    break;
   } else if (VAR_20) {
    VAR_17++;
   }

   if (VAR_19 == VAR_13) {
    FUNC_12(VAR_19, 0);
    VAR_14 = 1;
    break;
   }
  }
  FUNC_23(&VAR_11);
  FUNC_8();

  if (VAR_12 || VAR_14)
   break;
 }
 if (!VAR_12 && VAR_8 && !VAR_14) {
  FUNC_10(VAR_5, "Retry to write fsync mark: ino=%u, idx=%lx",
      VAR_15, VAR_13->index);
  FUNC_20(VAR_13);
  FUNC_15(VAR_13, VAR_3, 1, 1);
  FUNC_26(VAR_13);
  FUNC_28(VAR_13);
  goto retry;
 }
out:
 if (VAR_17)
  FUNC_13(VAR_5, ((void*)0), ((void*)0), VAR_15, VAR_3);
 return VAR_12 ? -VAR_0: 0;
}
