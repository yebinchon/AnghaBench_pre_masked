
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ card_state_notif; } ;
struct il_rx_pkt {TYPE_2__ u; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {unsigned long status; int wait_command_queue; TYPE_3__* hw; } ;
struct TYPE_6__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct il_priv*,int ,int ) ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (int ) ;
 struct il_rx_pkt* FUNC_5 (struct il_rx_buf*) ;
 int FUNC_6 (int ,unsigned long*) ;
 scalar_t__ FUNC_7 (int ,unsigned long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct il_priv *VAR_5, struct il_rx_buf *VAR_6)
{
 struct il_rx_pkt *VAR_7 = FUNC_5(VAR_6);
 u32 VAR_8 = FUNC_4(VAR_7->u.card_state_notif.flags);
 unsigned long VAR_9 = VAR_5->status;

 FUNC_0("Card state received: HW:%s SW:%s\n",
  (VAR_8 & VAR_2) ? "Kill" : "On",
  (VAR_8 & VAR_3) ? "Kill" : "On");

 FUNC_1(VAR_5, VAR_1, VAR_0);

 if (VAR_8 & VAR_2)
  FUNC_6(VAR_4, &VAR_5->status);
 else
  FUNC_2(VAR_4, &VAR_5->status);

 FUNC_3(VAR_5);

 if ((FUNC_7(VAR_4, &VAR_9) !=
      FUNC_7(VAR_4, &VAR_5->status)))
  FUNC_9(VAR_5->hw->wiphy,
       FUNC_7(VAR_4, &VAR_5->status));
 else
  FUNC_8(&VAR_5->wait_command_queue);
}
