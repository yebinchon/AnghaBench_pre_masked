
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct btc_bt_link_info {scalar_t__ pan_exist; scalar_t__ a2dp_exist; scalar_t__ hid_exist; scalar_t__ pan_only; scalar_t__ a2dp_only; scalar_t__ hid_only; } ;
struct btc_coexist {struct btc_bt_link_info bt_link_info; } ;
struct TYPE_2__ {int auto_tdma_adjust; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btc_coexist*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct btc_coexist*,int,int,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_4(struct btc_coexist *VAR_5,
        u8 VAR_6)
{
 u8 VAR_7;

 struct btc_bt_link_info *VAR_8 = &VAR_5->bt_link_info;

 VAR_7 = FUNC_1(VAR_5, 2, 28, 0);

 if (VAR_8->hid_only) {

  FUNC_0(VAR_5,
            VAR_6);
  VAR_4->auto_tdma_adjust = 0;
  return;
 } else if (VAR_8->a2dp_only) {

  if (VAR_6 == VAR_2) {
   FUNC_3(VAR_5, VAR_3, 1, 32);
   FUNC_2(VAR_5,
         VAR_3, 1);
   VAR_4->auto_tdma_adjust = 0;
  } else if ((VAR_7 != VAR_0) &&
      (VAR_7 == VAR_1)) {
   FUNC_3(VAR_5, VAR_3, 1, 14);
   FUNC_2(VAR_5,
         VAR_3, 1);
  } else {

   FUNC_3(VAR_5, VAR_3, 1, 14);
   FUNC_2(VAR_5,
         VAR_3, 1);
   VAR_4->auto_tdma_adjust = 0;
  }
 } else if (VAR_8->hid_exist && VAR_8->a2dp_exist) {

  if ((VAR_7 == VAR_0) ||
      (VAR_7 == VAR_1)) {
   FUNC_3(VAR_5, VAR_3,
          1, 14);
   VAR_4->auto_tdma_adjust = 0;
  } else {

   FUNC_3(VAR_5, VAR_3,
          1, 14);
   VAR_4->auto_tdma_adjust = 0;
  }

  FUNC_2(VAR_5, VAR_3, 1);
 } else if ((VAR_8->pan_only) ||
  (VAR_8->hid_exist && VAR_8->pan_exist)) {

  FUNC_3(VAR_5, VAR_3, 1, 3);
  FUNC_2(VAR_5, VAR_3, 6);
  VAR_4->auto_tdma_adjust = 0;
 } else if (((VAR_8->a2dp_exist) && (VAR_8->pan_exist)) ||
     (VAR_8->hid_exist && VAR_8->a2dp_exist &&
      VAR_8->pan_exist)) {

  FUNC_3(VAR_5, VAR_3, 1, 43);
  FUNC_2(VAR_5, VAR_3, 1);
  VAR_4->auto_tdma_adjust = 0;
 } else {
  FUNC_3(VAR_5, VAR_3, 1, 11);
  FUNC_2(VAR_5, VAR_3, 1);
  VAR_4->auto_tdma_adjust = 0;
 }
}
