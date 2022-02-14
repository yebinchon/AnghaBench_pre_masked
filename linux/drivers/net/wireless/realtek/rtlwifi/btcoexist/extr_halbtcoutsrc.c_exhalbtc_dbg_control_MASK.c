
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cnt_dbg_ctrl; } ;
struct btc_coexist {TYPE_1__ statistics; } ;


 int FUNC_0 (struct btc_coexist*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;

void FUNC_3(struct btc_coexist *VAR_0,
     u8 VAR_1, u8 VAR_2, u8 *VAR_3)
{
 if (!FUNC_0(VAR_0))
  return;
 VAR_0->statistics.cnt_dbg_ctrl++;

 FUNC_1(VAR_0);

 FUNC_2(VAR_0);
}
