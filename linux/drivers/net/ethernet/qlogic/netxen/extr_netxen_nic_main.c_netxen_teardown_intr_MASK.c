
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int flags; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct netxen_adapter *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  FUNC_1(VAR_2->pdev);
 if (VAR_2->flags & VAR_1)
  FUNC_0(VAR_2->pdev);
}
