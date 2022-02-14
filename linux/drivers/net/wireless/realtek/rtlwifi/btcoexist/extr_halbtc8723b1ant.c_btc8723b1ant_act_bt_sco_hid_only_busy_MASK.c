
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btc_bt_link_info {scalar_t__ sco_exist; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_bt_link_info bt_link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btc_coexist*,int ,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct btc_coexist *VAR_2,
        u8 VAR_3)
{
 struct btc_bt_link_info *VAR_4 = &VAR_2->bt_link_info;
 bool VAR_5 = 0;

 VAR_2->btc_get(VAR_2, VAR_0,
      &VAR_5);


 if (VAR_4->sco_exist) {
  FUNC_1(VAR_2, VAR_1, 1, 5);
  FUNC_0(VAR_2, VAR_1, 5);
 } else {

  FUNC_1(VAR_2, VAR_1, 1, 6);
  FUNC_0(VAR_2, VAR_1, 5);
 }
}
