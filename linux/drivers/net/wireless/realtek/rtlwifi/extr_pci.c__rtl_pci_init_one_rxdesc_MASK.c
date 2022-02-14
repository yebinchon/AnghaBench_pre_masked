
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ cb; } ;
struct rtl_priv {TYPE_3__* cfg; scalar_t__ use_new_trx_flow; } ;
struct rtl_pci {int rxbuffersize; TYPE_1__* rx_ring; int pdev; } ;
struct ieee80211_hw {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_desc ) (struct ieee80211_hw*,int*,int,int ,int*) ;} ;
struct TYPE_4__ {struct sk_buff** rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_9 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_10 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_11 (struct ieee80211_hw*,int*,int,int ,int*) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_5,
        struct sk_buff *VAR_6, u8 *VAR_7,
        int VAR_8, int VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_6(VAR_5);
 struct rtl_pci *VAR_11 = FUNC_4(FUNC_5(VAR_5));
 u32 VAR_12;
 u8 VAR_13 = 1;
 struct sk_buff *VAR_14;

 if (FUNC_1(VAR_6)) {
  VAR_14 = VAR_6;
  goto remap;
 }
 VAR_14 = FUNC_0(VAR_11->rxbuffersize);
 if (!VAR_14)
  return 0;

remap:

 *((dma_addr_t *)VAR_14->cb) =
  FUNC_3(VAR_11->pdev, FUNC_7(VAR_14),
          VAR_11->rxbuffersize, VAR_4);
 VAR_12 = *((dma_addr_t *)VAR_14->cb);
 if (FUNC_2(VAR_11->pdev, VAR_12))
  return 0;
 VAR_11->rx_ring[VAR_8].rx_buf[VAR_9] = VAR_14;
 if (VAR_10->use_new_trx_flow) {

  VAR_10->cfg->ops->set_desc(VAR_5, (u8 *)VAR_7, 0,
         VAR_3,
         (u8 *)(dma_addr_t *)VAR_14->cb);
 } else {
  VAR_10->cfg->ops->set_desc(VAR_5, (u8 *)VAR_7, 0,
         VAR_0,
         (u8 *)&VAR_12);
  VAR_10->cfg->ops->set_desc(VAR_5, (u8 *)VAR_7, 0,
         VAR_2,
         (u8 *)&VAR_11->rxbuffersize);
  VAR_10->cfg->ops->set_desc(VAR_5, (u8 *)VAR_7, 0,
         VAR_1,
         (u8 *)&VAR_13);
 }
 return 1;
}
