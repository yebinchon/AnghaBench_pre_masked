
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct btc_bt_link_info {int slave_role; scalar_t__ pan_exist; scalar_t__ hid_exist; scalar_t__ pan_only; scalar_t__ a2dp_exist; scalar_t__ a2dp_only; scalar_t__ hid_only; } ;
struct btc_coexist {struct btc_bt_link_info bt_link_info; } ;
struct TYPE_4__ {int auto_tdma_adjust; } ;
struct TYPE_3__ {int low_priority_rx; int under_ips; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btc_coexist*,scalar_t__) ;
 int FUNC_1 (struct btc_coexist*,scalar_t__) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(
     struct btc_coexist *VAR_4,
     u8 VAR_5)
{
 struct btc_bt_link_info *VAR_6 = &VAR_4->bt_link_info;

 if ((VAR_3->low_priority_rx >= 950) && (!VAR_3->under_ips))
  VAR_6->slave_role = 1;
 else
  VAR_6->slave_role = 0;

 if (VAR_6->hid_only) {
  FUNC_0(VAR_4, VAR_5);
  VAR_2->auto_tdma_adjust = 0;
  return;
 } else if (VAR_6->a2dp_only) {
  if (VAR_5 == VAR_0) {
   FUNC_3(VAR_4, VAR_1,
      1, 32);
   FUNC_2(VAR_4,
            VAR_1, 4);
   VAR_2->auto_tdma_adjust = 0;
  } else {
   FUNC_1(VAR_4,
         VAR_5);
   FUNC_2(VAR_4,
            VAR_1, 1);
   VAR_2->auto_tdma_adjust = 1;
  }
 } else if (((VAR_6->a2dp_exist) && (VAR_6->pan_exist)) ||
     (VAR_6->hid_exist && VAR_6->a2dp_exist &&
      VAR_6->pan_exist)) {

  FUNC_3(VAR_4, VAR_1, 1, 13);
  FUNC_2(VAR_4, VAR_1, 4);
  VAR_2->auto_tdma_adjust = 0;
 } else if (VAR_6->hid_exist && VAR_6->a2dp_exist) {

  FUNC_3(VAR_4, VAR_1, 1, 14);
  VAR_2->auto_tdma_adjust = 0;

  FUNC_2(VAR_4, VAR_1, 4);
 } else if (VAR_6->pan_only ||
   (VAR_6->hid_exist && VAR_6->pan_exist)) {

  FUNC_3(VAR_4, VAR_1, 1, 3);
  FUNC_2(VAR_4, VAR_1, 4);
  VAR_2->auto_tdma_adjust = 0;
 } else {

  FUNC_3(VAR_4, VAR_1, 1, 33);
  FUNC_2(VAR_4, VAR_1, 4);
  VAR_2->auto_tdma_adjust = 0;
 }
}
