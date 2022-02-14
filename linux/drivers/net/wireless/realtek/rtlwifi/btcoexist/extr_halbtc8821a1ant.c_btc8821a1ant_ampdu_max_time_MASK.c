
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btc_coexist {int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;} ;
struct TYPE_2__ {int cur_ampdu_time_type; int pre_ampdu_time_type; int backup_ampdu_max_time; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct btc_coexist*,int,int) ;
 int FUNC_1 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_1,
     bool VAR_2, u8 VAR_3)
{
 VAR_0->cur_ampdu_time_type = VAR_3;

 if (VAR_2 ||
     (VAR_0->pre_ampdu_time_type != VAR_0->cur_ampdu_time_type)) {
  switch (VAR_0->cur_ampdu_time_type) {
  case 0:
   VAR_1->btc_write_1byte(VAR_1, 0x456,
         VAR_0->backup_ampdu_max_time);
   break;
  case 1:
   VAR_1->btc_write_1byte(VAR_1, 0x456, 0x38);
   break;
  default:
   break;
  }
 }

 VAR_0->pre_ampdu_time_type = VAR_0->cur_ampdu_time_type;
}
