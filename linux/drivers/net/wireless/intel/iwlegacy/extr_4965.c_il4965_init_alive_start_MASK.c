
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int restart; int workqueue; int temperature; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*) ;
 scalar_t__ FUNC_2 (struct il_priv*) ;
 scalar_t__ FUNC_3 (struct il_priv*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct il_priv *VAR_0)
{



 if (FUNC_3(VAR_0)) {


  FUNC_0("Bad \"initialize\" uCode load.\n");
  goto restart;
 }


 VAR_0->temperature = FUNC_1(VAR_0);




 FUNC_0("Initialization Alive received.\n");
 if (FUNC_2(VAR_0)) {


  FUNC_0("Couldn't set up uCode pointers.\n");
  goto restart;
 }
 return;

restart:
 FUNC_4(VAR_0->workqueue, &VAR_0->restart);
}
