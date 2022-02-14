
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ rx_win_size; } ;
struct mwifiex_private {scalar_t__ bss_type; int media_connected; TYPE_1__ add_ba_param; } ;
struct mwifiex_adapter {size_t priv_num; scalar_t__ coex_rx_win_size; scalar_t__ coex_win_size; struct mwifiex_private** priv; int dev; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mwifiex_private*,size_t) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_8,
        bool VAR_9)
{
 u8 VAR_10;
 u32 VAR_11;
 struct mwifiex_private *VAR_12;

 FUNC_0(VAR_8->dev, "Update rxwinsize %d\n", VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_8->priv_num; VAR_10++) {
  if (!VAR_8->priv[VAR_10])
   continue;
  VAR_12 = VAR_8->priv[VAR_10];
  VAR_11 = VAR_12->add_ba_param.rx_win_size;
  if (VAR_9) {
   if (VAR_12->bss_type == VAR_2)
    VAR_12->add_ba_param.rx_win_size =
     VAR_5;
   if (VAR_12->bss_type == VAR_1)
    VAR_12->add_ba_param.rx_win_size =
     VAR_5;
   if (VAR_12->bss_type == VAR_3)
    VAR_12->add_ba_param.rx_win_size =
     VAR_7;
  } else {
   if (VAR_12->bss_type == VAR_2)
    VAR_12->add_ba_param.rx_win_size =
     VAR_4;
   if (VAR_12->bss_type == VAR_1)
    VAR_12->add_ba_param.rx_win_size =
     VAR_4;
   if (VAR_12->bss_type == VAR_3)
    VAR_12->add_ba_param.rx_win_size =
     VAR_6;
  }

  if (VAR_8->coex_win_size && VAR_8->coex_rx_win_size)
   VAR_12->add_ba_param.rx_win_size =
     VAR_8->coex_rx_win_size;

  if (VAR_11 != VAR_12->add_ba_param.rx_win_size) {
   if (!VAR_12->media_connected)
    continue;
   for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
    FUNC_1(VAR_12, VAR_10);
  }
 }
}
