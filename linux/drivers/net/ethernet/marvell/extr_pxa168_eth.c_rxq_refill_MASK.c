
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct rx_desc {int buf_size; int cmd_sts; int buf_ptr; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct pxa168_eth_private {scalar_t__ rx_desc_count; scalar_t__ rx_ring_size; int rx_used_desc_q; TYPE_2__ timeout; scalar_t__ rx_resource_err; struct sk_buff** rx_skb; TYPE_1__* pdev; struct rx_desc* p_rx_desc_area; int skb_size; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int,int,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_3 (struct net_device*,int ) ;
 struct pxa168_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_7)
{
 struct pxa168_eth_private *VAR_8 = FUNC_4(VAR_7);
 struct sk_buff *VAR_9;
 struct rx_desc *VAR_10;
 int VAR_11;

 while (VAR_8->rx_desc_count < VAR_8->rx_ring_size) {
  int VAR_12;

  VAR_9 = FUNC_3(VAR_7, VAR_8->skb_size);
  if (!VAR_9)
   break;
  if (VAR_5)
   FUNC_6(VAR_9, VAR_5);
  VAR_8->rx_desc_count++;

  VAR_11 = VAR_8->rx_used_desc_q;
  VAR_10 = &VAR_8->p_rx_desc_area[VAR_11];
  VAR_12 = FUNC_5(VAR_9) - VAR_9->data;
  VAR_10->buf_ptr = FUNC_1(&VAR_8->pdev->dev,
        VAR_9->data,
        VAR_12,
        VAR_1);
  VAR_10->buf_size = VAR_12;
  VAR_8->rx_skb[VAR_11] = VAR_9;


  FUNC_2();
  VAR_10->cmd_sts = VAR_0 | VAR_4;
  FUNC_2();


  VAR_8->rx_used_desc_q = (VAR_11 + 1) % VAR_8->rx_ring_size;


  VAR_8->rx_resource_err = 0;

  FUNC_6(VAR_9, VAR_2);
 }





 if (VAR_8->rx_desc_count == 0) {
  VAR_8->timeout.expires = VAR_6 + (VAR_3 / 10);
  FUNC_0(&VAR_8->timeout);
 }
}
