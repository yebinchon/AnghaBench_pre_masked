
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btc_bt_link_info {int bt_link_exist; int pan_exist; int sco_only; int a2dp_only; int pan_only; int hid_only; scalar_t__ hid_exist; scalar_t__ a2dp_exist; scalar_t__ sco_exist; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_bt_link_info bt_link_info; } ;
struct TYPE_2__ {int bt_link_exist; int pan_exist; scalar_t__ hid_exist; scalar_t__ a2dp_exist; scalar_t__ sco_exist; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct btc_coexist *VAR_2)
{
 struct btc_bt_link_info *VAR_3 = &VAR_2->bt_link_info;
 bool VAR_4 = 0;

 VAR_2->btc_get(VAR_2, VAR_0, &VAR_4);

 VAR_3->bt_link_exist = VAR_1->bt_link_exist;
 VAR_3->sco_exist = VAR_1->sco_exist;
 VAR_3->a2dp_exist = VAR_1->a2dp_exist;
 VAR_3->pan_exist = VAR_1->pan_exist;
 VAR_3->hid_exist = VAR_1->hid_exist;


 if (VAR_4) {
  VAR_3->pan_exist = 1;
  VAR_3->bt_link_exist = 1;
 }


 if (VAR_3->sco_exist &&
     !VAR_3->a2dp_exist &&
     !VAR_3->pan_exist &&
     !VAR_3->hid_exist)
  VAR_3->sco_only = 1;
 else
  VAR_3->sco_only = 0;


 if (!VAR_3->sco_exist &&
     VAR_3->a2dp_exist &&
     !VAR_3->pan_exist &&
     !VAR_3->hid_exist)
  VAR_3->a2dp_only = 1;
 else
  VAR_3->a2dp_only = 0;


 if (!VAR_3->sco_exist &&
     !VAR_3->a2dp_exist &&
     VAR_3->pan_exist &&
     !VAR_3->hid_exist)
  VAR_3->pan_only = 1;
 else
  VAR_3->pan_only = 0;


 if (!VAR_3->sco_exist &&
     !VAR_3->a2dp_exist &&
     !VAR_3->pan_exist &&
     VAR_3->hid_exist)
  VAR_3->hid_only = 1;
 else
  VAR_3->hid_only = 0;
}
