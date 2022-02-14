
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btc_bt_link_info {scalar_t__ pan_exist; scalar_t__ a2dp_exist; scalar_t__ hid_exist; scalar_t__ sco_exist; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_bt_link_info bt_link_info; } ;
struct TYPE_2__ {scalar_t__ c2h_bt_remote_name_req; int wifi_is_high_pri_task; scalar_t__ bt_abnormal_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct btc_coexist*,int ,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int ,int,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;
 int FUNC_5 (struct btc_coexist*,int ,int*) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;
 int FUNC_7 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_8(struct btc_coexist *VAR_8)
{
 struct btc_bt_link_info *VAR_9 = &VAR_8->bt_link_info;
 bool VAR_10 = 0, VAR_11 = 0;
 bool VAR_12 = 0, VAR_13 = 0;

 VAR_8->btc_get(VAR_8, VAR_1,
      &VAR_11);
 VAR_8->btc_get(VAR_8, VAR_3,
      &VAR_10);
 VAR_8->btc_get(VAR_8, VAR_2, &VAR_12);
 VAR_8->btc_set(VAR_8, VAR_5, &VAR_13);

 if (VAR_7->bt_abnormal_scan) {
  FUNC_2(VAR_8, VAR_6, 1, 33);
  FUNC_0(VAR_8, VAR_6, 7);
 } else if (!VAR_10 && !VAR_7->wifi_is_high_pri_task) {
  FUNC_1(VAR_8, VAR_4,
       0x0, 0x0);
  FUNC_2(VAR_8, VAR_6, 0, 8);
  FUNC_3(VAR_8, VAR_0,
          VAR_6, 0, 0);
  FUNC_0(VAR_8, VAR_6, 0);
 } else if (VAR_9->sco_exist || VAR_9->hid_exist ||
     VAR_9->a2dp_exist) {

  FUNC_1(VAR_8, VAR_4,
       0x0, 0x0);
  if (VAR_7->c2h_bt_remote_name_req)
   FUNC_2(VAR_8, VAR_6, 1,
      33);
  else
   FUNC_2(VAR_8, VAR_6, 1,
      32);

  FUNC_0(VAR_8, VAR_6, 4);
 } else if (VAR_9->pan_exist || VAR_12) {
  FUNC_1(VAR_8, VAR_4,
       0x0, 0x0);
  if (VAR_7->c2h_bt_remote_name_req)
   FUNC_2(VAR_8, VAR_6, 1,
      33);
  else
   FUNC_2(VAR_8, VAR_6, 1,
      32);

  FUNC_0(VAR_8, VAR_6, 4);
 } else {
  FUNC_1(VAR_8, VAR_4,
       0x0, 0x0);
  FUNC_2(VAR_8, VAR_6, 0, 8);
  FUNC_3(VAR_8, VAR_0,
          VAR_6, 0, 0);
  FUNC_0(VAR_8, VAR_6, 7);
 }
}
