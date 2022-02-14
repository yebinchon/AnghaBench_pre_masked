
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int protection; int extension_chan_offset; int enabled; } ;
struct iwl_rxon_cmd {int flags; } ;
struct iwl_rxon_context {TYPE_1__ ht; struct iwl_rxon_cmd staging; } ;
struct iwl_priv {int dummy; } ;
struct iwl_ht_config {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct iwl_priv*,char*,int ,int,int ) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*,int *) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct iwl_priv *VAR_9,
        struct iwl_ht_config *VAR_10,
        struct iwl_rxon_context *VAR_11)
{
 struct iwl_rxon_cmd *VAR_12 = &VAR_11->staging;

 if (!VAR_11->ht.enabled) {
  VAR_12->flags &= ~(VAR_3 |
   VAR_5 |
   VAR_6 |
   VAR_8);
  return;
 }




 VAR_12->flags |= FUNC_2(VAR_11->ht.protection <<
       VAR_7);




 VAR_12->flags &= ~(VAR_3 |
    VAR_5);
 if (FUNC_3(VAR_9, VAR_11, ((void*)0))) {

  if (VAR_11->ht.protection ==
      VAR_0) {
   VAR_12->flags |= VAR_4;




   switch (VAR_11->ht.extension_chan_offset) {
   case 130:
    VAR_12->flags &=
     ~VAR_5;
    break;
   case 129:
    VAR_12->flags |=
     VAR_5;
    break;
   }
  } else {




   switch (VAR_11->ht.extension_chan_offset) {
   case 130:
    VAR_12->flags &=
     ~(VAR_5);
    VAR_12->flags |= VAR_2;
    break;
   case 129:
    VAR_12->flags |= VAR_5;
    VAR_12->flags |= VAR_2;
    break;
   case 128:
   default:




    FUNC_1(VAR_9,
     "invalid extension channel offset\n");
    break;
   }
  }
 } else {
  VAR_12->flags |= VAR_1;
 }

 FUNC_4(VAR_9, VAR_11);

 FUNC_0(VAR_9, "rxon flags 0x%X operation mode :0x%X "
   "extension channel offset 0x%x\n",
   FUNC_5(VAR_12->flags), VAR_11->ht.protection,
   VAR_11->ht.extension_chan_offset);
}
