
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btc_bt_link_info {scalar_t__ pan_exist; scalar_t__ a2dp_exist; } ;
struct btc_coexist {struct btc_bt_link_info bt_link_info; } ;
struct TYPE_2__ {scalar_t__ bt_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct btc_coexist*,int ) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int,int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static
void FUNC_4(struct btc_coexist *VAR_7)
{
 struct btc_bt_link_info *VAR_8 = &VAR_7->bt_link_info;

 FUNC_2(VAR_7, VAR_0, 0x0, 0x0);

 if (VAR_6->bt_status == VAR_1) {
  if (VAR_8->a2dp_exist) {
   FUNC_3(VAR_7, VAR_5, 1, 14);
   FUNC_1(VAR_7,
         VAR_5, 1);
  } else if (VAR_8->a2dp_exist &&
      VAR_8->pan_exist) {
   FUNC_3(VAR_7, VAR_5, 0, 8);
   FUNC_1(VAR_7,
         VAR_5, 4);
  } else {
   FUNC_3(VAR_7, VAR_5, 1, 20);
   FUNC_1(VAR_7,
         VAR_5, 4);
  }
 } else if ((VAR_6->bt_status == VAR_3) ||
     (VAR_2 ==
      VAR_6->bt_status)) {
  FUNC_0(VAR_7,
    VAR_4);
 } else {
  FUNC_3(VAR_7, VAR_5, 0, 8);
  FUNC_1(VAR_7, VAR_5, 2);
 }
}
