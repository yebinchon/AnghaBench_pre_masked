
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ) ;

void FUNC_6(struct page *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 struct buffer_head *VAR_4, *VAR_5, *VAR_6;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = VAR_3 + VAR_2;

 FUNC_0(!FUNC_1(VAR_1));
 if (!FUNC_4(VAR_1))
  goto out;




 FUNC_0(VAR_8 > VAR_0 || VAR_8 < VAR_3);

 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = VAR_4;
 do {
  unsigned int VAR_9 = VAR_7 + VAR_5->b_size;
  VAR_6 = VAR_5->b_this_page;




  if (VAR_9 > VAR_8)
   goto out;




  if (VAR_2 <= VAR_7)
   FUNC_2(VAR_5);
  VAR_7 = VAR_9;
  VAR_5 = VAR_6;
 } while (VAR_5 != VAR_4);






 if (VAR_3 == VAR_0)
  FUNC_5(VAR_1, 0);
out:
 return;
}
