
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2 {int phy_lock; int dev; scalar_t__ link_up; int intr_sem; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct bnx2 *VAR_0, bool VAR_1)
{
 if (FUNC_0(&VAR_0->intr_sem)) {
  if (FUNC_5(VAR_0->dev)) {
   FUNC_6(VAR_0->dev);
   FUNC_7(&VAR_0->phy_lock);
   if (VAR_0->link_up)
    FUNC_4(VAR_0->dev);
   FUNC_8(&VAR_0->phy_lock);
   FUNC_3(VAR_0);
   FUNC_2(VAR_0);
   if (VAR_1)
    FUNC_1(VAR_0);
  }
 }
}
