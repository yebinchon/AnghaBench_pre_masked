
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int pdev; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ena_adapter *VAR_1)
{
 if (FUNC_1(VAR_0, &VAR_1->flags))
  FUNC_0(VAR_1->pdev);
}
