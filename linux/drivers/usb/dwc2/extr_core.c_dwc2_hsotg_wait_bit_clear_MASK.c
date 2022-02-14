
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dwc2_hsotg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dwc2_hsotg*,scalar_t__) ;
 int FUNC_1 (int) ;

int FUNC_2(struct dwc2_hsotg *VAR_1, u32 VAR_2, u32 VAR_3,
         u32 VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (!(FUNC_0(VAR_1, VAR_2) & VAR_3))
   return 0;
  FUNC_1(1);
 }

 return -VAR_0;
}
