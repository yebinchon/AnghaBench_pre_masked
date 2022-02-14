
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btc_bt_link_info {scalar_t__ pan_exist; scalar_t__ hid_exist; scalar_t__ a2dp_exist; scalar_t__ hid_only; scalar_t__ sco_exist; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_bt_link_info bt_link_info; } ;
struct TYPE_2__ {int wifi_is_high_pri_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct btc_coexist*,int ,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;
 int FUNC_5 (struct btc_coexist*,int ,int*) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_7(struct btc_coexist *VAR_7)
{
 struct btc_bt_link_info *VAR_8 = &VAR_7->bt_link_info;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0, VAR_12 = 0;

 VAR_7->btc_get(VAR_7, VAR_2,
      &VAR_9);
 VAR_7->btc_get(VAR_7, VAR_0,
      &VAR_10);
 VAR_7->btc_get(VAR_7, VAR_1, &VAR_11);
 VAR_7->btc_set(VAR_7, VAR_4, &VAR_12);

 if (!VAR_9 && !VAR_6->wifi_is_high_pri_task) {
  FUNC_1(VAR_7,
           VAR_3, 0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 0, 8);
  FUNC_0(VAR_7, VAR_5, 0);
 } else if ((VAR_8->sco_exist) || (VAR_8->a2dp_exist) ||
     (VAR_8->hid_only)) {

  FUNC_1(VAR_7,
           VAR_3, 0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 1, 32);
  FUNC_0(VAR_7, VAR_5, 4);
 } else if ((VAR_8->a2dp_exist) && (VAR_8->hid_exist)) {

  FUNC_1(VAR_7, VAR_3,
           0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 1, 14);

  FUNC_0(VAR_7, VAR_5, 1);
 } else if ((VAR_8->pan_exist) || (VAR_11)) {
  FUNC_1(VAR_7, VAR_3,
           0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 1, 20);

  FUNC_0(VAR_7, VAR_5, 4);
 } else {
  FUNC_1(VAR_7, VAR_3,
           0x0, 0x0);
  FUNC_2(VAR_7, VAR_5, 0, 8);
  FUNC_0(VAR_7, VAR_5, 7);
 }
}
