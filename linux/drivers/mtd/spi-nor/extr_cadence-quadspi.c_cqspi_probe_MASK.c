
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct reset_control {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct device_node {int dummy; } ;
struct cqspi_st {int wr_delay; int current_cs; struct reset_control* clk; scalar_t__ sclk; int master_ref_clk_hz; int transfer_complete; int ahb_size; scalar_t__ mmap_phys_base; struct reset_control* ahb_base; struct reset_control* iobase; struct platform_device* pdev; int bus_mutex; } ;
struct cqspi_driver_platdata {int quirks; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct reset_control*) ;
 int VAR_6 ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (struct reset_control*) ;
 int FUNC_5 (struct reset_control*) ;
 int FUNC_6 (struct cqspi_st*,int ) ;
 int FUNC_7 (struct cqspi_st*) ;
 int VAR_7 ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct cqspi_st*,struct device_node*) ;
 int FUNC_10 (struct cqspi_st*) ;
 int FUNC_11 (struct device*,char*,...) ;
 struct reset_control* FUNC_12 (struct device*,int *) ;
 void* FUNC_13 (struct device*,struct resource*) ;
 struct cqspi_st* FUNC_14 (struct device*,int,int ) ;
 int FUNC_15 (struct device*,int,int ,int ,int ,struct cqspi_st*) ;
 struct reset_control* FUNC_16 (struct device*,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 struct cqspi_driver_platdata* FUNC_19 (struct device*) ;
 int FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int) ;
 int FUNC_22 (struct platform_device*,struct cqspi_st*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct reset_control*) ;
 int FUNC_29 (struct reset_control*) ;
 int FUNC_30 (struct resource*) ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct device *VAR_10 = &VAR_8->dev;
 struct cqspi_st *VAR_11;
 struct resource *VAR_12;
 struct resource *VAR_13;
 struct reset_control *VAR_14, *VAR_15;
 const struct cqspi_driver_platdata *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_11 = FUNC_14(VAR_10, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 FUNC_18(&VAR_11->bus_mutex);
 VAR_11->pdev = VAR_8;
 FUNC_22(VAR_8, VAR_11);


 VAR_17 = FUNC_8(VAR_8);
 if (VAR_17) {
  FUNC_11(VAR_10, "Cannot get mandatory OF data.\n");
  return -VAR_1;
 }


 VAR_11->clk = FUNC_12(VAR_10, ((void*)0));
 if (FUNC_1(VAR_11->clk)) {
  FUNC_11(VAR_10, "Cannot claim QSPI clock.\n");
  return FUNC_2(VAR_11->clk);
 }


 VAR_12 = FUNC_21(VAR_8, VAR_5, 0);
 VAR_11->iobase = FUNC_13(VAR_10, VAR_12);
 if (FUNC_1(VAR_11->iobase)) {
  FUNC_11(VAR_10, "Cannot remap controller address.\n");
  return FUNC_2(VAR_11->iobase);
 }


 VAR_13 = FUNC_21(VAR_8, VAR_5, 1);
 VAR_11->ahb_base = FUNC_13(VAR_10, VAR_13);
 if (FUNC_1(VAR_11->ahb_base)) {
  FUNC_11(VAR_10, "Cannot remap AHB address.\n");
  return FUNC_2(VAR_11->ahb_base);
 }
 VAR_11->mmap_phys_base = (dma_addr_t)VAR_13->start;
 VAR_11->ahb_size = FUNC_30(VAR_13);

 FUNC_17(&VAR_11->transfer_complete);


 VAR_18 = FUNC_20(VAR_8, 0);
 if (VAR_18 < 0) {
  FUNC_11(VAR_10, "Cannot obtain IRQ.\n");
  return -VAR_3;
 }

 FUNC_24(VAR_10);
 VAR_17 = FUNC_25(VAR_10);
 if (VAR_17 < 0) {
  FUNC_26(VAR_10);
  return VAR_17;
 }

 VAR_17 = FUNC_5(VAR_11->clk);
 if (VAR_17) {
  FUNC_11(VAR_10, "Cannot enable QSPI clock.\n");
  goto probe_clk_failed;
 }


 VAR_14 = FUNC_16(VAR_10, "qspi");
 if (FUNC_1(VAR_14)) {
  FUNC_11(VAR_10, "Cannot get QSPI reset.\n");
  return FUNC_2(VAR_14);
 }

 VAR_15 = FUNC_16(VAR_10, "qspi-ocp");
 if (FUNC_1(VAR_15)) {
  FUNC_11(VAR_10, "Cannot get QSPI OCP reset.\n");
  return FUNC_2(VAR_15);
 }

 FUNC_28(VAR_14);
 FUNC_29(VAR_14);

 FUNC_28(VAR_15);
 FUNC_29(VAR_15);

 VAR_11->master_ref_clk_hz = FUNC_4(VAR_11->clk);
 VAR_16 = FUNC_19(VAR_10);
 if (VAR_16 && (VAR_16->quirks & VAR_0))
  VAR_11->wr_delay = 5 * FUNC_0(VAR_6,
         VAR_11->master_ref_clk_hz);

 VAR_17 = FUNC_15(VAR_10, VAR_18, VAR_7, 0,
          VAR_8->name, VAR_11);
 if (VAR_17) {
  FUNC_11(VAR_10, "Cannot request IRQ.\n");
  goto probe_irq_failed;
 }

 FUNC_10(VAR_11);
 FUNC_7(VAR_11);
 VAR_11->current_cs = -1;
 VAR_11->sclk = 0;

 VAR_17 = FUNC_9(VAR_11, VAR_9);
 if (VAR_17) {
  FUNC_11(VAR_10, "Cadence QSPI NOR probe failed %d\n", VAR_17);
  goto probe_setup_failed;
 }

 return VAR_17;
probe_setup_failed:
 FUNC_6(VAR_11, 0);
probe_irq_failed:
 FUNC_3(VAR_11->clk);
probe_clk_failed:
 FUNC_27(VAR_10);
 FUNC_23(VAR_10);
 return VAR_17;
}
