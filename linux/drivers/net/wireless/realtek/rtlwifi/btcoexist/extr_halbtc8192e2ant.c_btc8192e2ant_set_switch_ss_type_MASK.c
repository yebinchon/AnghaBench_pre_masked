
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int cur_ra_mask_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct btc_coexist*,int,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;
 int FUNC_7 (struct btc_coexist*,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int) ;
 int FUNC_11 (struct btc_coexist*,int,int) ;
 int FUNC_12 (struct btc_coexist*,int,int) ;
 int FUNC_13 (struct btc_coexist*,int,int) ;
 int FUNC_14 (struct btc_coexist*,int,int,int) ;

__attribute__((used)) static void FUNC_15(struct btc_coexist *VAR_7,
         u8 VAR_8)
{
 struct rtl_priv *VAR_9 = VAR_7->adapter;
 u8 VAR_10 = VAR_0;
 u32 VAR_11 = 0x0;

 FUNC_0(VAR_9, VAR_3, VAR_4,
   "[BTCoex], REAL set SS Type = %d\n", VAR_8);

 VAR_11 = FUNC_1(VAR_7, VAR_8,
        VAR_6->cur_ra_mask_type);
 FUNC_3(VAR_7, VAR_5, VAR_11);

 if (VAR_8 == 1) {
  FUNC_2(VAR_7, VAR_5, 0, 1);

  VAR_7->btc_write_1byte(VAR_7, 0xc04, 0x11);
  VAR_7->btc_write_1byte(VAR_7, 0xd04, 0x1);
  VAR_7->btc_write_4byte(VAR_7, 0x90c, 0x81111111);

  VAR_7->btc_write_1byte_bitmask(VAR_7, 0xe77, 0x4, 0x1);
  VAR_7->btc_write_1byte(VAR_7, 0xa07, 0x81);
  VAR_10 = VAR_1;
 } else if (VAR_8 == 2) {
  FUNC_2(VAR_7, VAR_5, 0, 0);
  VAR_7->btc_write_1byte(VAR_7, 0xc04, 0x33);
  VAR_7->btc_write_1byte(VAR_7, 0xd04, 0x3);
  VAR_7->btc_write_4byte(VAR_7, 0x90c, 0x81121313);
  VAR_7->btc_write_1byte_bitmask(VAR_7, 0xe77, 0x4, 0x0);
  VAR_7->btc_write_1byte(VAR_7, 0xa07, 0x41);
  VAR_10 = VAR_0;
 }

 VAR_7->btc_set(VAR_7, VAR_2, &VAR_10);
}
