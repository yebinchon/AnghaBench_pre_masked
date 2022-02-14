
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt76_txwi {int dummy; } ;
struct TYPE_2__ {scalar_t__* status_driver_data; } ;
struct ieee80211_tx_info {TYPE_1__ status; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0,
            struct ieee80211_tx_info *VAR_1)
{
 int VAR_2 = (unsigned long)VAR_1->status.status_driver_data[0];

 FUNC_2(VAR_0, sizeof(struct mt76_txwi) + 4);
 if (FUNC_0(VAR_0) % 4)
  FUNC_1(VAR_0);

 FUNC_3(VAR_0, VAR_2);
}
