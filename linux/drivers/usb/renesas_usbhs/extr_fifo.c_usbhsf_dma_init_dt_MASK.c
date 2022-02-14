
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_fifo {int * rx_chan; int * tx_chan; } ;
struct device {int dummy; } ;
typedef int name ;


 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (struct device*,char*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct usbhs_fifo *VAR_1,
          int VAR_2)
{
 char VAR_3[16];






 FUNC_2(VAR_3, sizeof(VAR_3), "ch%d", VAR_2);
 if (VAR_2 & 1) {
  VAR_1->tx_chan = FUNC_1(VAR_0, VAR_3);
  if (FUNC_0(VAR_1->tx_chan))
   VAR_1->tx_chan = ((void*)0);
 } else {
  VAR_1->rx_chan = FUNC_1(VAR_0, VAR_3);
  if (FUNC_0(VAR_1->rx_chan))
   VAR_1->rx_chan = ((void*)0);
 }
}
