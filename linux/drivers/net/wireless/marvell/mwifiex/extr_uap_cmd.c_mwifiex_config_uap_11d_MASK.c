
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {int adapter; } ;
struct cfg80211_beacon_data {int tail_len; int tail; } ;
typedef enum state_11d_t { ____Placeholder_state_11d_t } state_11d_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,int ,int ,int ,int*,int) ;

void FUNC_3(struct mwifiex_private *VAR_6,
       struct cfg80211_beacon_data *VAR_7)
{
 enum state_11d_t VAR_8;
 const u8 *VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_7->tail,
          VAR_7->tail_len);
 if (VAR_9) {

  VAR_8 = VAR_1;
  if (FUNC_2(VAR_6, VAR_4,
         VAR_3, VAR_0,
         &VAR_8, 1)) {
   FUNC_1(VAR_6->adapter, VAR_2,
        "11D: failed to enable 11D\n");
  }
 }
}
