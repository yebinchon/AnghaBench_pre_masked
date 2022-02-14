
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {unsigned int input_allowed_mask; unsigned int input_avail_mask; unsigned long input_val; int big_lock; } ;
typedef int m ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_hdw*,unsigned int) ;

int FUNC_3(struct pvr2_hdw *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5,VAR_6,VAR_7;
 FUNC_1(VAR_1->big_lock);
 do {
  VAR_5 = VAR_1->input_allowed_mask & ~VAR_2;
  VAR_5 |= (VAR_3 & VAR_2);
  VAR_5 &= VAR_1->input_avail_mask;
  if (!VAR_5) {

   VAR_4 = -VAR_0;
   break;
  }
  VAR_1->input_allowed_mask = VAR_5;
  if ((1UL << VAR_1->input_val) & VAR_1->input_allowed_mask) {


   break;
  }


  if (!VAR_1->input_allowed_mask) {

   break;
  }
  VAR_6 = VAR_1->input_allowed_mask;
  for (VAR_7 = 0; VAR_7 < (sizeof(VAR_6) << 3); VAR_7++) {
   if (!((1UL << VAR_7) & VAR_6)) continue;
   FUNC_2(VAR_1,VAR_7);
   break;
  }
 } while (0);
 FUNC_0(VAR_1->big_lock);
 return VAR_4;
}
