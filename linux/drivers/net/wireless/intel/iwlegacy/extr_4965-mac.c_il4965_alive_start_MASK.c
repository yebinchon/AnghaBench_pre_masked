
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct il_rxon_cmd {int filter_flags; } ;
struct TYPE_5__ {int filter_flags; } ;
struct TYPE_4__ {scalar_t__ is_valid; } ;
struct il_priv {int restart; int workqueue; int wait_command_queue; int status; TYPE_3__* ops; TYPE_2__ staging; int active; int active_rate; int hw; TYPE_1__ card_alive; } ;
struct TYPE_6__ {int (* set_rxon_chain ) (struct il_priv*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*) ;
 scalar_t__ FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*) ;
 scalar_t__ FUNC_9 (struct il_priv*) ;
 scalar_t__ FUNC_10 (struct il_priv*) ;
 int FUNC_11 (struct il_priv*,int) ;
 int FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (struct il_priv*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void
FUNC_18(struct il_priv *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0("Runtime Alive received.\n");

 if (VAR_5->card_alive.is_valid != VAR_4) {


  FUNC_0("Alive failed.\n");
  goto restart;
 }




 if (FUNC_6(VAR_5)) {


  FUNC_0("Bad runtime uCode load.\n");
  goto restart;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_1("Could not complete ALIVE transition [ntf]: %d\n", VAR_6);
  goto restart;
 }


 FUNC_15(VAR_2, &VAR_5->status);


 FUNC_13(VAR_5);

 if (FUNC_10(VAR_5))
  return;

 FUNC_2(VAR_5->hw);

 VAR_5->active_rate = VAR_0;

 FUNC_11(VAR_5, 1);
 FUNC_0("Updated power mode\n");

 if (FUNC_9(VAR_5)) {
  struct il_rxon_cmd *VAR_7 =
      (struct il_rxon_cmd *)&VAR_5->active;

  VAR_5->staging.filter_flags |= VAR_1;
  VAR_7->filter_flags &= ~VAR_1;
 } else {

  FUNC_8(VAR_5);

  if (VAR_5->ops->set_rxon_chain)
   VAR_5->ops->set_rxon_chain(VAR_5);
 }


 FUNC_12(VAR_5);

 FUNC_4(VAR_5);

 FUNC_15(VAR_3, &VAR_5->status);


 FUNC_7(VAR_5);


 FUNC_5(VAR_5);

 FUNC_0("ALIVE processing complete.\n");
 FUNC_17(&VAR_5->wait_command_queue);

 return;

restart:
 FUNC_14(VAR_5->workqueue, &VAR_5->restart);
}
