
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {unsigned long status; TYPE_1__* hw; int trans; } ;
struct iwl_card_state_notif {int flags; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iwl_priv*,char*,char*,char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 struct iwl_rx_packet* FUNC_8 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_9 (int ,unsigned long*) ;
 scalar_t__ FUNC_10 (int ,unsigned long*) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct iwl_priv *VAR_10,
           struct iwl_rx_cmd_buffer *VAR_11)
{
 struct iwl_rx_packet *VAR_12 = FUNC_8(VAR_11);
 struct iwl_card_state_notif *VAR_13 = (void *)VAR_12->data;
 u32 VAR_14 = FUNC_7(VAR_13->flags);
 unsigned long VAR_15 = VAR_10->status;

 FUNC_0(VAR_10, "Card state received: HW:%s SW:%s CT:%s\n",
     (VAR_14 & VAR_6) ? "Kill" : "On",
     (VAR_14 & VAR_9) ? "Kill" : "On",
     (VAR_14 & VAR_3) ?
     "Reached" : "Not reached");

 if (VAR_14 & (VAR_9 | VAR_6 |
       VAR_3)) {

  FUNC_5(VAR_10->trans, VAR_2,
       VAR_0);

  FUNC_6(VAR_10->trans, VAR_4,
     VAR_5);

  if (!(VAR_14 & VAR_7)) {
   FUNC_5(VAR_10->trans, VAR_1,
        VAR_0);
   FUNC_6(VAR_10->trans, VAR_4,
     VAR_5);
  }
  if (VAR_14 & VAR_3)
   FUNC_3(VAR_10);
 }
 if (!(VAR_14 & VAR_3))
  FUNC_4(VAR_10);

 if (VAR_14 & VAR_6)
  FUNC_9(VAR_8, &VAR_10->status);
 else
  FUNC_1(VAR_8, &VAR_10->status);


 if (!(VAR_14 & VAR_7))
  FUNC_2(VAR_10);

 if ((FUNC_10(VAR_8, &VAR_15) !=
      FUNC_10(VAR_8, &VAR_10->status)))
  FUNC_11(VAR_10->hw->wiphy,
   FUNC_10(VAR_8, &VAR_10->status));
}
