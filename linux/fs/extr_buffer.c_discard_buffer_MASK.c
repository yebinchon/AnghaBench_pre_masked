
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {unsigned long b_state; int * b_bdev; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 unsigned long FUNC_1 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_4(struct buffer_head * VAR_1)
{
 unsigned long VAR_2, VAR_3;

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 VAR_1->b_bdev = ((void*)0);
 VAR_2 = VAR_1->b_state;
 for (;;) {
  VAR_3 = FUNC_1(&VAR_1->b_state, VAR_2,
          (VAR_2 & ~VAR_0));
  if (VAR_3 == VAR_2)
   break;
  VAR_2 = VAR_3;
 }
 FUNC_3(VAR_1);
}
