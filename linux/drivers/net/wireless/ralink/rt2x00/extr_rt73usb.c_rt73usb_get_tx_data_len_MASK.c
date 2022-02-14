
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct queue_entry {TYPE_2__* queue; TYPE_1__* skb; } ;
struct TYPE_4__ {int usb_maxpacket; } ;
struct TYPE_3__ {int len; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct queue_entry *VAR_0)
{
 int VAR_1;





 VAR_1 = FUNC_0(VAR_0->skb->len, 4);
 VAR_1 += (4 * !(VAR_1 % VAR_0->queue->usb_maxpacket));

 return VAR_1;
}
