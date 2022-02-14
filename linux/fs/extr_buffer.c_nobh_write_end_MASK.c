
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {unsigned int i_size; } ;
struct file {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_5 (struct inode*,unsigned int) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct page*) ;

int FUNC_12(struct file *VAR_0, struct address_space *VAR_1,
   loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
   struct page *VAR_5, void *VAR_6)
{
 struct inode *VAR_7 = VAR_5->mapping->host;
 struct buffer_head *VAR_8 = VAR_6;
 struct buffer_head *VAR_9;
 FUNC_0(VAR_6 != ((void*)0) && FUNC_7(VAR_5));

 if (FUNC_10(VAR_4 < VAR_3) && VAR_8)
  FUNC_2(VAR_5, VAR_8);
 if (FUNC_7(VAR_5))
  return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6);

 FUNC_1(VAR_5);
 FUNC_9(VAR_5);
 if (VAR_2+VAR_4 > VAR_7->i_size) {
  FUNC_5(VAR_7, VAR_2+VAR_4);
  FUNC_6(VAR_7);
 }

 FUNC_11(VAR_5);
 FUNC_8(VAR_5);

 while (VAR_8) {
  VAR_9 = VAR_8;
  VAR_8 = VAR_8->b_this_page;
  FUNC_3(VAR_9);
 }

 return VAR_4;
}
