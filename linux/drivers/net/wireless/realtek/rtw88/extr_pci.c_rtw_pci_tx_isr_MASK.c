
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct TYPE_4__ {int rp; int len; int wp; } ;
struct rtw_pci_tx_ring {int queue_stopped; TYPE_2__ r; int queue; } ;
struct rtw_pci_tx_data {int sn; int dma; } ;
struct rtw_pci {int pdev; struct rtw_pci_tx_ring* tx_rings; } ;
struct rtw_dev {TYPE_1__* chip; struct ieee80211_hw* hw; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int tx_pkt_desc_sz; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_tx_info*) ;
 int FUNC_4 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 struct rtw_pci_tx_data* FUNC_7 (struct sk_buff*) ;
 int* VAR_6 ;
 int FUNC_8 (struct rtw_dev*,int) ;
 int FUNC_9 (struct rtw_dev*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_13(struct rtw_dev *VAR_7, struct rtw_pci *VAR_8,
      u8 VAR_9)
{
 struct ieee80211_hw *VAR_10 = VAR_7->hw;
 struct ieee80211_tx_info *VAR_11;
 struct rtw_pci_tx_ring *VAR_12;
 struct rtw_pci_tx_data *VAR_13;
 struct sk_buff *VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17, VAR_18;
 u16 VAR_19;

 VAR_12 = &VAR_8->tx_rings[VAR_9];

 VAR_16 = VAR_6[VAR_9];
 VAR_17 = FUNC_8(VAR_7, VAR_16);
 VAR_18 = VAR_17 >> 16;
 VAR_18 &= 0xfff;
 if (VAR_18 >= VAR_12->r.rp)
  VAR_15 = VAR_18 - VAR_12->r.rp;
 else
  VAR_15 = VAR_12->r.len - (VAR_12->r.rp - VAR_18);

 while (VAR_15--) {
  VAR_14 = FUNC_10(&VAR_12->queue);
  VAR_13 = FUNC_7(VAR_14);
  FUNC_6(VAR_8->pdev, VAR_13->dma, VAR_14->len,
     VAR_4);


  if (VAR_9 == VAR_5) {
   FUNC_2(VAR_14);
   continue;
  }

  if (VAR_12->queue_stopped &&
      FUNC_1(VAR_12->r.wp, VAR_12->r.rp, VAR_12->r.len) > 4) {
   VAR_19 = FUNC_11(VAR_14);
   FUNC_5(VAR_10, VAR_19);
   VAR_12->queue_stopped = 0;
  }

  FUNC_12(VAR_14, VAR_7->chip->tx_pkt_desc_sz);

  VAR_11 = FUNC_0(VAR_14);


  if (VAR_11->flags & VAR_1) {
   FUNC_9(VAR_7, VAR_14, VAR_13->sn);
   continue;
  }


  if (VAR_11->flags & VAR_0)
   VAR_11->flags |= VAR_3;
  else
   VAR_11->flags |= VAR_2;

  FUNC_3(VAR_11);
  FUNC_4(VAR_10, VAR_14);
 }

 VAR_12->r.rp = VAR_18;
}
