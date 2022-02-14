
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int for_reclaim; } ;
struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct f2fs_sb_info {int dummy; } ;
struct blk_plug {int dummy; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef enum page_type { ____Placeholder_page_type } page_type ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;


 long VAR_0 ;
 int VAR_1 ;
 struct address_space* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct page*,struct writeback_control*,int) ;
 int FUNC_3 (struct blk_plug*) ;
 int FUNC_4 (struct blk_plug*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct f2fs_sb_info*,int) ;
 int FUNC_8 (struct page*,int ,int,int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct pagevec*,struct address_space*,scalar_t__*,int ) ;
 int FUNC_12 (struct pagevec*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct page*) ;

long FUNC_15(struct f2fs_sb_info *VAR_4, enum page_type VAR_5,
    long VAR_6, enum iostat_type VAR_7)
{
 struct address_space *VAR_8 = FUNC_0(VAR_4);
 pgoff_t VAR_9 = 0, VAR_10 = VAR_3;
 struct pagevec VAR_11;
 long VAR_12 = 0;
 int VAR_13;
 struct writeback_control VAR_14 = {
  .for_reclaim = 0,
 };
 struct blk_plug VAR_15;

 FUNC_10(&VAR_11);

 FUNC_4(&VAR_15);

 while ((VAR_13 = FUNC_11(&VAR_11, VAR_8, &VAR_9,
    VAR_2))) {
  int VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
   struct page *VAR_17 = VAR_11.pages[VAR_16];

   if (VAR_10 == VAR_3)
    VAR_10 = VAR_17->index - 1;
   if (VAR_6 != VAR_0 && VAR_17->index != VAR_10 + 1) {
    FUNC_12(&VAR_11);
    goto stop;
   }

   FUNC_9(VAR_17);

   if (FUNC_13(VAR_17->mapping != VAR_8)) {
continue_unlock:
    FUNC_14(VAR_17);
    continue;
   }
   if (!FUNC_1(VAR_17)) {

    goto continue_unlock;
   }

   FUNC_8(VAR_17, VAR_1, 1, 1);

   if (!FUNC_5(VAR_17))
    goto continue_unlock;

   if (FUNC_2(VAR_17, &VAR_14, VAR_7)) {
    FUNC_14(VAR_17);
    break;
   }
   VAR_12++;
   VAR_10 = VAR_17->index;
   if (FUNC_13(VAR_12 >= VAR_6))
    break;
  }
  FUNC_12(&VAR_11);
  FUNC_6();
 }
stop:
 if (VAR_12)
  FUNC_7(VAR_4, VAR_5);

 FUNC_3(&VAR_15);

 return VAR_12;
}
