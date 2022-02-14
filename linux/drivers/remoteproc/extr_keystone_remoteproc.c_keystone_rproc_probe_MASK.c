
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int has_iommu; struct keystone_rproc* priv; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct keystone_rproc {int irq_ring; int irq_fault; int kick_gpio; int reset; struct device* dev; struct rproc* rproc; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 char* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct keystone_rproc*) ;
 int FUNC_9 (struct platform_device*,struct keystone_rproc*) ;
 int FUNC_10 (struct platform_device*,struct keystone_rproc*) ;
 int VAR_3 ;
 int FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct device_node*,char*,int ,int *) ;
 scalar_t__ FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 void* FUNC_15 (struct platform_device*,char*) ;
 int FUNC_16 (struct platform_device*,struct keystone_rproc*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct rproc*) ;
 struct rproc* FUNC_24 (struct device*,int ,int *,char*,int) ;
 int FUNC_25 (struct rproc*) ;
 int FUNC_26 (char*,int,char*,int) ;
 int FUNC_27 (char*) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 struct keystone_rproc *VAR_7;
 struct rproc *VAR_8;
 int VAR_9;
 char *VAR_10 = ((void*)0);
 char *VAR_11 = "keystone-dsp%d-fw";
 int VAR_12 = 0;
 int VAR_13 = 0;

 if (!VAR_6) {
  FUNC_3(VAR_5, "only DT-based devices are supported\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_11(VAR_6, "rproc");
 if (VAR_9 < 0) {
  FUNC_5(VAR_5, "device does not have an alias id\n");
  return VAR_9;
 }


 VAR_12 = FUNC_27(VAR_11);
 VAR_10 = FUNC_6(VAR_5, VAR_12, VAR_2);
 if (!VAR_10)
  return -VAR_1;
 FUNC_26(VAR_10, VAR_12, VAR_11, VAR_9);

 VAR_8 = FUNC_24(VAR_5, FUNC_4(VAR_5), &VAR_3, VAR_10,
       sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_1;

 VAR_8->has_iommu = 0;
 VAR_7 = VAR_8->priv;
 VAR_7->rproc = VAR_8;
 VAR_7->dev = VAR_5;

 VAR_13 = FUNC_9(VAR_4, VAR_7);
 if (VAR_13)
  goto free_rproc;

 VAR_7->reset = FUNC_7(VAR_5, ((void*)0));
 if (FUNC_0(VAR_7->reset)) {
  VAR_13 = FUNC_1(VAR_7->reset);
  goto free_rproc;
 }


 FUNC_18(VAR_5);
 VAR_13 = FUNC_19(VAR_5);
 if (VAR_13 < 0) {
  FUNC_3(VAR_5, "failed to enable clock, status = %d\n", VAR_13);
  FUNC_20(VAR_5);
  goto disable_rpm;
 }

 VAR_13 = FUNC_10(VAR_4, VAR_7);
 if (VAR_13)
  goto disable_clk;

 VAR_7->irq_ring = FUNC_15(VAR_4, "vring");
 if (VAR_7->irq_ring < 0) {
  VAR_13 = VAR_7->irq_ring;
  goto disable_clk;
 }

 VAR_7->irq_fault = FUNC_15(VAR_4, "exception");
 if (VAR_7->irq_fault < 0) {
  VAR_13 = VAR_7->irq_fault;
  goto disable_clk;
 }

 VAR_7->kick_gpio = FUNC_12(VAR_6, "kick-gpios", 0, ((void*)0));
 if (VAR_7->kick_gpio < 0) {
  VAR_13 = VAR_7->kick_gpio;
  FUNC_3(VAR_5, "failed to get gpio for virtio kicks, status = %d\n",
   VAR_13);
  goto disable_clk;
 }

 if (FUNC_13(VAR_5))
  FUNC_5(VAR_5, "device does not have specific CMA pool\n");


 VAR_13 = FUNC_22(VAR_7->reset);
 if (VAR_13 < 0) {
  FUNC_3(VAR_5, "failed to get reset status, status = %d\n", VAR_13);
  goto release_mem;
 } else if (VAR_13 == 0) {
  FUNC_2(1, "device is not in reset\n");
  FUNC_8(VAR_7);
 }

 VAR_13 = FUNC_23(VAR_8);
 if (VAR_13) {
  FUNC_3(VAR_5, "failed to add register device with remoteproc core, status = %d\n",
   VAR_13);
  goto release_mem;
 }

 FUNC_16(VAR_4, VAR_7);

 return 0;

release_mem:
 FUNC_14(VAR_5);
disable_clk:
 FUNC_21(VAR_5);
disable_rpm:
 FUNC_17(VAR_5);
free_rproc:
 FUNC_25(VAR_8);
 return VAR_13;
}
