
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int line; int flags; int regshift; TYPE_3__* dev; int serial_in; int iotype; int serial_out; int type; } ;
struct TYPE_4__ {int fn; int tx_param; int rx_param; } ;
struct TYPE_5__ {TYPE_1__ dma; } ;
struct dw8250_data {int usr_reg; int skip_autocfg; int uart_16550_compatible; TYPE_2__ data; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int parent; struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 scalar_t__ FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_14, struct dw8250_data *VAR_15)
{
 if (VAR_14->dev->of_node) {
  struct device_node *VAR_16 = VAR_14->dev->of_node;
  int VAR_17;


  VAR_17 = FUNC_1(VAR_16, "serial");
  if (VAR_17 >= 0)
   VAR_14->line = VAR_17;
  if (FUNC_2(VAR_14->dev->of_node)) {
   VAR_14->iotype = VAR_6;
   VAR_14->serial_in = VAR_9;
   VAR_14->serial_out = VAR_11;
  }
  if (FUNC_3(VAR_16, "marvell,armada-38x-uart"))
   VAR_14->serial_out = VAR_12;

 } else if (FUNC_0("APMC0D08", ((void*)0), -1)) {
  VAR_14->iotype = VAR_5;
  VAR_14->regshift = 2;
  VAR_14->serial_in = VAR_8;
  VAR_15->uart_16550_compatible = 1;
 }


 if (FUNC_4(FUNC_5(VAR_14->dev),
      VAR_0, "lpss_priv")) {
  VAR_15->data.dma.rx_param = VAR_14->dev->parent;
  VAR_15->data.dma.tx_param = VAR_14->dev->parent;
  VAR_15->data.dma.fn = VAR_7;
 }
}
