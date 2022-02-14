
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int * pages; } ;
struct address_space {int dummy; } ;
struct nilfs_inode_info {struct address_space i_btnode_cache; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; int b_assoc_buffers; } ;
typedef int pgoff_t ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *,struct list_head*) ;
 struct buffer_head* FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct pagevec*) ;
 int FUNC_8 (struct pagevec*) ;
 scalar_t__ FUNC_9 (struct pagevec*,struct address_space*,int *,int ) ;
 int FUNC_10 (struct pagevec*) ;

__attribute__((used)) static void FUNC_11(struct inode *VAR_1,
         struct list_head *VAR_2)
{
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_1);
 struct address_space *VAR_4 = &VAR_3->i_btnode_cache;
 struct pagevec VAR_5;
 struct buffer_head *VAR_6, *VAR_7;
 unsigned int VAR_8;
 pgoff_t VAR_9 = 0;

 FUNC_8(&VAR_5);

 while (FUNC_9(&VAR_5, VAR_4, &VAR_9,
     VAR_0)) {
  for (VAR_8 = 0; VAR_8 < FUNC_7(&VAR_5); VAR_8++) {
   VAR_6 = VAR_7 = FUNC_6(VAR_5.pages[VAR_8]);
   do {
    if (FUNC_2(VAR_6) &&
      !FUNC_1(VAR_6)) {
     FUNC_4(VAR_6);
     FUNC_5(&VAR_6->b_assoc_buffers,
            VAR_2);
    }
    VAR_6 = VAR_6->b_this_page;
   } while (VAR_6 != VAR_7);
  }
  FUNC_10(&VAR_5);
  FUNC_3();
 }
}
