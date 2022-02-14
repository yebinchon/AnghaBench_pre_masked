
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_fifo {scalar_t__ rx_chan; scalar_t__ tx_chan; int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,char*,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct usbhs_priv*) ;
 int FUNC_3 (struct device*,struct usbhs_fifo*,int) ;
 int FUNC_4 (struct usbhs_fifo*) ;

__attribute__((used)) static void FUNC_5(struct usbhs_priv *VAR_0, struct usbhs_fifo *VAR_1,
       int VAR_2)
{
 struct device *VAR_3 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_3))
  FUNC_3(VAR_3, VAR_1, VAR_2);
 else
  FUNC_4(VAR_1);

 if (VAR_1->tx_chan || VAR_1->rx_chan)
  FUNC_0(VAR_3, "enable DMAEngine (%s%s%s)\n",
    VAR_1->name,
    VAR_1->tx_chan ? "[TX]" : "    ",
    VAR_1->rx_chan ? "[RX]" : "    ");
}
