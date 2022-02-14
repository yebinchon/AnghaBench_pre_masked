
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int ** received_rate_histogram; int ** received_preamble_GI; } ;
struct r8192_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int rate; scalar_t__ bShortPreamble; scalar_t__ bICV; scalar_t__ bCRC; } ;
 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0,
       struct ieee80211_rx_stats *VAR_1)
{
 struct r8192_priv *VAR_2 = (struct r8192_priv *)FUNC_0(VAR_0);

 u32 VAR_3 = 1;
 u32 VAR_4;

 u32 VAR_5;


 if (VAR_1->bCRC)
  VAR_3 = 2;
 else if (VAR_1->bICV)
  VAR_3 = 3;

 if (VAR_1->bShortPreamble)
  VAR_5 = 1;
 else
  VAR_5 = 0;

 switch (VAR_1->rate) {

 case 152:
  VAR_4 = 0;
  break;
 case 150:
  VAR_4 = 1;
  break;
 case 146:
  VAR_4 = 2;
  break;
 case 155:
  VAR_4 = 3;
  break;

 case 145:
  VAR_4 = 4;
  break;
 case 144:
  VAR_4 = 5;
  break;
 case 154:
  VAR_4 = 6;
  break;
 case 153:
  VAR_4 = 7;
  break;
 case 151:
  VAR_4 = 8;
  break;
 case 149:
  VAR_4 = 9;
  break;
 case 148:
  VAR_4 = 10;
  break;
 case 147:
  VAR_4 = 11;
  break;

 case 143:
  VAR_4 = 12;
  break;
 case 142:
  VAR_4 = 13;
  break;
 case 135:
  VAR_4 = 14;
  break;
 case 134:
  VAR_4 = 15;
  break;
 case 133:
  VAR_4 = 16;
  break;
 case 132:
  VAR_4 = 17;
  break;
 case 131:
  VAR_4 = 18;
  break;
 case 130:
  VAR_4 = 19;
  break;
 case 129:
  VAR_4 = 20;
  break;
 case 128:
  VAR_4 = 21;
  break;
 case 141:
  VAR_4 = 22;
  break;
 case 140:
  VAR_4 = 23;
  break;
 case 139:
  VAR_4 = 24;
  break;
 case 138:
  VAR_4 = 25;
  break;
 case 137:
  VAR_4 = 26;
  break;
 case 136:
  VAR_4 = 27;
  break;
 default:
  VAR_4 = 28;
  break;
 }
 VAR_2->stats.received_preamble_GI[VAR_5][VAR_4]++;
 VAR_2->stats.received_rate_histogram[0][VAR_4]++;
 VAR_2->stats.received_rate_histogram[VAR_3][VAR_4]++;
}
