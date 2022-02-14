
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_rxon_cmd {int flags; } ;
struct TYPE_4__ {int protection; int extension_chan_offset; int enabled; } ;
struct il_priv {TYPE_2__ ht; TYPE_1__* ops; struct il_rxon_cmd staging; } ;
struct il_ht_config {int dummy; } ;
struct TYPE_3__ {int (* set_rxon_chain ) (struct il_priv*) ;} ;


 int FUNC_0 (char*,int ,int,int ) ;
 int VAR_0 ;



 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct il_priv*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct il_priv*) ;

__attribute__((used)) static void
FUNC_6(struct il_priv *VAR_9, struct il_ht_config *VAR_10)
{
 struct il_rxon_cmd *VAR_11 = &VAR_9->staging;

 if (!VAR_9->ht.enabled) {
  VAR_11->flags &=
      ~(VAR_3 |
        VAR_5 | VAR_6
        | VAR_8);
  return;
 }

 VAR_11->flags |=
     FUNC_2(VAR_9->ht.protection << VAR_7);




 VAR_11->flags &=
     ~(VAR_3 | VAR_5);
 if (FUNC_3(VAR_9, ((void*)0))) {

  if (VAR_9->ht.protection == VAR_0) {
   VAR_11->flags |= VAR_4;

   switch (VAR_9->ht.extension_chan_offset) {
   case 130:
    VAR_11->flags &=
        ~VAR_5;
    break;
   case 129:
    VAR_11->flags |= VAR_5;
    break;
   }
  } else {

   switch (VAR_9->ht.extension_chan_offset) {
   case 130:
    VAR_11->flags &=
        ~(VAR_5);
    VAR_11->flags |= VAR_2;
    break;
   case 129:
    VAR_11->flags |= VAR_5;
    VAR_11->flags |= VAR_2;
    break;
   case 128:
   default:

    FUNC_1("invalid extension channel offset\n");
    break;
   }
  }
 } else {
  VAR_11->flags |= VAR_1;
 }

 if (VAR_9->ops->set_rxon_chain)
  VAR_9->ops->set_rxon_chain(VAR_9);

 FUNC_0("rxon flags 0x%X operation mode :0x%X "
  "extension channel offset 0x%x\n", FUNC_4(VAR_11->flags),
  VAR_9->ht.protection, VAR_9->ht.extension_chan_offset);
}
