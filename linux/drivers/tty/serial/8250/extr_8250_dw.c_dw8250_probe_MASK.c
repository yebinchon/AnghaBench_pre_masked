
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int irq; int flags; int regshift; int uartclk; int fifosize; int * handle_irq; int serial_out; int serial_in; int iotype; TYPE_4__* private_data; int membase; int set_termios; int set_ldisc; struct device* dev; int type; int pm; int mapbase; int lock; } ;
struct uart_8250_port {TYPE_3__* dma; struct uart_port port; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int dst_maxburst; } ;
struct TYPE_5__ {int src_maxburst; } ;
struct TYPE_7__ {TYPE_2__ txconf; TYPE_1__ rxconf; int fn; } ;
struct TYPE_8__ {int line; TYPE_3__ dma; } ;
struct dw8250_data {void* clk; void* pclk; void* rst; TYPE_4__ data; int skip_autocfg; scalar_t__ uart_16550_compatible; int msr_mask_off; int msr_mask_on; int usr_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_6 ;
 int FUNC_2 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,int) ;
 scalar_t__ FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*,int*) ;
 void* FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct device*,int ,int ) ;
 struct dw8250_data* FUNC_12 (struct device*,int,int ) ;
 void* FUNC_13 (struct device*,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int FUNC_14 (struct uart_port*,struct dw8250_data*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_15 (struct uart_port*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct dw8250_data*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (void*) ;
 int FUNC_22 (void*) ;
 int FUNC_23 (struct resource*) ;
 int FUNC_24 (struct uart_8250_port*) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_28)
{
 struct uart_8250_port VAR_29 = {}, *VAR_30 = &VAR_29;
 struct resource *VAR_31 = FUNC_17(VAR_28, VAR_5, 0);
 int VAR_32 = FUNC_16(VAR_28, 0);
 struct uart_port *VAR_33 = &VAR_30->port;
 struct device *VAR_34 = &VAR_28->dev;
 struct dw8250_data *VAR_35;
 int VAR_36;
 u32 VAR_37;

 if (!VAR_31) {
  FUNC_6(VAR_34, "no registers defined\n");
  return -VAR_1;
 }

 if (VAR_32 < 0) {
  if (VAR_32 != -VAR_3)
   FUNC_6(VAR_34, "cannot get irq\n");
  return VAR_32;
 }

 FUNC_25(&VAR_33->lock);
 VAR_33->mapbase = VAR_31->start;
 VAR_33->irq = VAR_32;
 VAR_33->handle_irq = VAR_21;
 VAR_33->pm = VAR_19;
 VAR_33->type = VAR_6;
 VAR_33->flags = VAR_16 | VAR_15;
 VAR_33->dev = VAR_34;
 VAR_33->iotype = VAR_17;
 VAR_33->serial_in = VAR_22;
 VAR_33->serial_out = VAR_24;
 VAR_33->set_ldisc = VAR_26;
 VAR_33->set_termios = VAR_27;

 VAR_33->membase = FUNC_11(VAR_34, VAR_31->start, FUNC_23(VAR_31));
 if (!VAR_33->membase)
  return -VAR_2;

 VAR_35 = FUNC_12(VAR_34, sizeof(*VAR_35), VAR_4);
 if (!VAR_35)
  return -VAR_2;

 VAR_35->data.dma.fn = VAR_20;
 VAR_35->usr_reg = VAR_0;
 VAR_33->private_data = &VAR_35->data;

 VAR_35->uart_16550_compatible = FUNC_8(VAR_34,
      "snps,uart-16550-compatible");

 VAR_36 = FUNC_9(VAR_34, "reg-shift", &VAR_37);
 if (!VAR_36)
  VAR_33->regshift = VAR_37;

 VAR_36 = FUNC_9(VAR_34, "reg-io-width", &VAR_37);
 if (!VAR_36 && VAR_37 == 4) {
  VAR_33->iotype = VAR_18;
  VAR_33->serial_in = VAR_23;
  VAR_33->serial_out = VAR_25;
 }

 if (FUNC_8(VAR_34, "dcd-override")) {

  VAR_35->msr_mask_on |= VAR_8;
  VAR_35->msr_mask_off |= VAR_10;
 }

 if (FUNC_8(VAR_34, "dsr-override")) {

  VAR_35->msr_mask_on |= VAR_12;
  VAR_35->msr_mask_off |= VAR_11;
 }

 if (FUNC_8(VAR_34, "cts-override")) {

  VAR_35->msr_mask_on |= VAR_7;
  VAR_35->msr_mask_off |= VAR_9;
 }

 if (FUNC_8(VAR_34, "ri-override")) {

  VAR_35->msr_mask_off |= VAR_13;
  VAR_35->msr_mask_off |= VAR_14;
 }


 FUNC_9(VAR_34, "clock-frequency", &VAR_33->uartclk);


 VAR_35->clk = FUNC_10(VAR_34, "baudclk");
 if (FUNC_0(VAR_35->clk) && FUNC_2(VAR_35->clk) != -VAR_3)
  VAR_35->clk = FUNC_10(VAR_34, ((void*)0));
 if (FUNC_0(VAR_35->clk) && FUNC_2(VAR_35->clk) == -VAR_3)
  return -VAR_3;
 if (!FUNC_1(VAR_35->clk)) {
  VAR_36 = FUNC_5(VAR_35->clk);
  if (VAR_36)
   FUNC_7(VAR_34, "could not enable optional baudclk: %d\n",
     VAR_36);
  else
   VAR_33->uartclk = FUNC_4(VAR_35->clk);
 }


 if (!VAR_33->uartclk) {
  FUNC_6(VAR_34, "clock rate not defined\n");
  VAR_36 = -VAR_1;
  goto err_clk;
 }

 VAR_35->pclk = FUNC_10(VAR_34, "apb_pclk");
 if (FUNC_0(VAR_35->pclk) && FUNC_2(VAR_35->pclk) == -VAR_3) {
  VAR_36 = -VAR_3;
  goto err_clk;
 }
 if (!FUNC_0(VAR_35->pclk)) {
  VAR_36 = FUNC_5(VAR_35->pclk);
  if (VAR_36) {
   FUNC_6(VAR_34, "could not enable apb_pclk\n");
   goto err_clk;
  }
 }

 VAR_35->rst = FUNC_13(VAR_34, ((void*)0));
 if (FUNC_0(VAR_35->rst)) {
  VAR_36 = FUNC_2(VAR_35->rst);
  goto err_pclk;
 }
 FUNC_22(VAR_35->rst);

 FUNC_14(VAR_33, VAR_35);


 if (VAR_35->uart_16550_compatible)
  VAR_33->handle_irq = ((void*)0);

 if (!VAR_35->skip_autocfg)
  FUNC_15(VAR_33);


 if (VAR_33->fifosize) {
  VAR_35->data.dma.rxconf.src_maxburst = VAR_33->fifosize / 4;
  VAR_35->data.dma.txconf.dst_maxburst = VAR_33->fifosize / 4;
  VAR_30->dma = &VAR_35->data.dma;
 }

 VAR_35->data.line = FUNC_24(VAR_30);
 if (VAR_35->data.line < 0) {
  VAR_36 = VAR_35->data.line;
  goto err_reset;
 }

 FUNC_18(VAR_28, VAR_35);

 FUNC_20(VAR_34);
 FUNC_19(VAR_34);

 return 0;

err_reset:
 FUNC_21(VAR_35->rst);

err_pclk:
 if (!FUNC_0(VAR_35->pclk))
  FUNC_3(VAR_35->pclk);

err_clk:
 if (!FUNC_0(VAR_35->clk))
  FUNC_3(VAR_35->clk);

 return VAR_36;
}
