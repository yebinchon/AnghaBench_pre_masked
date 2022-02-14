
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_valid; } ;
struct il_priv {int restart; int workqueue; TYPE_1__ card_alive_init; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct il_priv*) ;
 scalar_t__ FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_1)
{

 if (VAR_1->card_alive_init.is_valid != VAR_0) {


  FUNC_0("Initialize Alive failed.\n");
  goto restart;
 }




 if (FUNC_2(VAR_1)) {


  FUNC_0("Bad \"initialize\" uCode load.\n");
  goto restart;
 }




 FUNC_0("Initialization Alive received.\n");
 if (FUNC_1(VAR_1)) {


  FUNC_0("Couldn't set up uCode pointers.\n");
  goto restart;
 }
 return;

restart:
 FUNC_3(VAR_1->workqueue, &VAR_1->restart);
}
