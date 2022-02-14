
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int flags; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_3)
{
 if (VAR_3->flags & VAR_0) {
  FUNC_1(VAR_3->pdev);
  VAR_3->flags &= ~(VAR_0 | VAR_2);
 } else if (VAR_3->flags & VAR_1) {
  FUNC_0(VAR_3->pdev);
  VAR_3->flags &= ~VAR_1;
 }
}
