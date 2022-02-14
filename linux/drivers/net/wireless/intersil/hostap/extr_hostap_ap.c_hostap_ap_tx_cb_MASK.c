
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int cb; int protocol; int pkt_type; scalar_t__ dev; scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ap_data {TYPE_1__* local; } ;
struct TYPE_2__ {scalar_t__ apdev; int hostapd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_3, int VAR_4, void *VAR_5)
{
 struct ap_data *VAR_6 = VAR_5;
 struct ieee80211_hdr *VAR_7;

 if (!VAR_6->local->hostapd || !VAR_6->local->apdev) {
  FUNC_3(VAR_3);
  return;
 }




 VAR_7 = (struct ieee80211_hdr *) VAR_3->data;
 VAR_7->frame_control &= FUNC_2(~VAR_1);
 VAR_7->frame_control |= FUNC_2(VAR_4 ? FUNC_0(1) : FUNC_0(0));

 VAR_3->dev = VAR_6->local->apdev;
 FUNC_7(VAR_3, FUNC_4(VAR_7->frame_control));
 VAR_3->pkt_type = VAR_2;
 VAR_3->protocol = FUNC_1(VAR_0);
 FUNC_5(VAR_3->cb, 0, sizeof(VAR_3->cb));
 FUNC_6(VAR_3);
}
