
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct stmmac_priv *VAR_3)
{
 if (!FUNC_8(VAR_2, &VAR_3->state))
  return;
 if (FUNC_10(VAR_0, &VAR_3->state))
  return;

 FUNC_3(VAR_3->dev, "Reset adapter.\n");

 FUNC_5();
 FUNC_4(VAR_3->dev);
 while (FUNC_9(VAR_1, &VAR_3->state))
  FUNC_11(1000, 2000);

 FUNC_7(VAR_0, &VAR_3->state);
 FUNC_1(VAR_3->dev);
 FUNC_2(VAR_3->dev, ((void*)0));
 FUNC_0(VAR_0, &VAR_3->state);
 FUNC_0(VAR_1, &VAR_3->state);
 FUNC_6();
}
