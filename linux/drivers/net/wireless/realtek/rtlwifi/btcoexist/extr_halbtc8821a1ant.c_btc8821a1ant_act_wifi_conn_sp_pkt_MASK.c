
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btc_bt_link_info {scalar_t__ pan_exist; scalar_t__ a2dp_exist; scalar_t__ hid_exist; scalar_t__ sco_exist; } ;
struct btc_coexist {struct btc_bt_link_info bt_link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btc_coexist*,int ,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct btc_coexist *VAR_2)
{
 struct btc_bt_link_info *VAR_3 = &VAR_2->bt_link_info;

 FUNC_1(VAR_2, VAR_0,
          0x0, 0x0);


 if ((VAR_3->sco_exist) || (VAR_3->hid_exist) ||
     (VAR_3->a2dp_exist)) {
  FUNC_2(VAR_2, VAR_1, 1, 32);
  FUNC_0(VAR_2, VAR_1, 4);
 }

 if ((VAR_3->hid_exist) && (VAR_3->a2dp_exist)) {
  FUNC_2(VAR_2, VAR_1, 1, 14);
  FUNC_0(VAR_2, VAR_1, 1);
 } else if (VAR_3->pan_exist) {
  FUNC_2(VAR_2, VAR_1, 1, 20);
  FUNC_0(VAR_2, VAR_1, 4);
 } else {
  FUNC_2(VAR_2, VAR_1, 0, 8);
  FUNC_0(VAR_2, VAR_1, 2);
 }
}
