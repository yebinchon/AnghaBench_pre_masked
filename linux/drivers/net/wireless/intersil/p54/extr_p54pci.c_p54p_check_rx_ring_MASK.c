
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct p54p_ring_control {int * device_idx; } ;
struct TYPE_5__ {scalar_t__ rx_mtu; } ;
struct p54p_priv {TYPE_1__ common; TYPE_2__* pdev; struct p54p_ring_control* ring_control; } ;
struct p54p_desc {int len; int host_addr; } ;
struct ieee80211_hw {struct p54p_priv* priv; } ;
typedef void* dma_addr_t ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_7 (struct ieee80211_hw*,int,struct p54p_desc*,size_t,struct sk_buff**,size_t) ;
 int FUNC_8 (TYPE_2__*,void*,scalar_t__,int ) ;
 int FUNC_9 (TYPE_2__*,void*,scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*,void*,scalar_t__,int ) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_1, u32 *VAR_2,
 int VAR_3, struct p54p_desc *VAR_4, u32 VAR_5,
 struct sk_buff **VAR_6)
{
 struct p54p_priv *VAR_7 = VAR_1->priv;
 struct p54p_ring_control *VAR_8 = VAR_7->ring_control;
 struct p54p_desc *VAR_9;
 u32 VAR_10, VAR_11;

 VAR_11 = (*VAR_2) % VAR_5;
 (*VAR_2) = VAR_10 = FUNC_4(VAR_8->device_idx[VAR_3]);
 VAR_10 %= VAR_5;
 while (VAR_11 != VAR_10) {
  u16 VAR_12;
  struct sk_buff *VAR_13;
  dma_addr_t VAR_14;
  VAR_9 = &VAR_4[VAR_11];
  VAR_12 = FUNC_3(VAR_9->len);
  VAR_13 = VAR_6[VAR_11];

  if (!VAR_13) {
   VAR_11++;
   VAR_11 %= VAR_5;
   continue;
  }

  if (FUNC_13(VAR_12 > VAR_7->common.rx_mtu)) {
   if (FUNC_5())
    FUNC_2(&VAR_7->pdev->dev, "rx'd frame size "
     "exceeds length threshold.\n");

   VAR_12 = VAR_7->common.rx_mtu;
  }
  VAR_14 = FUNC_4(VAR_9->host_addr);
  FUNC_8(VAR_7->pdev, VAR_14,
   VAR_7->common.rx_mtu + 32, VAR_0);
  FUNC_11(VAR_13, VAR_12);

  if (FUNC_6(VAR_1, VAR_13)) {
   FUNC_10(VAR_7->pdev, VAR_14,
    VAR_7->common.rx_mtu + 32, VAR_0);
   VAR_6[VAR_11] = ((void*)0);
   VAR_9->host_addr = FUNC_1(0);
  } else {
   FUNC_12(VAR_13, 0);
   FUNC_9(VAR_7->pdev, VAR_14,
    VAR_7->common.rx_mtu + 32, VAR_0);
   VAR_9->len = FUNC_0(VAR_7->common.rx_mtu + 32);
  }

  VAR_11++;
  VAR_11 %= VAR_5;
 }

 FUNC_7(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, *VAR_2);
}
