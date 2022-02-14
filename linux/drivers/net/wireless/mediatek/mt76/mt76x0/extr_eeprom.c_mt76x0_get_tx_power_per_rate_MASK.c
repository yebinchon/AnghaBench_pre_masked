
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt76x02_dev {int dummy; } ;
struct mt76_rate_power {void** vht; void** stbc; void** ht; void** ofdm; void** cck; } ;
struct ieee80211_channel {scalar_t__ band; } ;
typedef int s8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mt76_rate_power*,int ,int) ;
 int FUNC_1 (struct mt76_rate_power*,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_4 (struct mt76x02_dev*) ;
 void* FUNC_5 (int) ;

void FUNC_6(struct mt76x02_dev *VAR_2,
      struct ieee80211_channel *VAR_3,
      struct mt76_rate_power *VAR_4)
{
 bool VAR_5 = VAR_3->band == VAR_1;
 u16 VAR_6, VAR_7;
 s8 VAR_8;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));


 VAR_6 = FUNC_2(VAR_2, VAR_0);
 VAR_4->cck[0] = VAR_4->cck[1] = FUNC_5(VAR_6);
 VAR_4->cck[2] = VAR_4->cck[3] = FUNC_5(VAR_6 >> 8);


 VAR_7 = VAR_5 ? VAR_0 + 2 : 0x120;
 VAR_6 = FUNC_2(VAR_2, VAR_7);
 VAR_4->ofdm[0] = VAR_4->ofdm[1] = FUNC_5(VAR_6);
 VAR_4->ofdm[2] = VAR_4->ofdm[3] = FUNC_5(VAR_6 >> 8);


 VAR_7 = VAR_5 ? VAR_0 + 4 : 0x122;
 VAR_6 = FUNC_2(VAR_2, VAR_7);
 VAR_4->ofdm[4] = VAR_4->ofdm[5] = FUNC_5(VAR_6);
 VAR_4->ofdm[6] = VAR_4->ofdm[7] = FUNC_5(VAR_6 >> 8);


 VAR_7 = VAR_5 ? VAR_0 + 6 : 0x124;
 VAR_6 = FUNC_2(VAR_2, VAR_7);
 VAR_4->ht[0] = VAR_4->ht[1] = VAR_4->vht[0] = VAR_4->vht[1] = FUNC_5(VAR_6);
 VAR_4->ht[2] = VAR_4->ht[3] = VAR_4->vht[2] = VAR_4->vht[3] = FUNC_5(VAR_6 >> 8);


 VAR_7 = VAR_5 ? VAR_0 + 8 : 0x126;
 VAR_6 = FUNC_2(VAR_2, VAR_7);
 VAR_4->ht[4] = VAR_4->ht[5] = VAR_4->vht[4] = VAR_4->vht[5] = FUNC_5(VAR_6);
 VAR_4->ht[6] = VAR_4->ht[7] = VAR_4->vht[6] = VAR_4->vht[7] = FUNC_5(VAR_6 >> 8);


 VAR_7 = VAR_5 ? VAR_0 + 14 : 0xec;
 VAR_6 = FUNC_2(VAR_2, VAR_7);
 VAR_4->stbc[0] = VAR_4->stbc[1] = FUNC_5(VAR_6);
 VAR_4->stbc[2] = VAR_4->stbc[3] = FUNC_5(VAR_6 >> 8);


 VAR_7 = VAR_5 ? VAR_0 + 16 : 0xee;
 VAR_6 = FUNC_2(VAR_2, VAR_7);
 VAR_4->stbc[4] = VAR_4->stbc[5] = FUNC_5(VAR_6);
 VAR_4->stbc[6] = VAR_4->stbc[7] = FUNC_5(VAR_6 >> 8);


 VAR_6 = FUNC_2(VAR_2, 0x132);
 VAR_4->vht[8] = FUNC_5(VAR_6);
 VAR_4->vht[9] = FUNC_5(VAR_6 >> 8);

 VAR_8 = FUNC_4(VAR_2) ? 0 : FUNC_3(VAR_2);
 FUNC_1(VAR_4, VAR_8);
}
