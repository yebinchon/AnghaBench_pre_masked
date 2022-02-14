
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ tx_win_size; } ;
struct mwifiex_private {scalar_t__ bss_type; int media_connected; TYPE_1__ add_ba_param; } ;
struct mwifiex_adapter {size_t priv_num; scalar_t__ coex_tx_win_size; scalar_t__ coex_win_size; struct mwifiex_private** priv; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mwifiex_private*,size_t) ;

void FUNC_1(struct mwifiex_adapter *VAR_6)
{
 u8 VAR_7;
 u32 VAR_8;
 struct mwifiex_private *VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_6->priv_num; VAR_7++) {
  if (!VAR_6->priv[VAR_7])
   continue;
  VAR_9 = VAR_6->priv[VAR_7];
  VAR_8 = VAR_9->add_ba_param.tx_win_size;

  if (VAR_9->bss_type == VAR_2)
   VAR_9->add_ba_param.tx_win_size =
    VAR_4;

  if (VAR_9->bss_type == VAR_1)
   VAR_9->add_ba_param.tx_win_size =
    VAR_4;

  if (VAR_9->bss_type == VAR_3)
   VAR_9->add_ba_param.tx_win_size =
    VAR_5;

  if (VAR_6->coex_win_size) {
   if (VAR_6->coex_tx_win_size)
    VAR_9->add_ba_param.tx_win_size =
     VAR_6->coex_tx_win_size;
  }

  if (VAR_8 != VAR_9->add_ba_param.tx_win_size) {
   if (!VAR_9->media_connected)
    continue;
   for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    FUNC_0(VAR_9, VAR_7);
  }
 }
}
