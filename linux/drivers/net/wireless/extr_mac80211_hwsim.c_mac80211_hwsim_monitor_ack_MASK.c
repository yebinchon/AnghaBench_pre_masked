
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int cb; int protocol; int pkt_type; int ip_summed; int dev; } ;
struct ieee80211_hdr {int addr1; void* duration_id; void* frame_control; } ;
struct ieee80211_channel {int center_freq; } ;
struct TYPE_2__ {int it_present; void* it_len; scalar_t__ it_pad; int it_version; } ;
struct hwsim_radiotap_ack_hdr {void* rt_chbitmask; void* rt_channel; scalar_t__ pad; scalar_t__ rt_flags; TYPE_1__ hdr; } ;


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
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int FUNC_4 (int ,int const*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_channel *VAR_11,
           const u8 *VAR_12)
{
 struct sk_buff *VAR_13;
 struct hwsim_radiotap_ack_hdr *VAR_14;
 u16 VAR_15;
 struct ieee80211_hdr *VAR_16;

 if (!FUNC_6(VAR_10))
  return;

 VAR_13 = FUNC_2(100);
 if (VAR_13 == ((void*)0))
  return;

 VAR_14 = FUNC_8(VAR_13, sizeof(*VAR_14));
 VAR_14->hdr.it_version = VAR_9;
 VAR_14->hdr.it_pad = 0;
 VAR_14->hdr.it_len = FUNC_0(sizeof(*VAR_14));
 VAR_14->hdr.it_present = FUNC_1((1 << VAR_6) |
       (1 << VAR_5));
 VAR_14->rt_flags = 0;
 VAR_14->pad = 0;
 VAR_14->rt_channel = FUNC_0(VAR_11->center_freq);
 VAR_15 = VAR_3;
 VAR_14->rt_chbitmask = FUNC_0(VAR_15);

 VAR_16 = FUNC_8(VAR_13, 10);
 VAR_16->frame_control = FUNC_0(VAR_4 |
        VAR_7);
 VAR_16->duration_id = FUNC_0(0);
 FUNC_4(VAR_16->addr1, VAR_12, VAR_1);

 VAR_13->dev = VAR_10;
 FUNC_9(VAR_13);
 VAR_13->ip_summed = VAR_0;
 VAR_13->pkt_type = VAR_8;
 VAR_13->protocol = FUNC_3(VAR_2);
 FUNC_5(VAR_13->cb, 0, sizeof(VAR_13->cb));
 FUNC_7(VAR_13);
}
