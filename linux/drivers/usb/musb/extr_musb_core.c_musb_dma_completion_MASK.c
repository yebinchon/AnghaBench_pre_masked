
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct musb {int dummy; } ;


 int FUNC_0 (struct musb*) ;
 scalar_t__ FUNC_1 (struct musb*) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (struct musb*,scalar_t__) ;
 int FUNC_4 (struct musb*,scalar_t__) ;
 int FUNC_5 (struct musb*) ;
 int FUNC_6 (struct musb*,scalar_t__) ;
 int FUNC_7 (struct musb*,scalar_t__) ;

void FUNC_8(struct musb *VAR_0, u8 VAR_1, u8 VAR_2)
{


 if (!VAR_1) {
  if (!FUNC_0(VAR_0)) {

   if (FUNC_1(VAR_0))
    FUNC_5(VAR_0);
   else
    FUNC_2(VAR_0);
  }
 } else {

  if (VAR_2) {
   if (FUNC_1(VAR_0))
    FUNC_7(VAR_0, VAR_1);
   else
    FUNC_4(VAR_0, VAR_1);
  } else {

   if (FUNC_1(VAR_0))
    FUNC_6(VAR_0, VAR_1);
   else
    FUNC_3(VAR_0, VAR_1);
  }
 }
}
