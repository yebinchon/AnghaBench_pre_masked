
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_asy {int lock; int * tty; int dev; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {int tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct x25_asy* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct x25_asy*,int ,scalar_t__) ;
 int FUNC_8 (struct x25_asy*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 struct x25_asy *VAR_2 = FUNC_3(VAR_0);

 FUNC_5(&VAR_2->lock);
 if (FUNC_4(VAR_2->dev) || VAR_2->tty == ((void*)0)) {
  FUNC_6(&VAR_2->lock);
  FUNC_2(VAR_0, "tbusy drop\n");
  FUNC_1(VAR_1);
  return;
 }

 if (VAR_1 != ((void*)0)) {
  FUNC_8(VAR_2);
  VAR_0->stats.tx_bytes += VAR_1->len;
  FUNC_7(VAR_2, VAR_1->data, VAR_1->len);
  FUNC_0(VAR_1);
 }
 FUNC_6(&VAR_2->lock);
}
