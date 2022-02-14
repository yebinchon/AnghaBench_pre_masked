
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct iphdr {int tos; } ;
struct ieee80211_network {int dummy; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_1, struct ieee80211_network *VAR_2)
{
 struct ethhdr *VAR_3;
 struct iphdr *VAR_4;
 VAR_3 = (struct ethhdr *)VAR_1->data;
 if (VAR_3->h_proto != FUNC_0(VAR_0))
  return 0;

 VAR_4 = FUNC_1(VAR_1);
 switch (VAR_4->tos & 0xfc) {
 case 0x20:
  return 2;
 case 0x40:
  return 1;
 case 0x60:
  return 3;
 case 0x80:
  return 4;
 case 0xa0:
  return 5;
 case 0xc0:
  return 6;
 case 0xe0:
  return 7;
 default:
  return 0;
 }
}
