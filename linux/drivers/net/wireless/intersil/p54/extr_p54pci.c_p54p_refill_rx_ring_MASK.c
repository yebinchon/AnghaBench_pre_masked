
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct p54p_ring_control {void** host_idx; } ;
struct TYPE_4__ {scalar_t__ rx_mtu; } ;
struct p54p_priv {TYPE_1__ common; TYPE_2__* pdev; struct p54p_ring_control* ring_control; } ;
struct p54p_desc {scalar_t__ flags; int len; scalar_t__ device_addr; void* host_addr; } ;
struct ieee80211_hw {struct p54p_priv* priv; } ;
typedef size_t dma_addr_t ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (size_t) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct sk_buff*) ;
 size_t FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,size_t) ;
 size_t FUNC_7 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_1,
 int VAR_2, struct p54p_desc *VAR_3, u32 VAR_4,
 struct sk_buff **VAR_5, u32 VAR_6)
{
 struct p54p_priv *VAR_7 = VAR_1->priv;
 struct p54p_ring_control *VAR_8 = VAR_7->ring_control;
 u32 VAR_9, VAR_10, VAR_11;

 VAR_10 = FUNC_5(VAR_8->host_idx[VAR_2]);
 VAR_9 = VAR_10;
 VAR_9 -= VAR_6;
 VAR_9 = VAR_4 - VAR_9;

 VAR_11 = VAR_10 % VAR_4;
 while (VAR_9-- > 1) {
  struct p54p_desc *VAR_12 = &VAR_3[VAR_11];

  if (!VAR_12->host_addr) {
   struct sk_buff *VAR_13;
   dma_addr_t VAR_14;
   VAR_13 = FUNC_2(VAR_7->common.rx_mtu + 32);
   if (!VAR_13)
    break;

   VAR_14 = FUNC_7(VAR_7->pdev,
       FUNC_8(VAR_13),
       VAR_7->common.rx_mtu + 32,
       VAR_0);

   if (FUNC_6(VAR_7->pdev, VAR_14)) {
    FUNC_4(VAR_13);
    FUNC_3(&VAR_7->pdev->dev,
     "RX DMA Mapping error\n");
    break;
   }

   VAR_12->host_addr = FUNC_1(VAR_14);
   VAR_12->device_addr = 0;
   VAR_12->len = FUNC_0(VAR_7->common.rx_mtu + 32);
   VAR_12->flags = 0;
   VAR_5[VAR_11] = VAR_13;
  }

  VAR_11++;
  VAR_10++;
  VAR_11 %= VAR_4;
 }

 FUNC_9();
 VAR_8->host_idx[VAR_2] = FUNC_1(VAR_10);
}
