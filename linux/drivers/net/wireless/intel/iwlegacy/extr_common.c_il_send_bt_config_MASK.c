
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;
struct il_bt_cmd {scalar_t__ flags; int kill_cts_mask; int kill_ack_mask; int max_kill; int lead_time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct il_priv*,int ,int,struct il_bt_cmd*) ;

void
FUNC_3(struct il_priv *VAR_6)
{
 struct il_bt_cmd VAR_7 = {
  .lead_time = VAR_2,
  .max_kill = VAR_3,
  .kill_ack_mask = 0,
  .kill_cts_mask = 0,
 };

 if (!VAR_5)
  VAR_7.flags = VAR_0;
 else
  VAR_7.flags = VAR_1;

 FUNC_0("BT coex %s\n",
        (VAR_7.flags == VAR_0) ? "disable" : "active");

 if (FUNC_2(VAR_6, VAR_4, sizeof(struct il_bt_cmd), &VAR_7))
  FUNC_1("failed to send BT Coex Config\n");
}
