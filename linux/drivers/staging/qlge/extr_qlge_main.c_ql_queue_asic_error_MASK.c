
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int asic_reset_work; int workqueue; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct ql_adapter *VAR_2)
{
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);




 FUNC_0(VAR_0, &VAR_2->flags);



 FUNC_4(VAR_1, &VAR_2->flags);
 FUNC_3(VAR_2->workqueue, &VAR_2->asic_reset_work, 0);
}
