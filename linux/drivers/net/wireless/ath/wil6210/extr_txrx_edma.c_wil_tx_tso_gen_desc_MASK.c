
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union wil_tx_desc {int dummy; } wil_tx_desc ;
typedef size_t uint ;
struct wil_tx_enhanced_desc {int dummy; } ;
struct wil_ring {TYPE_4__* ctx; TYPE_2__* va; } ;
struct TYPE_7__ {int (* tx_desc_map ) (union wil_tx_desc*,int ,int,int) ;} ;
struct wil6210_priv {TYPE_3__ txrx_ops; struct wil_ring* ring_tx; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_8__ {int skb; int mapped_as; } ;
struct TYPE_5__ {int enhanced; } ;
struct TYPE_6__ {TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,void*,int,int ) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int *,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (union wil_tx_desc*,int ,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct wil6210_priv*,char*) ;
 int FUNC_7 (char*,int ,int,int,void const*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device* FUNC_8 (struct wil6210_priv*) ;
 int VAR_5 ;
 int FUNC_9 (struct wil_tx_enhanced_desc*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_10(struct wil6210_priv *VAR_6, void *VAR_7,
          int VAR_8, uint VAR_9, int VAR_10,
          skb_frag_t *VAR_11, struct wil_ring *VAR_12,
          struct sk_buff *VAR_13, bool VAR_14,
          int VAR_15, int VAR_16,
          int VAR_17, int *VAR_18)
{
 struct device *VAR_19 = FUNC_8(VAR_6);
 struct wil_tx_enhanced_desc *VAR_20 = (struct wil_tx_enhanced_desc *)
  &VAR_12->va[VAR_9].tx.enhanced;
 struct wil_tx_enhanced_desc VAR_21, *VAR_22 = &VAR_21;
 int VAR_23 = VAR_12 - VAR_6->ring_tx;
 dma_addr_t VAR_24;

 if (VAR_8 == 0)
  return 0;

 if (!VAR_11) {
  VAR_24 = FUNC_0(VAR_19, VAR_7, VAR_8, VAR_0);
  VAR_12->ctx[VAR_9].mapped_as = VAR_4;
 } else {
  VAR_24 = FUNC_2(VAR_19, VAR_11, 0, VAR_8, VAR_0);
  VAR_12->ctx[VAR_9].mapped_as = VAR_3;
 }
 if (FUNC_5(FUNC_1(VAR_19, VAR_24))) {
  FUNC_6(VAR_6, "TSO: Skb DMA map error\n");
  return -VAR_2;
 }

 VAR_6->txrx_ops.tx_desc_map((union wil_tx_desc *)VAR_22, VAR_24,
       VAR_8, VAR_23);
 FUNC_9(VAR_22, VAR_10, VAR_14,
        VAR_15,
        VAR_16, VAR_17);





 if (VAR_10 == VAR_5)
  VAR_12->ctx[VAR_9].skb = FUNC_3(VAR_13);

 FUNC_7("TxD ", VAR_1, 32, 4,
     (const void *)VAR_22, sizeof(*VAR_22), 0);

 *VAR_20 = *VAR_22;
 (*VAR_18)++;

 return 0;
}
