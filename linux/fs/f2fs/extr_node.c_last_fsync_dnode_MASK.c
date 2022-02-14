
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {scalar_t__ mapping; } ;
struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ nid_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct page*,int ) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct pagevec*) ;
 int FUNC_12 (struct pagevec*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_13 (struct pagevec*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct page*) ;

__attribute__((used)) static struct page *FUNC_16(struct f2fs_sb_info *VAR_2, nid_t VAR_3)
{
 pgoff_t VAR_4;
 struct pagevec VAR_5;
 struct page *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_11(&VAR_5);
 VAR_4 = 0;

 while ((VAR_7 = FUNC_12(&VAR_5, FUNC_2(VAR_2), &VAR_4,
    VAR_1))) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   struct page *VAR_9 = VAR_5.pages[VAR_8];

   if (FUNC_14(FUNC_5(VAR_2))) {
    FUNC_6(VAR_6, 0);
    FUNC_13(&VAR_5);
    return FUNC_0(-VAR_0);
   }

   if (!FUNC_1(VAR_9) || !FUNC_9(VAR_9))
    continue;
   if (FUNC_8(VAR_9) != VAR_3)
    continue;

   FUNC_10(VAR_9);

   if (FUNC_14(VAR_9->mapping != FUNC_2(VAR_2))) {
continue_unlock:
    FUNC_15(VAR_9);
    continue;
   }
   if (FUNC_8(VAR_9) != VAR_3)
    goto continue_unlock;

   if (!FUNC_3(VAR_9)) {

    goto continue_unlock;
   }

   if (VAR_6)
    FUNC_6(VAR_6, 0);

   FUNC_7(VAR_9);
   VAR_6 = VAR_9;
   FUNC_15(VAR_9);
  }
  FUNC_13(&VAR_5);
  FUNC_4();
 }
 return VAR_6;
}
