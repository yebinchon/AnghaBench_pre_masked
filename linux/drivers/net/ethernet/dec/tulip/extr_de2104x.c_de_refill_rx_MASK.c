
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct de_private {int rx_buf_sz; TYPE_2__* rx_ring; TYPE_1__* rx_skb; int pdev; int dev; } ;
struct TYPE_4__ {scalar_t__ addr2; void* addr1; void* opts2; void* opts1; } ;
struct TYPE_3__ {int mapping; struct sk_buff* skb; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct de_private*) ;
 struct sk_buff* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_4 (struct de_private *VAR_5)
{
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct sk_buff *VAR_7;

  VAR_7 = FUNC_2(VAR_5->dev, VAR_5->rx_buf_sz);
  if (!VAR_7)
   goto err_out;

  VAR_5->rx_skb[VAR_6].mapping = FUNC_3(VAR_5->pdev,
   VAR_7->data, VAR_5->rx_buf_sz, VAR_3);
  VAR_5->rx_skb[VAR_6].skb = VAR_7;

  VAR_5->rx_ring[VAR_6].opts1 = FUNC_0(VAR_1);
  if (VAR_6 == (VAR_0 - 1))
   VAR_5->rx_ring[VAR_6].opts2 =
    FUNC_0(VAR_4 | VAR_5->rx_buf_sz);
  else
   VAR_5->rx_ring[VAR_6].opts2 = FUNC_0(VAR_5->rx_buf_sz);
  VAR_5->rx_ring[VAR_6].addr1 = FUNC_0(VAR_5->rx_skb[VAR_6].mapping);
  VAR_5->rx_ring[VAR_6].addr2 = 0;
 }

 return 0;

err_out:
 FUNC_1(VAR_5);
 return -VAR_2;
}
