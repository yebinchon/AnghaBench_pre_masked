
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int link_config; int flags; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ql_adapter*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ql_adapter *VAR_2)
{
 if (FUNC_2(VAR_2->ndev)) {
  FUNC_4(VAR_1, &VAR_2->flags);
  FUNC_1(VAR_2->ndev);
 } else
  FUNC_0(VAR_1, &VAR_2->flags);
 VAR_2->link_config |= VAR_0;
 return FUNC_3(VAR_2);
}
