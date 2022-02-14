
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rx_desc {int dummy; } ;
struct rhine_skb_dma {int dummy; } ;
struct rhine_private {int rx_buf_sz; int rx_ring_dma; TYPE_1__* rx_ring; int ** rx_skbuff; } ;
struct net_device {int mtu; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* next_desc; void* desc_length; scalar_t__ rx_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 struct rhine_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rhine_private*) ;
 int FUNC_4 (struct net_device*,struct rhine_skb_dma*) ;
 int FUNC_5 (struct rhine_private*,struct rhine_skb_dma*,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct rhine_private *VAR_3 = FUNC_2(VAR_2);
 dma_addr_t VAR_4;
 int VAR_5, VAR_6;

 VAR_3->rx_buf_sz = (VAR_2->mtu <= 1500 ? VAR_0 : VAR_2->mtu + 32);
 VAR_4 = VAR_3->rx_ring_dma;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_3->rx_ring[VAR_6].rx_status = 0;
  VAR_3->rx_ring[VAR_6].desc_length = FUNC_0(VAR_3->rx_buf_sz);
  VAR_4 += sizeof(struct rx_desc);
  VAR_3->rx_ring[VAR_6].next_desc = FUNC_0(VAR_4);
  VAR_3->rx_skbuff[VAR_6] = ((void*)0);
 }

 VAR_3->rx_ring[VAR_6-1].next_desc = FUNC_0(VAR_3->rx_ring_dma);


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct rhine_skb_dma VAR_7;

  VAR_5 = FUNC_4(VAR_2, &VAR_7);
  if (VAR_5 < 0) {
   FUNC_1(VAR_2);
   goto out;
  }

  FUNC_5(VAR_3, &VAR_7, VAR_6);
 }

 FUNC_3(VAR_3);
out:
 return VAR_5;
}
