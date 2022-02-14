
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_bt_link_info {int slave_role; } ;
struct btc_coexist {int (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;struct btc_bt_link_info bt_link_info; struct rtl_priv* adapter; } ;
struct TYPE_2__ {int high_priority_tx; int high_priority_rx; int low_priority_tx; int low_priority_rx; int under_ips; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,int,int,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct btc_coexist*,int) ;
 int FUNC_2 (struct btc_coexist*,int) ;
 int FUNC_3 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_4(struct btc_coexist *VAR_5)
{
 struct rtl_priv *VAR_6 = VAR_5->adapter;
 struct btc_bt_link_info *VAR_7 = &VAR_5->bt_link_info;
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;

 VAR_8 = 0x770;
 VAR_9 = 0x774;

 VAR_10 = VAR_5->btc_read_4byte(VAR_5, VAR_8);
 VAR_11 = VAR_10 & VAR_3;
 VAR_12 = (VAR_10 & VAR_2) >> 16;

 VAR_10 = VAR_5->btc_read_4byte(VAR_5, VAR_9);
 VAR_13 = VAR_10 & VAR_3;
 VAR_14 = (VAR_10 & VAR_2) >> 16;

 VAR_4->high_priority_tx = VAR_11;
 VAR_4->high_priority_rx = VAR_12;
 VAR_4->low_priority_tx = VAR_13;
 VAR_4->low_priority_rx = VAR_14;

 if ((VAR_4->low_priority_rx >= 950) &&
     (VAR_4->low_priority_rx >= VAR_4->low_priority_tx) &&
     (!VAR_4->under_ips))
  VAR_7->slave_role = 1;
 else
  VAR_7->slave_role = 0;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "[BTCoex], High Priority Tx/Rx (reg 0x%x) = 0x%x(%d)/0x%x(%d)\n",
      VAR_8, VAR_11, VAR_11, VAR_12, VAR_12);
 FUNC_0(VAR_6, VAR_0, VAR_1,
   "[BTCoex], Low Priority Tx/Rx (reg 0x%x) = 0x%x(%d)/0x%x(%d)\n",
   VAR_9, VAR_13, VAR_13, VAR_14, VAR_14);


 VAR_5->btc_write_1byte(VAR_5, 0x76e, 0xc);
}
