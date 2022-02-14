
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_3__ {int rx_mcs_map; } ;
struct TYPE_4__ {TYPE_1__ vht_mcs; } ;
struct ieee80211_sta {TYPE_2__ vht_cap; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u64 FUNC_1(struct ieee80211_sta *VAR_0)
{
 u64 VAR_1 = 0;
 u16 VAR_2 = FUNC_0(VAR_0->vht_cap.vht_mcs.rx_mcs_map);
 u8 VAR_3;
 int VAR_4, VAR_5;


 for (VAR_4 = 0, VAR_5 = 12; VAR_4 < 4; VAR_4++, VAR_2 >>= 2, VAR_5 += 10) {
  VAR_3 = VAR_2 & 0x3;
  switch (VAR_3) {
  case 2:
   VAR_1 |= 0x3ffULL << VAR_5;
   break;
  case 1:
   VAR_1 |= 0x1ffULL << VAR_5;
   break;
  case 0:
   VAR_1 |= 0x0ffULL << VAR_5;
   break;
  default:
   break;
  }
 }

 return VAR_1;
}
