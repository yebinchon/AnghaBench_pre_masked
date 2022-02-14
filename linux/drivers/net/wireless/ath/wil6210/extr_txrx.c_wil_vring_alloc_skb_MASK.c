
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct wil_ring {TYPE_4__* ctx; TYPE_2__* va; } ;
struct wil6210_priv {unsigned int rx_buf_len; } ;
struct TYPE_7__ {int d0; int length; scalar_t__ status; int addr; } ;
struct vring_rx_desc {TYPE_3__ dma; } ;
struct sk_buff {int len; int data; int ip_summed; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {struct sk_buff* skb; } ;
struct TYPE_5__ {struct vring_rx_desc legacy; } ;
struct TYPE_6__ {TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 struct sk_buff* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int ) ;
 unsigned int FUNC_9 () ;
 struct device* FUNC_10 (struct wil6210_priv*) ;

__attribute__((used)) static int FUNC_11(struct wil6210_priv *VAR_6, struct wil_ring *VAR_7,
          u32 VAR_8, int VAR_9)
{
 struct device *VAR_10 = FUNC_10(VAR_6);
 unsigned int VAR_11 = VAR_6->rx_buf_len + VAR_3 + FUNC_9();
 struct vring_rx_desc VAR_12, *VAR_13 = &VAR_12;
 volatile struct vring_rx_desc *VAR_14 = &VAR_7->va[VAR_8].rx.legacy;
 dma_addr_t VAR_15;
 struct sk_buff *VAR_16 = FUNC_1(VAR_11 + VAR_9);

 if (FUNC_7(!VAR_16))
  return -VAR_2;

 FUNC_6(VAR_16, VAR_9);
 FUNC_5(VAR_16, VAR_11);





 VAR_16->ip_summed = VAR_0;

 VAR_15 = FUNC_2(VAR_10, VAR_16->data, VAR_16->len, VAR_1);
 if (FUNC_7(FUNC_3(VAR_10, VAR_15))) {
  FUNC_4(VAR_16);
  return -VAR_2;
 }

 VAR_13->dma.d0 = VAR_5 | VAR_4;
 FUNC_8(&VAR_13->dma.addr, VAR_15);



 VAR_13->dma.status = 0;
 VAR_13->dma.length = FUNC_0(VAR_11);
 *VAR_14 = *VAR_13;
 VAR_7->ctx[VAR_8].skb = VAR_16;

 return 0;
}
