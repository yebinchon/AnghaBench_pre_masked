
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {int periodic_size; scalar_t__ rh_state; int next_frame; unsigned int now_frame; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct fotg210_hcd*) ;
 unsigned int FUNC_1 (struct fotg210_hcd*,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct fotg210_hcd *VAR_1)
{
 unsigned VAR_2, VAR_3, VAR_4, VAR_5;
 unsigned VAR_6 = VAR_1->periodic_size - 1;
 bool VAR_7;






 if (VAR_1->rh_state >= VAR_0) {
  VAR_2 = FUNC_0(VAR_1);
  VAR_3 = (VAR_2 >> 3) & VAR_6;
  VAR_7 = 1;
 } else {
  VAR_3 = (VAR_1->next_frame - 1) & VAR_6;
  VAR_7 = 0;
 }
 VAR_1->now_frame = VAR_3;

 VAR_4 = VAR_1->next_frame;
 for (;;) {
  VAR_5 = 1;
  while (VAR_5 != 0)
   VAR_5 = FUNC_1(VAR_1, VAR_4,
     VAR_3, VAR_7);


  if (VAR_4 == VAR_3)
   break;
  VAR_4 = (VAR_4 + 1) & VAR_6;
 }
 VAR_1->next_frame = VAR_3;
}
