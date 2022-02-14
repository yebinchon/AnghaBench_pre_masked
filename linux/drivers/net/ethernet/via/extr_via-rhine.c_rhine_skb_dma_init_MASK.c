
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rhine_skb_dma {TYPE_2__* skb; int dma; } ;
struct rhine_private {int rx_buf_sz; } ;
struct TYPE_4__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct device*,int ,int const,int ) ;
 int FUNC_2 (struct device*,int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (struct net_device*,int const) ;
 struct rhine_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct rhine_private*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(struct net_device *VAR_4,
         struct rhine_skb_dma *VAR_5)
{
 struct rhine_private *VAR_6 = FUNC_4(VAR_4);
 struct device *VAR_7 = VAR_4->dev.parent;
 const int VAR_8 = VAR_6->rx_buf_sz;

 VAR_5->skb = FUNC_3(VAR_4, VAR_8);
 if (!VAR_5->skb)
  return -VAR_2;

 VAR_5->dma = FUNC_1(VAR_7, VAR_5->skb->data, VAR_8, VAR_0);
 if (FUNC_6(FUNC_2(VAR_7, VAR_5->dma))) {
  FUNC_5(VAR_6, VAR_3, VAR_4, "Rx DMA mapping failure\n");
  FUNC_0(VAR_5->skb);
  return -VAR_1;
 }

 return 0;
}
