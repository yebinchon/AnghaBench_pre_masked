
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;
typedef int handle_t ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_8(handle_t *VAR_0,
         struct page *VAR_1,
         unsigned VAR_2, unsigned VAR_3)
{
 unsigned int VAR_4 = 0, VAR_5;
 struct buffer_head *VAR_6, *VAR_7;

 VAR_7 = VAR_6 = FUNC_5(VAR_1);
 do {
  VAR_5 = VAR_4 + VAR_7->b_size;
  if (FUNC_1(VAR_7)) {
   if (VAR_5 > VAR_2 && VAR_4 < VAR_3) {
    if (!FUNC_0(VAR_1)) {
     unsigned VAR_8, VAR_9;

     VAR_8 = FUNC_3(VAR_2, VAR_4);
     VAR_9 = FUNC_4(VAR_3, VAR_5) - VAR_8;

     FUNC_7(VAR_1, VAR_8, VAR_9);
     FUNC_6(VAR_0, VAR_7);
    }
    FUNC_2(VAR_7);
   }
  }
  VAR_4 = VAR_5;
  VAR_7 = VAR_7->b_this_page;
 } while (VAR_7 != VAR_6);
}
