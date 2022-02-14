
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,scalar_t__*) ;int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_read_1byte ) (struct btc_coexist*,int) ;int (* btc_read_2byte ) (struct btc_coexist*,int) ;int (* btc_read_4byte ) (struct btc_coexist*,int) ;scalar_t__ stop_coex_dm; scalar_t__ manual_control; struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__* wifi_chnl_info; scalar_t__ arp_cnt; int backup_ampdu_max_time; int backup_retry_limit; int backup_arfr_cnt2; int backup_arfr_cnt1; } ;
struct TYPE_3__ {int cck_ever_lock; scalar_t__ bt_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int ,int,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_7 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_8 (struct btc_coexist*,int,int,scalar_t__*) ;
 int FUNC_9 (struct btc_coexist*,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int) ;
 int FUNC_11 (struct btc_coexist*,int,int) ;
 int FUNC_12 (struct btc_coexist*,int,int) ;
 int FUNC_13 (struct btc_coexist*,int) ;
 int FUNC_14 (struct btc_coexist*,int) ;
 int FUNC_15 (struct btc_coexist*,int) ;
 int FUNC_16 (struct btc_coexist*,int) ;

void FUNC_17(struct btc_coexist *VAR_11,
      u8 VAR_12)
{
 struct rtl_priv *VAR_13 = VAR_11->adapter;
 u8 VAR_14[3] = {0};
 u32 VAR_15;
 u8 VAR_16;
 bool VAR_17 = 0;

 if (VAR_11->manual_control || VAR_11->stop_coex_dm ||
     VAR_10->bt_disabled)
  return;

 if (VAR_12 == VAR_4) {
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], MEDIA connect notify\n");

  FUNC_1(VAR_11, VAR_8, 0, 8);
  FUNC_2(VAR_11, VAR_0,
          VAR_8, 0, 0);
  VAR_11->btc_get(VAR_11, VAR_1,
       &VAR_17);


  if (VAR_17) {
   VAR_11->btc_write_1byte(VAR_11, 0x6cd,
         0x00);
   VAR_11->btc_write_1byte(VAR_11, 0x6cf,
         0x00);
  } else {
   VAR_11->btc_write_1byte(VAR_11, 0x6cd,
         0x00);
   VAR_11->btc_write_1byte(VAR_11, 0x6cf,
         0x10);
  }

  VAR_9->backup_arfr_cnt1 =
   VAR_11->btc_read_4byte(VAR_11, 0x430);
  VAR_9->backup_arfr_cnt2 =
   VAR_11->btc_read_4byte(VAR_11, 0x434);
  VAR_9->backup_retry_limit =
   VAR_11->btc_read_2byte(VAR_11, 0x42a);
  VAR_9->backup_ampdu_max_time =
   VAR_11->btc_read_1byte(VAR_11, 0x456);
 } else {
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], MEDIA disconnect notify\n");
  VAR_9->arp_cnt = 0;

  VAR_11->btc_write_1byte(VAR_11, 0x6cd, 0x0);
  VAR_11->btc_write_1byte(VAR_11, 0x6cf, 0x0);

  VAR_10->cck_ever_lock = 0;
 }


 VAR_11->btc_get(VAR_11, VAR_2,
      &VAR_16);

 if (VAR_12 == VAR_4 && VAR_16 <= 14) {
  VAR_14[0] = 0x0;
  VAR_14[1] = VAR_16;
  VAR_11->btc_get(VAR_11, VAR_3, &VAR_15);
  if (VAR_5 == VAR_15)
   VAR_14[2] = 0x30;
  else
   VAR_14[2] = 0x20;
 }

 VAR_9->wifi_chnl_info[0] = VAR_14[0];
 VAR_9->wifi_chnl_info[1] = VAR_14[1];
 VAR_9->wifi_chnl_info[2] = VAR_14[2];

 FUNC_0(VAR_13, VAR_6, VAR_7,
   "[BTCoex], FW write 0x66 = 0x%x\n",
   VAR_14[0] << 16 | VAR_14[1] << 8 |
   VAR_14[2]);

 VAR_11->btc_fill_h2c(VAR_11, 0x66, 3, VAR_14);
}
