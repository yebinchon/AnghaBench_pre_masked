
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int service_task; int wq; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct stmmac_priv *VAR_2)
{
 if (!FUNC_2(VAR_0, &VAR_2->state) &&
     !FUNC_1(VAR_1, &VAR_2->state))
  FUNC_0(VAR_2->wq, &VAR_2->service_task);
}
