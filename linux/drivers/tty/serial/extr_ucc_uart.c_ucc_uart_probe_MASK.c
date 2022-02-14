
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int line; scalar_t__ irq; unsigned int uartclk; int fifosize; int flags; int iotype; int * ops; TYPE_3__* dev; int lock; scalar_t__ mapbase; } ;
struct TYPE_8__ {scalar_t__ rx_clock; scalar_t__ tx_clock; int ucc_num; scalar_t__ irq; int init_tx; int init_rx; int tx_bd_ring_len; int rx_bd_ring_len; scalar_t__ regs; } ;
struct uart_qe_port {unsigned int ucc_num; TYPE_2__ port; TYPE_1__ us_info; int tx_nrfifos; int rx_nrfifos; int wait_closing; int rx_fifosize; int tx_fifosize; struct device_node* np; } ;
struct resource {scalar_t__ start; } ;
struct qe_firmware_info {int id; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int const VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int VAR_21 ;
 scalar_t__ FUNC_3 (struct device_node*,int ) ;
 int FUNC_4 (struct uart_qe_port*) ;
 struct uart_qe_port* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_7 (int *,int *,char*) ;
 struct device_node* FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int *) ;
 void* FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct platform_device*,struct uart_qe_port*) ;
 void* FUNC_13 (char const*) ;
 struct qe_firmware_info* FUNC_14 () ;
 int VAR_22 ;
 int FUNC_15 (int ,int ,char*,TYPE_3__*,int ,TYPE_3__*,int ) ;
 unsigned int FUNC_16 (unsigned int*,unsigned int*) ;
 int VAR_23 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,char*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_19 (int ,char*) ;
 int FUNC_20 (int *,TYPE_2__*) ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_26)
{
 struct device_node *VAR_27 = VAR_26->dev.of_node;
 const unsigned int *VAR_28;
 const char *VAR_29;
 struct uart_qe_port *VAR_30 = ((void*)0);
 struct resource VAR_31;
 int VAR_32;




 if (FUNC_9(VAR_27, "soft-uart", ((void*)0))) {
  FUNC_0(&VAR_26->dev, "using Soft-UART mode\n");
  VAR_23 = 1;
 }





 if (VAR_23) {
  struct qe_firmware_info *VAR_33;

  VAR_33 = FUNC_14();


  if (VAR_33 && FUNC_19(VAR_33->id, "Soft-UART")) {
   VAR_21 = 1;
  } else {
   char VAR_34[32];
   unsigned int VAR_35;
   unsigned int VAR_36;
   unsigned int VAR_37;

   VAR_35 = FUNC_16(&VAR_36, &VAR_37);
   if (!VAR_35) {
    FUNC_1(&VAR_26->dev, "unknown CPU model\n");
    return -VAR_3;
   }
   FUNC_18(VAR_34, "fsl_qe_ucode_uart_%u_%u%u.bin",
    VAR_35, VAR_36, VAR_37);

   FUNC_2(&VAR_26->dev, "waiting for firmware %s\n",
    VAR_34);
   VAR_32 = FUNC_15(VAR_12,
    VAR_4, VAR_34, &VAR_26->dev,
    VAR_5, &VAR_26->dev, VAR_24);
   if (VAR_32) {
    FUNC_1(&VAR_26->dev,
     "could not load firmware %s\n",
     VAR_34);
    return VAR_32;
   }
  }
 }

 VAR_30 = FUNC_5(sizeof(struct uart_qe_port), VAR_5);
 if (!VAR_30) {
  FUNC_1(&VAR_26->dev, "can't allocate QE port structure\n");
  return -VAR_2;
 }


 VAR_32 = FUNC_6(VAR_27, 0, &VAR_31);
 if (VAR_32) {
  FUNC_1(&VAR_26->dev, "missing 'reg' property in device tree\n");
  goto out_free;
 }
 if (!VAR_31.start) {
  FUNC_1(&VAR_26->dev, "invalid 'reg' property in device tree\n");
  VAR_32 = -VAR_0;
  goto out_free;
 }
 VAR_30->port.mapbase = VAR_31.start;



 VAR_28 = FUNC_10(VAR_27, "cell-index", ((void*)0));
 if (!VAR_28) {
  VAR_28 = FUNC_10(VAR_27, "device-id", ((void*)0));
  if (!VAR_28) {
   FUNC_1(&VAR_26->dev, "UCC is unspecified in "
    "device tree\n");
   VAR_32 = -VAR_0;
   goto out_free;
  }
 }

 if ((*VAR_28 < 1) || (*VAR_28 > VAR_15)) {
  FUNC_1(&VAR_26->dev, "no support for UCC%u\n", *VAR_28);
  VAR_32 = -VAR_1;
  goto out_free;
 }
 VAR_30->ucc_num = *VAR_28 - 1;
 VAR_29 = FUNC_10(VAR_27, "rx-clock-name", ((void*)0));
 if (!VAR_29) {
  FUNC_1(&VAR_26->dev, "missing rx-clock-name in device tree\n");
  VAR_32 = -VAR_1;
  goto out_free;
 }

 VAR_30->us_info.rx_clock = FUNC_13(VAR_29);
 if ((VAR_30->us_info.rx_clock < VAR_6) ||
     (VAR_30->us_info.rx_clock > VAR_7)) {
  FUNC_1(&VAR_26->dev, "rx-clock-name must be a BRG for UART\n");
  VAR_32 = -VAR_1;
  goto out_free;
 }





 VAR_29 = FUNC_10(VAR_27, "tx-clock-name", ((void*)0));
 if (!VAR_29) {
  FUNC_1(&VAR_26->dev, "missing tx-clock-name in device tree\n");
  VAR_32 = -VAR_1;
  goto out_free;
 }
 VAR_30->us_info.tx_clock = FUNC_13(VAR_29);

 if ((VAR_30->us_info.tx_clock < VAR_6) ||
     (VAR_30->us_info.tx_clock > VAR_7)) {
  FUNC_1(&VAR_26->dev, "tx-clock-name must be a BRG for UART\n");
  VAR_32 = -VAR_1;
  goto out_free;
 }


 VAR_28 = FUNC_10(VAR_27, "port-number", ((void*)0));
 if (!VAR_28) {
  FUNC_1(&VAR_26->dev, "missing port-number in device tree\n");
  VAR_32 = -VAR_0;
  goto out_free;
 }
 VAR_30->port.line = *VAR_28;
 if (VAR_30->port.line >= VAR_16) {
  FUNC_1(&VAR_26->dev, "port-number must be 0-%u\n",
   VAR_16 - 1);
  VAR_32 = -VAR_0;
  goto out_free;
 }

 VAR_30->port.irq = FUNC_3(VAR_27, 0);
 if (VAR_30->port.irq == 0) {
  FUNC_1(&VAR_26->dev, "could not map IRQ for UCC%u\n",
         VAR_30->ucc_num + 1);
  VAR_32 = -VAR_0;
  goto out_free;
 }





 VAR_27 = FUNC_7(((void*)0), ((void*)0), "fsl,qe");
 if (!VAR_27) {
  VAR_27 = FUNC_8(((void*)0), "qe");
  if (!VAR_27) {
   FUNC_1(&VAR_26->dev, "could not find 'qe' node\n");
   VAR_32 = -VAR_0;
   goto out_free;
  }
 }

 VAR_28 = FUNC_10(VAR_27, "brg-frequency", ((void*)0));
 if (!VAR_28) {
  FUNC_1(&VAR_26->dev,
         "missing brg-frequency in device tree\n");
  VAR_32 = -VAR_0;
  goto out_np;
 }

 if (*VAR_28)
  VAR_30->port.uartclk = *VAR_28;
 else {





  VAR_28 = FUNC_10(VAR_27, "bus-frequency", ((void*)0));
  if (!VAR_28) {
   FUNC_1(&VAR_26->dev,
    "missing QE bus-frequency in device tree\n");
   VAR_32 = -VAR_0;
   goto out_np;
  }
  if (*VAR_28)
   VAR_30->port.uartclk = *VAR_28 / 2;
  else {
   FUNC_1(&VAR_26->dev,
    "invalid QE bus-frequency in device tree\n");
   VAR_32 = -VAR_0;
   goto out_np;
  }
 }

 FUNC_17(&VAR_30->port.lock);
 VAR_30->np = VAR_27;
 VAR_30->port.dev = &VAR_26->dev;
 VAR_30->port.ops = &VAR_22;
 VAR_30->port.iotype = VAR_20;

 VAR_30->tx_nrfifos = VAR_14;
 VAR_30->tx_fifosize = VAR_13;
 VAR_30->rx_nrfifos = VAR_9;
 VAR_30->rx_fifosize = VAR_8;

 VAR_30->wait_closing = VAR_17;
 VAR_30->port.fifosize = 512;
 VAR_30->port.flags = VAR_18 | VAR_19;

 VAR_30->us_info.ucc_num = VAR_30->ucc_num;
 VAR_30->us_info.regs = (phys_addr_t) VAR_31.start;
 VAR_30->us_info.irq = VAR_30->port.irq;

 VAR_30->us_info.rx_bd_ring_len = VAR_30->rx_nrfifos;
 VAR_30->us_info.tx_bd_ring_len = VAR_30->tx_nrfifos;


 VAR_30->us_info.init_tx = 1;
 VAR_30->us_info.init_rx = 1;





 VAR_32 = FUNC_20(&VAR_25, &VAR_30->port);
 if (VAR_32) {
  FUNC_1(&VAR_26->dev, "could not add /dev/ttyQE%u\n",
         VAR_30->port.line);
  goto out_np;
 }

 FUNC_12(VAR_26, VAR_30);

 FUNC_2(&VAR_26->dev, "UCC%u assigned to /dev/ttyQE%u\n",
  VAR_30->ucc_num + 1, VAR_30->port.line);


 FUNC_0(&VAR_26->dev, "mknod command is 'mknod /dev/ttyQE%u c %u %u'\n",
        VAR_30->port.line, VAR_10,
        VAR_11 + VAR_30->port.line);

 return 0;
out_np:
 FUNC_11(VAR_27);
out_free:
 FUNC_4(VAR_30);
 return VAR_32;
}
