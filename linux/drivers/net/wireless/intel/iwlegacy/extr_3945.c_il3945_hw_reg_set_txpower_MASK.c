
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct il_priv {scalar_t__ tx_power_user_lmt; size_t channel_count; struct il_channel_info* channel_info; } ;
struct il_channel_info {scalar_t__ curr_txpow; } ;
typedef scalar_t__ s8 ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct il_priv*) ;
 scalar_t__ FUNC_2 (struct il_channel_info*) ;
 int FUNC_3 (struct il_priv*,struct il_channel_info*) ;
 int FUNC_4 (struct il_priv*) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

int
FUNC_6(struct il_priv *VAR_0, s8 VAR_1)
{
 struct il_channel_info *VAR_2;
 s8 VAR_3;
 u8 VAR_4;

 if (VAR_0->tx_power_user_lmt == VAR_1) {
  FUNC_0("Requested Tx power same as current " "limit: %ddBm.\n",
   VAR_1);
  return 0;
 }

 FUNC_0("Setting upper limit clamp to %ddBm.\n", VAR_1);
 VAR_0->tx_power_user_lmt = VAR_1;



 for (VAR_4 = 0; VAR_4 < VAR_0->channel_count; VAR_4++) {
  VAR_2 = &VAR_0->channel_info[VAR_4];



  VAR_3 = FUNC_2(VAR_2);
  VAR_3 = FUNC_5(VAR_1, VAR_3);
  if (VAR_3 != VAR_2->curr_txpow) {
   VAR_2->curr_txpow = VAR_3;


   FUNC_3(VAR_0, VAR_2);
  }
 }



 FUNC_4(VAR_0);
 FUNC_1(VAR_0);

 return 0;
}
