
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt76x02_dev {int dummy; } ;
struct mt76_rate_power {void** vht; void** stbc; void** ht; void** ofdm; void** cck; } ;
struct ieee80211_channel {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (void**,void**,int) ;
 int FUNC_1 (struct mt76_rate_power*,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 void* FUNC_3 (int) ;

void FUNC_4(struct mt76x02_dev *VAR_13, struct mt76_rate_power *VAR_14,
      struct ieee80211_channel *VAR_15)
{
 bool VAR_16;
 u16 VAR_17;

 VAR_16 = VAR_15->band == VAR_12;

 FUNC_1(VAR_14, 0, sizeof(*VAR_14));

 VAR_17 = FUNC_2(VAR_13, VAR_0);
 VAR_14->cck[0] = VAR_14->cck[1] = FUNC_3(VAR_17);
 VAR_14->cck[2] = VAR_14->cck[3] = FUNC_3(VAR_17 >> 8);

 if (VAR_16)
  VAR_17 = FUNC_2(VAR_13, VAR_8);
 else
  VAR_17 = FUNC_2(VAR_13, VAR_6);
 VAR_14->ofdm[0] = VAR_14->ofdm[1] = FUNC_3(VAR_17);
 VAR_14->ofdm[2] = VAR_14->ofdm[3] = FUNC_3(VAR_17 >> 8);

 if (VAR_16)
  VAR_17 = FUNC_2(VAR_13, VAR_7);
 else
  VAR_17 = FUNC_2(VAR_13, VAR_5);
 VAR_14->ofdm[4] = VAR_14->ofdm[5] = FUNC_3(VAR_17);
 VAR_14->ofdm[6] = VAR_14->ofdm[7] = FUNC_3(VAR_17 >> 8);

 VAR_17 = FUNC_2(VAR_13, VAR_1);
 VAR_14->ht[0] = VAR_14->ht[1] = FUNC_3(VAR_17);
 VAR_14->ht[2] = VAR_14->ht[3] = FUNC_3(VAR_17 >> 8);

 VAR_17 = FUNC_2(VAR_13, VAR_3);
 VAR_14->ht[4] = VAR_14->ht[5] = FUNC_3(VAR_17);
 VAR_14->ht[6] = VAR_14->ht[7] = FUNC_3(VAR_17 >> 8);

 VAR_17 = FUNC_2(VAR_13, VAR_4);
 VAR_14->ht[8] = VAR_14->ht[9] = FUNC_3(VAR_17);
 VAR_14->ht[10] = VAR_14->ht[11] = FUNC_3(VAR_17 >> 8);

 VAR_17 = FUNC_2(VAR_13, VAR_2);
 VAR_14->ht[12] = VAR_14->ht[13] = FUNC_3(VAR_17);
 VAR_14->ht[14] = VAR_14->ht[15] = FUNC_3(VAR_17 >> 8);

 VAR_17 = FUNC_2(VAR_13, VAR_9);
 VAR_14->vht[0] = VAR_14->vht[1] = FUNC_3(VAR_17);
 VAR_14->vht[2] = VAR_14->vht[3] = FUNC_3(VAR_17 >> 8);

 VAR_17 = FUNC_2(VAR_13, VAR_10);
 VAR_14->vht[4] = VAR_14->vht[5] = FUNC_3(VAR_17);
 VAR_14->vht[6] = VAR_14->vht[7] = FUNC_3(VAR_17 >> 8);

 VAR_17 = FUNC_2(VAR_13, VAR_11);
 if (!VAR_16)
  VAR_17 >>= 8;
 VAR_14->vht[8] = VAR_14->vht[9] = FUNC_3(VAR_17 >> 8);

 FUNC_0(VAR_14->stbc, VAR_14->ht, sizeof(VAR_14->stbc[0]) * 8);
 VAR_14->stbc[8] = VAR_14->vht[8];
 VAR_14->stbc[9] = VAR_14->vht[9];
}
