
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_stack_info {int hci_version; scalar_t__ profile_notified; } ;
struct btc_board_info {int btdm_ant_pos; int btdm_ant_num; int pg_ant_num; } ;
struct btc_coexist {int auto_report_1ant; int (* btc_get ) (struct btc_coexist*,int ,int *) ;struct btc_stack_info stack_info; struct btc_board_info board_info; struct rtl_priv* adapter; } ;
struct TYPE_2__ {int special_pkt_period_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct btc_coexist*,int ,int *) ;
 int FUNC_4 (struct btc_coexist*,int ,int *) ;

void FUNC_5(struct btc_coexist *VAR_7)
{
 struct rtl_priv *VAR_8 = VAR_7->adapter;
 static u8 VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;
 struct btc_board_info *VAR_12 = &VAR_7->board_info;
 struct btc_stack_info *VAR_13 = &VAR_7->stack_info;

 FUNC_0(VAR_8, VAR_2, VAR_3,
   "[BTCoex], ==========================Periodical===========================\n");

 if (VAR_9 <= 5) {
  VAR_9 += 1;
  FUNC_0(VAR_8, VAR_2, VAR_3,
    "[BTCoex], ****************************************************************\n");
  FUNC_0(VAR_8, VAR_2, VAR_3,
    "[BTCoex], Ant PG Num/ Ant Mech/ Ant Pos = %d/ %d/ %d\n",
         VAR_12->pg_ant_num,
         VAR_12->btdm_ant_num,
         VAR_12->btdm_ant_pos);
  FUNC_0(VAR_8, VAR_2, VAR_3,
    "[BTCoex], BT stack/ hci ext ver = %s / %d\n",
         VAR_13->profile_notified ? "Yes" : "No",
         VAR_13->hci_version);
  VAR_7->btc_get(VAR_7, VAR_0,
       &VAR_11);
  VAR_7->btc_get(VAR_7, VAR_1, &VAR_10);
  FUNC_0(VAR_8, VAR_2, VAR_3,
    "[BTCoex], CoexVer/ FwVer/ PatchVer = %d_%x/ 0x%x/ 0x%x(%d)\n",
         VAR_6,
         VAR_5,
         VAR_10, VAR_11,
         VAR_11);
  FUNC_0(VAR_8, VAR_2, VAR_3,
    "[BTCoex], ****************************************************************\n");
 }

 if (!VAR_7->auto_report_1ant) {
  FUNC_2(VAR_7);
  FUNC_1(VAR_7);
 } else {
  VAR_4->special_pkt_period_cnt++;
 }
}
