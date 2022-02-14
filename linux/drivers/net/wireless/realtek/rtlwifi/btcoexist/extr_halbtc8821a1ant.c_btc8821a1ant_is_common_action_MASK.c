
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {scalar_t__ bt_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static bool FUNC_4(struct btc_coexist *VAR_7)
{
 struct rtl_priv *VAR_8 = VAR_7->adapter;
 bool VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

 VAR_7->btc_get(VAR_7, VAR_1,
      &VAR_10);
 VAR_7->btc_get(VAR_7, VAR_0, &VAR_11);

 if (!VAR_10 &&
     VAR_3 ==
     VAR_6->bt_status) {
  FUNC_0(VAR_8, VAR_4, VAR_5,
    "[BTCoex], Wifi non connected-idle + BT non connected-idle!!\n");
  FUNC_1(VAR_7, 0);

  VAR_9 = 1;
 } else if (VAR_10 &&
     (VAR_3 ==
      VAR_6->bt_status)) {
  FUNC_0(VAR_8, VAR_4, VAR_5,
    "[BTCoex], Wifi connected + BT non connected-idle!!\n");
  FUNC_1(VAR_7, 0);

  VAR_9 = 1;
 } else if (!VAR_10 &&
     (VAR_2 ==
      VAR_6->bt_status)) {
  FUNC_0(VAR_8, VAR_4, VAR_5,
    "[BTCoex], Wifi non connected-idle + BT connected-idle!!\n");
  FUNC_1(VAR_7, 0);

  VAR_9 = 1;
 } else if (VAR_10 &&
     (VAR_2 ==
      VAR_6->bt_status)) {
  FUNC_0(VAR_8, VAR_4, VAR_5,
    "[BTCoex], Wifi connected + BT connected-idle!!\n");
  FUNC_1(VAR_7, 0);

  VAR_9 = 1;
 } else if (!VAR_10 &&
     (VAR_2 !=
      VAR_6->bt_status)) {
  FUNC_0(VAR_8, VAR_4, VAR_5,
    "[BTCoex], Wifi non connected-idle + BT Busy!!\n");
  FUNC_1(VAR_7, 0);

  VAR_9 = 1;
 } else {
  if (VAR_11) {
   FUNC_0(VAR_8, VAR_4, VAR_5,
     "[BTCoex], Wifi Connected-Busy + BT Busy!!\n");
  } else {
   FUNC_0(VAR_8, VAR_4, VAR_5,
     "[BTCoex], Wifi Connected-Idle + BT Busy!!\n");
  }

  VAR_9 = 0;
 }

 return VAR_9;
}
