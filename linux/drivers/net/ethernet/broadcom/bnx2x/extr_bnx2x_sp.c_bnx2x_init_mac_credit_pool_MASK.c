
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x_credit_pool_obj {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (struct bnx2x_credit_pool_obj*,int,int) ;

void FUNC_5(struct bnx2x *VAR_5,
    struct bnx2x_credit_pool_obj *VAR_6, u8 VAR_7,
    u8 VAR_8)
{



 int VAR_9;

 if (FUNC_0(VAR_5)) {

  if (!FUNC_2(VAR_5))
   VAR_9 = (VAR_3 / 2) - VAR_2;
  else
   VAR_9 = 5 - VAR_1;

  FUNC_4(VAR_6, VAR_7 * VAR_9, VAR_9);

 } else if (FUNC_1(VAR_5)) {



  if ((VAR_8 > 0)) {
   if (!FUNC_2(VAR_5))
    VAR_9 = (VAR_4 / (2*VAR_8));
   else
    VAR_9 = 5;
   FUNC_4(VAR_6, VAR_7 * VAR_9, VAR_9);
  } else {

   FUNC_4(VAR_6, 0, 0);
  }

 } else {




  if (VAR_8 > 0) {
   if (!FUNC_2(VAR_5))
    VAR_9 = FUNC_3(VAR_5, VAR_8);
   else
    VAR_9 = 5;




   FUNC_4(VAR_6, -1, VAR_9);
  } else {

   FUNC_4(VAR_6, 0, 0);
  }
 }
}
