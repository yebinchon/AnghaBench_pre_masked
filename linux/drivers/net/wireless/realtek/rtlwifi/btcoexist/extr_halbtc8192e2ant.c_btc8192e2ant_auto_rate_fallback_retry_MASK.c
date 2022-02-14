
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btc_coexist {int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;} ;
struct TYPE_2__ {int cur_arfr_type; int pre_arfr_type; int backup_arfr_cnt1; int backup_arfr_cnt2; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct btc_coexist*,int,int) ;
 int FUNC_1 (struct btc_coexist*,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int,int) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_7(struct btc_coexist *VAR_2,
        bool VAR_3, u8 VAR_4)
{
 bool VAR_5 = 0;

 VAR_1->cur_arfr_type = VAR_4;

 if (VAR_3 || (VAR_1->pre_arfr_type != VAR_1->cur_arfr_type)) {
  switch (VAR_1->cur_arfr_type) {
  case 0:
   VAR_2->btc_write_4byte(VAR_2, 0x430,
         VAR_1->backup_arfr_cnt1);
   VAR_2->btc_write_4byte(VAR_2, 0x434,
         VAR_1->backup_arfr_cnt2);
   break;
  case 1:
   VAR_2->btc_get(VAR_2,
        VAR_0,
        &VAR_5);
   if (VAR_5) {
    VAR_2->btc_write_4byte(VAR_2, 0x430,
          0x0);
    VAR_2->btc_write_4byte(VAR_2, 0x434,
          0x01010101);
   } else {
    VAR_2->btc_write_4byte(VAR_2, 0x430,
          0x0);
    VAR_2->btc_write_4byte(VAR_2, 0x434,
          0x04030201);
   }
   break;
  default:
   break;
  }
 }

 VAR_1->pre_arfr_type = VAR_1->cur_arfr_type;
}
