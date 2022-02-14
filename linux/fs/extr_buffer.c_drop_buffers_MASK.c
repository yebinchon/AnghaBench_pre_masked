
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {scalar_t__ b_assoc_map; struct buffer_head* b_this_page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct page*) ;

__attribute__((used)) static int
FUNC_4(struct page *VAR_0, struct buffer_head **VAR_1)
{
 struct buffer_head *VAR_2 = FUNC_3(VAR_0);
 struct buffer_head *VAR_3;

 VAR_3 = VAR_2;
 do {
  if (FUNC_2(VAR_3))
   goto failed;
  VAR_3 = VAR_3->b_this_page;
 } while (VAR_3 != VAR_2);

 do {
  struct buffer_head *VAR_4 = VAR_3->b_this_page;

  if (VAR_3->b_assoc_map)
   FUNC_1(VAR_3);
  VAR_3 = VAR_4;
 } while (VAR_3 != VAR_2);
 *VAR_1 = VAR_2;
 FUNC_0(VAR_0);
 return 1;
failed:
 return 0;
}
