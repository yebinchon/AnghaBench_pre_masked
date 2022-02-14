
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,scalar_t__*) ;int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {scalar_t__* wifi_chnl_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_2 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_3 (struct btc_coexist*,int,int,scalar_t__*) ;

void FUNC_4(struct btc_coexist *VAR_7,
      u8 VAR_8)
{
 struct rtl_priv *VAR_9 = VAR_7->adapter;
 u8 VAR_10[3] = {0};
 u32 VAR_11;
 u8 VAR_12;
 u8 VAR_13 = 0;

 if (VAR_2 == VAR_8) {
  FUNC_0(VAR_9, VAR_4, VAR_5,
    "[BTCoex], MEDIA connect notify\n");
 } else {
  FUNC_0(VAR_9, VAR_4, VAR_5,
    "[BTCoex], MEDIA disconnect notify\n");
 }


 VAR_7->btc_get(VAR_7, VAR_0,
      &VAR_12);
 if ((VAR_2 == VAR_8) &&
     (VAR_12 <= 14)) {
  VAR_10[0] = 0x1;
  VAR_10[1] = VAR_12;
  VAR_7->btc_get(VAR_7, VAR_1, &VAR_11);
  if (VAR_11 == VAR_3) {
   VAR_10[2] = 0x30;
  } else {
   VAR_10[2] = 0x20;
   if (VAR_13 < 10)
    VAR_10[2] = 0x30;
   else
    VAR_10[2] = 0x20;
  }
 }

 VAR_6->wifi_chnl_info[0] = VAR_10[0];
 VAR_6->wifi_chnl_info[1] = VAR_10[1];
 VAR_6->wifi_chnl_info[2] = VAR_10[2];

 FUNC_0(VAR_9, VAR_4, VAR_5,
   "[BTCoex], FW write 0x66 = 0x%x\n",
   VAR_10[0] << 16 |
   VAR_10[1] << 8 |
   VAR_10[2]);

 VAR_7->btc_fill_h2c(VAR_7, 0x66, 3, VAR_10);
}
