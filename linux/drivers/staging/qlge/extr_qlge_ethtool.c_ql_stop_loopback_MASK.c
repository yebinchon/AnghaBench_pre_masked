
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int flags; int ndev; int link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ql_adapter*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ql_adapter *VAR_2)
{
 VAR_2->link_config &= ~VAR_0;
 FUNC_2(VAR_2);
 if (FUNC_3(VAR_1, &VAR_2->flags)) {
  FUNC_1(VAR_2->ndev);
  FUNC_0(VAR_1, &VAR_2->flags);
 }
}
