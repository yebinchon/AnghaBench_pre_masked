
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_list {int dummy; } ;
struct ql_adapter {int timer; int ndev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ql_adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ql_adapter* VAR_4 ;
 int FUNC_4 (struct ql_adapter*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_6)
{
 struct ql_adapter *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);
 u32 VAR_8 = 0;

 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (FUNC_3(VAR_7->pdev)) {
  FUNC_2(VAR_7, VAR_2, VAR_7->ndev, "EEH STS = 0x%.08x.\n", VAR_8);
  return;
 }

 FUNC_1(&VAR_7->timer, VAR_3 + (5*VAR_0));
}
