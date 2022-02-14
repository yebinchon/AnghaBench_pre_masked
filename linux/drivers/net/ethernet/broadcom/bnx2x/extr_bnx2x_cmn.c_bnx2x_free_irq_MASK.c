
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {int flags; TYPE_1__* dev; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;

void FUNC_5(struct bnx2x *VAR_2)
{
 if (VAR_2->flags & VAR_0 &&
     !(VAR_2->flags & VAR_1)) {
  int VAR_3 = FUNC_0(VAR_2) + FUNC_1(VAR_2);


  if (FUNC_2(VAR_2))
   VAR_3++;

  FUNC_3(VAR_2, VAR_3);
 } else {
  FUNC_4(VAR_2->dev->irq, VAR_2->dev);
 }
}
