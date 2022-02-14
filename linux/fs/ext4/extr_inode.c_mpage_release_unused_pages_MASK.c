
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct mpage_da_data {scalar_t__ first_page; scalar_t__ next_page; struct inode* inode; } ;
struct inode {int i_blkbits; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int ext4_lblk_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int ,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct inode*,int,int) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct pagevec*) ;
 int FUNC_9 (struct pagevec*,struct address_space*,int*,int) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static void FUNC_12(struct mpage_da_data *VAR_2,
           bool VAR_3)
{
 int VAR_4, VAR_5;
 pgoff_t VAR_6, VAR_7;
 struct pagevec VAR_8;
 struct inode *VAR_9 = VAR_2->inode;
 struct address_space *VAR_10 = VAR_9->i_mapping;


 if (VAR_2->first_page >= VAR_2->next_page)
  return;

 VAR_6 = VAR_2->first_page;
 VAR_7 = VAR_2->next_page - 1;
 if (VAR_3) {
  ext4_lblk_t VAR_11, VAR_12;
  VAR_11 = VAR_6 << (VAR_0 - VAR_9->i_blkbits);
  VAR_12 = VAR_7 << (VAR_0 - VAR_9->i_blkbits);
  FUNC_6(VAR_9, VAR_11, VAR_12 - VAR_11 + 1);
 }

 FUNC_8(&VAR_8);
 while (VAR_6 <= VAR_7) {
  VAR_4 = FUNC_9(&VAR_8, VAR_10, &VAR_6, VAR_7);
  if (VAR_4 == 0)
   break;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   struct page *VAR_13 = VAR_8.pages[VAR_5];

   FUNC_0(!FUNC_2(VAR_13));
   FUNC_0(FUNC_3(VAR_13));
   if (VAR_3) {
    if (FUNC_7(VAR_13))
     FUNC_5(VAR_13);
    FUNC_4(VAR_13, 0, VAR_1);
    FUNC_1(VAR_13);
   }
   FUNC_11(VAR_13);
  }
  FUNC_10(&VAR_8);
 }
}
