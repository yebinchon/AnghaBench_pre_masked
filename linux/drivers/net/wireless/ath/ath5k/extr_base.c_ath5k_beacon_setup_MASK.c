
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct ieee80211_tx_info {int dummy; } ;
struct TYPE_3__ {int txp_requested; } ;
struct ath5k_hw {int ah_tx_ant; scalar_t__ opmode; scalar_t__ ah_ant_mode; int bsent; int (* ah_setup_tx_desc ) (struct ath5k_hw*,struct ath5k_desc*,int ,int ,int const,int ,int,int ,int,int ,int,int ,int ,int ) ;int dev; int hw; TYPE_1__ ah_txpower; } ;
struct ath5k_desc {scalar_t__ ds_data; scalar_t__ ds_link; } ;
struct ath5k_buf {scalar_t__ skbaddr; scalar_t__ daddr; struct ath5k_desc* desc; struct sk_buff* skb; } ;
struct TYPE_4__ {int hw_value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*,struct sk_buff*,int ,int ,unsigned long long) ;
 int VAR_5 ;
 int FUNC_1 (struct ath5k_hw*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_2__* FUNC_9 (int ,struct ieee80211_tx_info*) ;
 int FUNC_10 (struct ath5k_hw*,struct ath5k_desc*,int ,int ,int const,int ,int,int ,int,int ,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct ath5k_hw *VAR_9, struct ath5k_buf *VAR_10)
{
 struct sk_buff *VAR_11 = VAR_10->skb;
 struct ieee80211_tx_info *VAR_12 = FUNC_2(VAR_11);
 struct ath5k_desc *VAR_13;
 int VAR_14 = 0;
 u8 VAR_15;
 u32 VAR_16;
 const int VAR_17 = 0;

 VAR_10->skbaddr = FUNC_5(VAR_9->dev, VAR_11->data, VAR_11->len,
   VAR_6);
 FUNC_0(VAR_9, VAR_5, "skb %p [data %p len %u] "
   "skbaddr %llx\n", VAR_11, VAR_11->data, VAR_11->len,
   (unsigned long long)VAR_10->skbaddr);

 if (FUNC_6(VAR_9->dev, VAR_10->skbaddr)) {
  FUNC_1(VAR_9, "beacon DMA mapping failed\n");
  FUNC_4(VAR_11);
  VAR_10->skb = ((void*)0);
  return -VAR_7;
 }

 VAR_13 = VAR_10->desc;
 VAR_15 = VAR_9->ah_tx_ant;

 VAR_16 = VAR_2;
 if (VAR_9->opmode == VAR_8 && FUNC_3(VAR_9)) {
  VAR_13->ds_link = VAR_10->daddr;
  VAR_16 |= VAR_3;
 } else
  VAR_13->ds_link = 0;
 if (VAR_9->ah_ant_mode == VAR_0)
  VAR_15 = VAR_9->bsent & 4 ? 2 : 1;





 VAR_13->ds_data = VAR_10->skbaddr;
 VAR_14 = VAR_9->ah_setup_tx_desc(VAR_9, VAR_13, VAR_11->len,
   FUNC_8(VAR_11), VAR_17,
   VAR_1,
   (VAR_9->ah_txpower.txp_requested * 2),
   FUNC_9(VAR_9->hw, VAR_12)->hw_value,
   1, VAR_4,
   VAR_15, VAR_16, 0, 0);
 if (VAR_14)
  goto err_unmap;

 return 0;
err_unmap:
 FUNC_7(VAR_9->dev, VAR_10->skbaddr, VAR_11->len, VAR_6);
 return VAR_14;
}
