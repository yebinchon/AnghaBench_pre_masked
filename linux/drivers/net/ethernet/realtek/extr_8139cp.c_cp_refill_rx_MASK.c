
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct cp_private {int rx_buf_sz; TYPE_2__* rx_ring; struct sk_buff** rx_skb; TYPE_1__* pdev; struct net_device* dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {void* opts1; int addr; scalar_t__ opts2; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cp_private*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_7(struct cp_private *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->dev;
 unsigned VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct sk_buff *VAR_8;
  dma_addr_t VAR_9;

  VAR_8 = FUNC_6(VAR_6, VAR_5->rx_buf_sz);
  if (!VAR_8)
   goto err_out;

  VAR_9 = FUNC_3(&VAR_5->pdev->dev, VAR_8->data,
      VAR_5->rx_buf_sz, VAR_3);
  if (FUNC_4(&VAR_5->pdev->dev, VAR_9)) {
   FUNC_5(VAR_8);
   goto err_out;
  }
  VAR_5->rx_skb[VAR_7] = VAR_8;

  VAR_5->rx_ring[VAR_7].opts2 = 0;
  VAR_5->rx_ring[VAR_7].addr = FUNC_2(VAR_9);
  if (VAR_7 == (VAR_0 - 1))
   VAR_5->rx_ring[VAR_7].opts1 =
    FUNC_1(VAR_1 | VAR_4 | VAR_5->rx_buf_sz);
  else
   VAR_5->rx_ring[VAR_7].opts1 =
    FUNC_1(VAR_1 | VAR_5->rx_buf_sz);
 }

 return 0;

err_out:
 FUNC_0(VAR_5);
 return -VAR_2;
}
