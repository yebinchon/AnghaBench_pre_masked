
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_tx_queue_params {int cw_min; int txop; int cw_max; int aifs; } ;
struct b43_wldev {int qos_enabled; } ;
typedef int params ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (int**,int ,int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_11,
      const struct ieee80211_tx_queue_params *VAR_12,
      u16 VAR_13)
{
 u16 VAR_14[VAR_1];
 int VAR_15, VAR_16;
 unsigned int VAR_17;

 if (!VAR_11->qos_enabled)
  return;

 VAR_15 = FUNC_1(VAR_11, VAR_0) & VAR_12->cw_min;

 FUNC_4(&VAR_14, 0, sizeof(VAR_14));

 VAR_14[VAR_9] = VAR_12->txop * 32;
 VAR_14[VAR_6] = VAR_12->cw_min;
 VAR_14[VAR_5] = VAR_12->cw_max;
 VAR_14[VAR_4] = VAR_12->cw_min;
 VAR_14[VAR_2] = VAR_12->aifs;
 VAR_14[VAR_3] = VAR_15;
 VAR_14[VAR_7] = VAR_15 + VAR_12->aifs;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_14); VAR_17++) {
  if (VAR_17 == VAR_8) {
   VAR_16 = FUNC_2(VAR_11, VAR_10,
          VAR_13 + (VAR_17 * 2));

   VAR_16 |= 0x100;
   FUNC_3(VAR_11, VAR_10,
     VAR_13 + (VAR_17 * 2),
     VAR_16);
  } else {
   FUNC_3(VAR_11, VAR_10,
     VAR_13 + (VAR_17 * 2),
     VAR_14[VAR_17]);
  }
 }
}
