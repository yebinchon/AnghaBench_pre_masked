
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {unsigned char* data; scalar_t__ cb; } ;
struct r8192_priv {TYPE_1__* ieee80211; TYPE_2__* pFirmware; } ;
struct net_device {int dummy; } ;
struct cb_desc {size_t queue_index; size_t bLastIniPkt; scalar_t__ txbuf_size; int bCmdOrInit; } ;
struct TYPE_4__ {scalar_t__ cmdpacket_frag_threshold; } ;
typedef TYPE_2__ rt_firmware ;
typedef int dev ;
struct TYPE_3__ {int (* softmac_hard_start_xmit ) (struct sk_buff*,struct net_device*) ;int * skb_waitQ; scalar_t__ queue_stop; int (* check_nic_enough_desc ) (struct net_device*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (unsigned char*,struct net_device**,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct net_device*,size_t) ;
 int FUNC_10 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static bool FUNC_11(struct net_device *VAR_5, u8 *VAR_6,
        u32 VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_3(VAR_5);
 bool VAR_9 = 1;
 u16 VAR_10;
 u16 VAR_11, VAR_12 = 0;
 int VAR_13;

 rt_firmware *VAR_14 = VAR_8->pFirmware;
 struct sk_buff *VAR_15;
 unsigned char *VAR_16;
 struct cb_desc *VAR_17;
 u8 VAR_18;
 u8 VAR_19;

 FUNC_2(VAR_5);

 VAR_10 = VAR_14->cmdpacket_frag_threshold;
 do {
  if ((VAR_7 - VAR_12) > VAR_10) {
   VAR_11 = VAR_10;
   VAR_18 = 0;

  } else {
   VAR_11 = VAR_7 - VAR_12;
   VAR_18 = 1;

  }




  VAR_15 = FUNC_1(VAR_4 + VAR_11 + 4);
  if (!VAR_15)
   return 0;
  FUNC_4((unsigned char *)(VAR_15->cb), &VAR_5, sizeof(VAR_5));
  VAR_17 = (struct cb_desc *)(VAR_15->cb + VAR_2);
  VAR_17->queue_index = VAR_3;
  VAR_17->bCmdOrInit = VAR_1;
  VAR_17->bLastIniPkt = VAR_18;

  FUNC_8(VAR_15, VAR_4);
  VAR_16 = VAR_15->data;




  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13 += 4) {
   *VAR_16++ = ((VAR_13+0) < VAR_11)?VAR_6[VAR_13+3] : 0;
   *VAR_16++ = ((VAR_13+1) < VAR_11)?VAR_6[VAR_13+2] : 0;
   *VAR_16++ = ((VAR_13+2) < VAR_11)?VAR_6[VAR_13+1] : 0;
   *VAR_16++ = ((VAR_13+3) < VAR_11)?VAR_6[VAR_13+0] : 0;
  }
  VAR_17->txbuf_size = (u16)VAR_13;
  FUNC_5(VAR_15, VAR_13);

  VAR_19 = VAR_17->queue_index;
  if (!VAR_8->ieee80211->check_nic_enough_desc(VAR_5, VAR_19) ||
         (!FUNC_6(&VAR_8->ieee80211->skb_waitQ[VAR_19])) ||
         (VAR_8->ieee80211->queue_stop)) {
   FUNC_0(VAR_0, "=====================================================> tx full!\n");
   FUNC_7(&VAR_8->ieee80211->skb_waitQ[VAR_17->queue_index], VAR_15);
  } else {
   VAR_8->ieee80211->softmac_hard_start_xmit(VAR_15, VAR_5);
  }

  VAR_6 += VAR_11;
  VAR_12 += VAR_11;

 } while (VAR_12 < VAR_7);

 return VAR_9;

}
