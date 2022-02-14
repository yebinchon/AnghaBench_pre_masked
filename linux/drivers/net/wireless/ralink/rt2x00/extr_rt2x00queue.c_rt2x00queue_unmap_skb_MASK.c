
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct skb_frame_desc {int flags; int skb_dma; } ;
struct queue_entry {TYPE_3__* skb; TYPE_2__* queue; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {TYPE_1__* rt2x00dev; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 struct skb_frame_desc* FUNC_1 (TYPE_3__*) ;

void FUNC_2(struct queue_entry *VAR_4)
{
 struct device *VAR_5 = VAR_4->queue->rt2x00dev->dev;
 struct skb_frame_desc *VAR_6 = FUNC_1(VAR_4->skb);

 if (VAR_6->flags & VAR_2) {
  FUNC_0(VAR_5, VAR_6->skb_dma, VAR_4->skb->len,
     VAR_0);
  VAR_6->flags &= ~VAR_2;
 } else if (VAR_6->flags & VAR_3) {
  FUNC_0(VAR_5, VAR_6->skb_dma, VAR_4->skb->len,
     VAR_1);
  VAR_6->flags &= ~VAR_3;
 }
}
