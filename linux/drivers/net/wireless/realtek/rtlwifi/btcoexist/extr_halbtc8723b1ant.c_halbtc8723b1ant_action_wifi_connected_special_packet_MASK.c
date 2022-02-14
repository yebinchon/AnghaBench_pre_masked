
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btc_bt_link_info {scalar_t__ pan_exist; scalar_t__ a2dp_exist; scalar_t__ hid_exist; scalar_t__ sco_exist; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_bt_link_info bt_link_info; } ;
struct TYPE_2__ {int num_of_profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct btc_coexist*,int ,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int ,int,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_5(
      struct btc_coexist *VAR_5)
{
 struct btc_bt_link_info *VAR_6 = &VAR_5->bt_link_info;
 bool VAR_7 = 0;

 VAR_5->btc_get(VAR_5, VAR_1, &VAR_7);


 if ((VAR_7) &&
     ((VAR_6->pan_exist) || (VAR_4->num_of_profile >= 2)))
  return;

 FUNC_1(VAR_5, VAR_2,
      0x0, 0x0);


 if ((VAR_6->sco_exist) || (VAR_6->hid_exist)) {
  FUNC_2(VAR_5, VAR_3, 1, 32);
  FUNC_0(VAR_5, VAR_3, 5);
 } else if (VAR_6->a2dp_exist) {
  FUNC_2(VAR_5, VAR_3, 1, 32);
  FUNC_0(VAR_5, VAR_3, 4);
 } else if (VAR_6->pan_exist) {
  FUNC_2(VAR_5, VAR_3, 1, 20);
  FUNC_0(VAR_5, VAR_3, 4);
 } else {
  FUNC_2(VAR_5, VAR_3, 0, 8);
  FUNC_3(VAR_5, VAR_0,
          VAR_3, 0, 0);
  FUNC_0(VAR_5, VAR_3, 2);
 }
}
