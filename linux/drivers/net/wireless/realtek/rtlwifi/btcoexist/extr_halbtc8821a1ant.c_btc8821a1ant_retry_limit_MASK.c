
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btc_coexist {int (* btc_write_2byte ) (struct btc_coexist*,int,int) ;} ;
struct TYPE_2__ {int cur_retry_limit_type; int pre_retry_limit_type; int backup_retry_limit; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct btc_coexist*,int,int) ;
 int FUNC_1 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_1,
         bool VAR_2, u8 VAR_3)
{
 VAR_0->cur_retry_limit_type = VAR_3;

 if (VAR_2 ||
     (VAR_0->pre_retry_limit_type != VAR_0->cur_retry_limit_type)) {
  switch (VAR_0->cur_retry_limit_type) {
  case 0:
   VAR_1->btc_write_2byte(VAR_1, 0x42a,
         VAR_0->backup_retry_limit);
   break;
  case 1:
   VAR_1->btc_write_2byte(VAR_1, 0x42a, 0x0808);
   break;
  default:
   break;
  }
 }
 VAR_0->pre_retry_limit_type = VAR_0->cur_retry_limit_type;
}
