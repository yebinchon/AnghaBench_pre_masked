
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2 {int flags; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bnx2 *VAR_4)
{

 FUNC_0(VAR_4);
 if (VAR_4->flags & VAR_1)
  FUNC_1(VAR_4->pdev);
 else if (VAR_4->flags & VAR_2)
  FUNC_2(VAR_4->pdev);

 VAR_4->flags &= ~(VAR_3 | VAR_0);
}
