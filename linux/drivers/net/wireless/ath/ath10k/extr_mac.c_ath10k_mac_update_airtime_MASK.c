
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct ieee80211_txq {TYPE_2__* sta; } ;
struct ath10k_sta {int last_tx_bitrate; } ;
struct TYPE_3__ {int svc_map; } ;
struct ath10k {int data_lock; TYPE_1__ wmi; } ;
struct TYPE_4__ {scalar_t__ drv_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static u16 FUNC_3(struct ath10k *VAR_3,
         struct ieee80211_txq *VAR_4,
         struct sk_buff *VAR_5)
{
 struct ath10k_sta *VAR_6;
 u32 VAR_7;
 u16 VAR_8 = 0;

 if (!VAR_4 || !VAR_4->sta)
  return VAR_8;

 if (FUNC_2(VAR_2, VAR_3->wmi.svc_map))
  return VAR_8;

 FUNC_0(&VAR_3->data_lock);
 VAR_6 = (struct ath10k_sta *)VAR_4->sta->drv_priv;

 VAR_7 = VAR_5->len + 38;
 if (VAR_6->last_tx_bitrate) {

  VAR_8 = (VAR_7 * 8 * (1000 / 100))
    / VAR_6->last_tx_bitrate;

  VAR_8 += VAR_1;
 } else {





  VAR_8 = (VAR_7 * 8 * (1000 / 100)) / 60;
  VAR_8 += VAR_0;
 }
 FUNC_1(&VAR_3->data_lock);

 return VAR_8;
}
