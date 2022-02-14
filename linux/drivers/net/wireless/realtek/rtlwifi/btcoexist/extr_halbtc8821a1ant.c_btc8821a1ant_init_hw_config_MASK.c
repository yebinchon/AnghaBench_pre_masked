
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_read_1byte ) (struct btc_coexist*,int) ;int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;int (* btc_read_2byte ) (struct btc_coexist*,int) ;int (* btc_read_4byte ) (struct btc_coexist*,int) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int backup_ampdu_max_time; int backup_retry_limit; int backup_arfr_cnt2; int backup_arfr_cnt1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct btc_coexist*,int) ;
 int FUNC_4 (struct btc_coexist*,int,int,int) ;
 int FUNC_5 (struct btc_coexist*,int) ;
 int FUNC_6 (struct btc_coexist*,int) ;
 int FUNC_7 (struct btc_coexist*,int) ;
 int FUNC_8 (struct btc_coexist*,int) ;
 int FUNC_9 (struct btc_coexist*,int,int) ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;
 int FUNC_11 (struct btc_coexist*,int,int) ;
 int FUNC_12 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_13(struct btc_coexist *VAR_7,
     bool VAR_8, bool VAR_9)
{
 struct rtl_priv *VAR_10 = VAR_7->adapter;
 u8 VAR_11 = 0;
 bool VAR_12 = 0;

 FUNC_0(VAR_10, VAR_3, VAR_4,
   "[BTCoex], 1Ant Init HW Config!!\n");

 if (VAR_9)
  return;

 if (VAR_8) {
  VAR_6->backup_arfr_cnt1 = VAR_7->btc_read_4byte(VAR_7,
              0x430);
  VAR_6->backup_arfr_cnt2 = VAR_7->btc_read_4byte(VAR_7,
              0x434);
  VAR_6->backup_retry_limit =
   VAR_7->btc_read_2byte(VAR_7, 0x42a);
  VAR_6->backup_ampdu_max_time =
   VAR_7->btc_read_1byte(VAR_7, 0x456);
 }


 VAR_11 = VAR_7->btc_read_1byte(VAR_7, 0x790);
 VAR_11 &= 0xc0;
 VAR_11 |= 0x5;
 VAR_7->btc_write_1byte(VAR_7, 0x790, VAR_11);

 VAR_7->btc_get(VAR_7, VAR_2, &VAR_12);


 if (VAR_12)
  FUNC_2(VAR_7, VAR_0,
       1, 0);
 else
  FUNC_2(VAR_7, VAR_1,
       1, 0);

 FUNC_1(VAR_7, VAR_5, 0);




 VAR_7->btc_write_1byte(VAR_7, 0x76e, 0xc);
 VAR_7->btc_write_1byte(VAR_7, 0x778, 0x3);
 VAR_7->btc_write_1byte_bitmask(VAR_7, 0x40, 0x20, 0x1);
}
