
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btc_bt_link_info {scalar_t__ a2dp_exist; } ;
struct btc_coexist {struct btc_bt_link_info bt_link_info; } ;
struct TYPE_2__ {scalar_t__ bt_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct btc_coexist*,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct btc_coexist *VAR_8)
{
 struct btc_bt_link_info *VAR_9 = &VAR_8->bt_link_info;

 FUNC_2(VAR_8, VAR_1,
      0x0, 0x0);


 if (VAR_7->bt_status == VAR_2) {
  if (VAR_9->a2dp_exist) {
   FUNC_3(VAR_8, VAR_6,
      1, 32);
   FUNC_1(VAR_8,
            VAR_6, 4);
  } else if (VAR_9->a2dp_exist) {
   FUNC_3(VAR_8, VAR_6,
      1, 22);
   FUNC_1(VAR_8,
            VAR_6, 4);
  } else {
   FUNC_3(VAR_8, VAR_6,
      1, 20);
   FUNC_1(VAR_8,
            VAR_6, 1);
  }
 } else if (VAR_7->bt_status == VAR_4 ||
     VAR_7->bt_status == VAR_3){
  FUNC_0(VAR_8,
    VAR_5);
 } else {
  FUNC_3(VAR_8, VAR_6, 0, 8);
  FUNC_4(VAR_8, VAR_0,
          VAR_6, 0, 0);
  FUNC_1(VAR_8, VAR_6, 2);
 }
}
