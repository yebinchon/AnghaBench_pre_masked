
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int truesize; int len; scalar_t__ data; } ;
struct mwl8k_priv {TYPE_1__* hw; scalar_t__ ap_fw; } ;
struct ieee80211_hdr {int frame_control; } ;
struct mwl8k_dma_data {int fwlen; struct ieee80211_hdr wh; } ;
struct ieee80211_cts {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hdr*,struct ieee80211_hdr*,int) ;
 int FUNC_4 (void*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8(struct mwl8k_priv *VAR_3, struct sk_buff *VAR_4,
      int VAR_5, int VAR_6)
{
 struct ieee80211_hdr *VAR_7;
 int VAR_8;
 int VAR_9;
 struct mwl8k_dma_data *VAR_10;







 VAR_7 = (struct ieee80211_hdr *)VAR_4->data;

 VAR_8 = FUNC_1(VAR_7->frame_control);





 if (VAR_3->ap_fw && (VAR_8 < (sizeof(struct ieee80211_cts)
      + VAR_2))) {
  if (FUNC_5(VAR_4, VAR_2, 0, VAR_0)) {

   FUNC_7(VAR_3->hw->wiphy,
     "Failed to reallocate TX buffer\n");
   return;
  }
  VAR_4->truesize += VAR_2;
 }

 VAR_9 = sizeof(*VAR_10) + VAR_5;

 if (VAR_8 != VAR_9)
  FUNC_6(VAR_4, VAR_9 - VAR_8);

 if (FUNC_2(VAR_7->frame_control))
  VAR_8 -= VAR_1;

 VAR_10 = (struct mwl8k_dma_data *)VAR_4->data;
 if (VAR_7 != &VAR_10->wh)
  FUNC_3(&VAR_10->wh, VAR_7, VAR_8);
 if (VAR_8 != sizeof(VAR_10->wh))
  FUNC_4(((void *)&VAR_10->wh) + VAR_8, 0, sizeof(VAR_10->wh) - VAR_8);






 VAR_10->fwlen = FUNC_0(VAR_4->len - sizeof(*VAR_10) + VAR_6);
}
