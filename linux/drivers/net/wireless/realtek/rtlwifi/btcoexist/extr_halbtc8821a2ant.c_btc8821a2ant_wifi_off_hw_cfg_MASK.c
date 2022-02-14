
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct btc_coexist {int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btc_coexist*,int,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int,int,int*) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_5(struct btc_coexist *VAR_2)
{
 u8 VAR_3[2] = {0};
 u32 VAR_4 = 0;


 VAR_2->btc_write_1byte(VAR_2, 0x76e, 0x4);


 VAR_2->btc_set_rf_reg(VAR_2, VAR_1, 0x1, 0xfffff, 0x780);
 VAR_2->btc_get(VAR_2, VAR_0, &VAR_4);
 if (VAR_4 >= 0x180000) {

  VAR_3[0] = 1;
  VAR_2->btc_fill_h2c(VAR_2, 0x6E, 1, VAR_3);
 } else {
  VAR_2->btc_write_1byte(VAR_2, 0x765, 0x18);
 }
}
