
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int private_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,struct buffer_head**) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct page *VAR_0)
{
 struct address_space * const VAR_1 = VAR_0->mapping;
 struct buffer_head *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 FUNC_0(!FUNC_1(VAR_0));
 if (FUNC_2(VAR_0))
  return 0;

 if (VAR_1 == ((void*)0)) {
  VAR_3 = FUNC_4(VAR_0, &VAR_2);
  goto out;
 }

 FUNC_6(&VAR_1->private_lock);
 VAR_3 = FUNC_4(VAR_0, &VAR_2);
 if (VAR_3)
  FUNC_3(VAR_0);
 FUNC_7(&VAR_1->private_lock);
out:
 if (VAR_2) {
  struct buffer_head *VAR_4 = VAR_2;

  do {
   struct buffer_head *VAR_5 = VAR_4->b_this_page;
   FUNC_5(VAR_4);
   VAR_4 = VAR_5;
  } while (VAR_4 != VAR_2);
 }
 return VAR_3;
}
