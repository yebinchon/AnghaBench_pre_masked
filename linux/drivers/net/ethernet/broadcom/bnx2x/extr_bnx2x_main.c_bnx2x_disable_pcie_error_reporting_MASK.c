
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int flags; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_1)
{
 if (VAR_1->flags & VAR_0) {
  FUNC_0(VAR_1->pdev);
  VAR_1->flags &= ~VAR_0;
 }
}
