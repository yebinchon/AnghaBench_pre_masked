
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; int bh; int rxq_pause; int flags; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct usbnet*,int ,int ,char*,int) ;
 int VAR_1 ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usbnet*,struct sk_buff*) ;

void FUNC_5(struct usbnet *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_0, &VAR_2->flags);

 while ((VAR_3 = FUNC_2(&VAR_2->rxq_pause)) != ((void*)0)) {
  FUNC_4(VAR_2, VAR_3);
  VAR_4++;
 }

 FUNC_3(&VAR_2->bh);

 FUNC_1(VAR_2, VAR_1, VAR_2->net,
    "paused rx queue disabled, %d skbs requeued\n", VAR_4);
}
