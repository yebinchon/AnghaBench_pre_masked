
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_2__* net; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_1 (struct usbnet*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct usbnet *VAR_1,
  struct sk_buff *VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4;


 VAR_4 = FUNC_2(VAR_2, VAR_0);


 FUNC_3(VAR_2, VAR_3);


 if (VAR_4) {
  FUNC_4(VAR_4, VAR_3);
 } else {
  if (FUNC_1(VAR_1))
   FUNC_0(VAR_1->net, "failed to get skb\n");
  VAR_1->net->stats.rx_dropped++;
 }

 return VAR_4;
}
