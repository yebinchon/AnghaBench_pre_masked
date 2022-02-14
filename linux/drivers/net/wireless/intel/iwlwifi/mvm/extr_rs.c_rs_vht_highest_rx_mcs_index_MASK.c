
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rx_mcs_map; } ;
struct ieee80211_sta_vht_cap {TYPE_1__ vht_mcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_sta_vht_cap *VAR_7,
           int VAR_8)
{
 u16 VAR_9 = FUNC_1(VAR_7->vht_mcs.rx_mcs_map) &
  (0x3 << (2 * (VAR_8 - 1)));
 VAR_9 >>= (2 * (VAR_8 - 1));

 if (VAR_9 == VAR_1)
  return VAR_4;
 else if (VAR_9 == VAR_2)
  return VAR_5;
 else if (VAR_9 == VAR_3)
  return VAR_6;

 FUNC_0(VAR_9 != VAR_0);
 return -1;
}
