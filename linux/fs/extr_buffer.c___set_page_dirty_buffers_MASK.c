
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int host; int private_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct page*,struct address_space*,int) ;
 int FUNC_3 (struct page*) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 struct address_space* FUNC_6 (struct page*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct page*) ;

int FUNC_12(struct page *VAR_1)
{
 int VAR_2;
 struct address_space *VAR_3 = FUNC_6(VAR_1);

 if (FUNC_10(!VAR_3))
  return !FUNC_0(VAR_1);

 FUNC_8(&VAR_3->private_lock);
 if (FUNC_5(VAR_1)) {
  struct buffer_head *VAR_4 = FUNC_4(VAR_1);
  struct buffer_head *VAR_5 = VAR_4;

  do {
   FUNC_7(VAR_5);
   VAR_5 = VAR_5->b_this_page;
  } while (VAR_5 != VAR_4);
 }




 FUNC_3(VAR_1);
 VAR_2 = !FUNC_0(VAR_1);
 FUNC_9(&VAR_3->private_lock);

 if (VAR_2)
  FUNC_2(VAR_1, VAR_3, 1);

 FUNC_11(VAR_1);

 if (VAR_2)
  FUNC_1(VAR_3->host, VAR_0);

 return VAR_2;
}
