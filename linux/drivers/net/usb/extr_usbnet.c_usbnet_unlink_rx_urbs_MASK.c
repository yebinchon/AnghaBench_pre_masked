
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int bh; int rxq; int net; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usbnet*,int *) ;

void FUNC_3(struct usbnet *VAR_0)
{
 if (FUNC_0(VAR_0->net)) {
  (void) FUNC_2 (VAR_0, &VAR_0->rxq);
  FUNC_1(&VAR_0->bh);
 }
}
