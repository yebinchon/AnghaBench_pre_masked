
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct inode {int i_blkbits; struct address_space* i_mapping; } ;
struct buffer_head {int b_blocknr; struct buffer_head* b_this_page; } ;
struct block_device {struct inode* bd_inode; } ;
struct address_space {int dummy; } ;
typedef int sector_t ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct page*) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct pagevec*) ;
 int FUNC_8 (struct pagevec*) ;
 scalar_t__ FUNC_9 (struct pagevec*,struct address_space*,int*,int) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct buffer_head*) ;

void FUNC_13(struct block_device *VAR_1, sector_t VAR_2, sector_t VAR_3)
{
 struct inode *VAR_4 = VAR_1->bd_inode;
 struct address_space *VAR_5 = VAR_4->i_mapping;
 struct pagevec VAR_6;
 pgoff_t VAR_7 = VAR_2 >> (VAR_0 - VAR_4->i_blkbits);
 pgoff_t VAR_8;
 int VAR_9, VAR_10;
 struct buffer_head *VAR_11;
 struct buffer_head *VAR_12;

 VAR_8 = (VAR_2 + VAR_3 - 1) >> (VAR_0 - VAR_4->i_blkbits);
 FUNC_8(&VAR_6);
 while (FUNC_9(&VAR_6, VAR_5, &VAR_7, VAR_8)) {
  VAR_10 = FUNC_7(&VAR_6);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   struct page *VAR_13 = VAR_6.pages[VAR_9];

   if (!FUNC_6(VAR_13))
    continue;





   FUNC_4(VAR_13);

   if (!FUNC_6(VAR_13))
    goto unlock_page;
   VAR_12 = FUNC_5(VAR_13);
   VAR_11 = VAR_12;
   do {
    if (!FUNC_0(VAR_11) || (VAR_11->b_blocknr < VAR_2))
     goto next;
    if (VAR_11->b_blocknr >= VAR_2 + VAR_3)
     break;
    FUNC_1(VAR_11);
    FUNC_12(VAR_11);
    FUNC_2(VAR_11);
next:
    VAR_11 = VAR_11->b_this_page;
   } while (VAR_11 != VAR_12);
unlock_page:
   FUNC_11(VAR_13);
  }
  FUNC_10(&VAR_6);
  FUNC_3();

  if (VAR_7 > VAR_8 || !VAR_7)
   break;
 }
}
