
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bnx2x_credit_pool_obj {int dummy; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x_credit_pool_obj*,int,int) ;

void FUNC_3(struct bnx2x *VAR_0,
     struct bnx2x_credit_pool_obj *VAR_1,
     u8 VAR_2,
     u8 VAR_3)
{
 if (FUNC_0(VAR_0)) {



  FUNC_2(VAR_1, 0, -1);
 } else {



  if (VAR_3 > 0) {
   int VAR_4 = FUNC_1(VAR_0, VAR_3);

   FUNC_2(VAR_1, -1 , VAR_4);
  } else

   FUNC_2(VAR_1, 0, 0);
 }
}
