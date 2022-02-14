
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
struct TYPE_6__ {int len; int data; } ;
struct TYPE_5__ {TYPE_1__* rt2x00dev; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct device*,int ) ;
 struct skb_frame_desc* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct queue_entry*) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct queue_entry *VAR_3)
{
 struct device *VAR_4 = VAR_3->queue->rt2x00dev->dev;
 struct skb_frame_desc *VAR_5 = FUNC_2(VAR_3->skb);

 VAR_5->skb_dma =
     FUNC_0(VAR_4, VAR_3->skb->data, VAR_3->skb->len, VAR_0);

 if (FUNC_4(FUNC_1(VAR_4, VAR_5->skb_dma)))
  return -VAR_1;

 VAR_5->flags |= VAR_2;
 FUNC_3(VAR_3);
 return 0;
}
