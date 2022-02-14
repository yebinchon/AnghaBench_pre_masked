
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {unsigned long b_state; int b_page; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct buffer_head *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 VAR_2 &= VAR_0;


 if (!VAR_1->b_page) {
  VAR_1->b_state = (VAR_1->b_state & ~VAR_0) | VAR_2;
  return;
 }





 do {
  VAR_3 = FUNC_0(VAR_1->b_state);
  VAR_4 = (VAR_3 & ~VAR_0) | VAR_2;
 } while (FUNC_2(
   FUNC_1(&VAR_1->b_state, VAR_3, VAR_4) != VAR_3));
}
