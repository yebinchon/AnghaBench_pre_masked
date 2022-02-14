
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_win_size; int tx_win_size; int timeout; } ;
struct mwifiex_private {TYPE_1__ add_ba_param; } ;


 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_1(struct mwifiex_private *VAR_6)
{
 VAR_6->add_ba_param.timeout = VAR_5;

 if (FUNC_0(VAR_6) == VAR_4) {
  VAR_6->add_ba_param.tx_win_size =
        VAR_3;
  VAR_6->add_ba_param.rx_win_size =
        VAR_2;
 } else {
  VAR_6->add_ba_param.tx_win_size =
        VAR_1;
  VAR_6->add_ba_param.rx_win_size =
        VAR_0;
 }

 return;
}
