
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {scalar_t__ state; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct bnx2x *VAR_1)
{
 if (FUNC_4(VAR_1->dev)) {
  FUNC_2(VAR_1);
  if (FUNC_0(VAR_1))
   FUNC_3(VAR_1);
  FUNC_1(VAR_1);
  if (VAR_1->state == VAR_0)
   FUNC_5(VAR_1->dev);
 }
}
