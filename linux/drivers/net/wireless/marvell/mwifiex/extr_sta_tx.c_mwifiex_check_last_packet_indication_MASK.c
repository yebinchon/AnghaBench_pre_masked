
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct TYPE_2__ {int period; } ;
struct mwifiex_adapter {int delay_null_pkt; int curr_cmd; int cmd_sent; TYPE_1__ sleep_period; } ;


 int FUNC_0 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*) ;

u8
FUNC_2(struct mwifiex_private *VAR_0)
{
 struct mwifiex_adapter *VAR_1 = VAR_0->adapter;
 u8 VAR_2 = 0;

 if (!VAR_1->sleep_period.period)
  return VAR_2;
 if (FUNC_1(VAR_1))
   VAR_2 = 1;

 if (VAR_2 && !VAR_1->cmd_sent && !VAR_1->curr_cmd &&
     !FUNC_0(VAR_1)) {
  VAR_1->delay_null_pkt = 0;
  VAR_2 = 1;
 } else {
  VAR_2 = 0;
  VAR_1->delay_null_pkt = 1;
 }
 return VAR_2;
}
