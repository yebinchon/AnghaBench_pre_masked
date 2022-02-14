
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;
typedef int journal_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned int VAR_0 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int *,struct buffer_head*,int) ;
 int FUNC_5 (struct buffer_head*) ;
 struct buffer_head* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct buffer_head*) ;

int FUNC_10(journal_t *VAR_1,
    struct page *VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct buffer_head *VAR_5, *VAR_6, *VAR_7;
 unsigned int VAR_8 = VAR_3 + VAR_4;
 unsigned int VAR_9 = 0;
 int VAR_10 = (VAR_3 || VAR_4 < VAR_0);
 int VAR_11 = 1;
 int VAR_12 = 0;

 if (!FUNC_3(VAR_2))
  FUNC_0();
 if (!FUNC_7(VAR_2))
  return 0;

 FUNC_1(VAR_8 > VAR_0 || VAR_8 < VAR_4);





 VAR_5 = VAR_6 = FUNC_6(VAR_2);
 do {
  unsigned int VAR_13 = VAR_9 + VAR_6->b_size;
  VAR_7 = VAR_6->b_this_page;

  if (VAR_13 > VAR_8)
   return 0;

  if (VAR_3 <= VAR_9) {

   FUNC_5(VAR_6);
   VAR_12 = FUNC_4(VAR_1, VAR_6, VAR_10);
   FUNC_9(VAR_6);
   if (VAR_12 < 0)
    return VAR_12;
   VAR_11 &= VAR_12;
  }
  VAR_9 = VAR_13;
  VAR_6 = VAR_7;

 } while (VAR_6 != VAR_5);

 if (!VAR_10) {
  if (VAR_11 && FUNC_8(VAR_2))
   FUNC_2(!FUNC_7(VAR_2));
 }
 return 0;
}
