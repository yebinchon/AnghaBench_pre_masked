
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct qm_portal_config {int cpu; int irq; int addr_virt_ce; int addr_virt_ci; int pools; int channel; struct device* dev; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct qm_portal_config* FUNC_5 (struct device*,int,int ) ;
 scalar_t__ FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct qm_portal_config*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int VAR_10 ;
 int FUNC_12 (struct device_node*,char*,int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int VAR_11 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int VAR_12 ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (int) ;
 int FUNC_22 (struct resource*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct device_node *VAR_15 = VAR_14->of_node;
 struct qm_portal_config *VAR_16;
 struct resource *VAR_17[2];
 int VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22;

 VAR_20 = FUNC_18();
 if (!VAR_20)
  return -VAR_5;
 if (VAR_20 < 0) {
  FUNC_4(&VAR_13->dev, "failing probe due to qman probe error\n");
  return -VAR_2;
 }

 VAR_16 = FUNC_5(VAR_14, sizeof(*VAR_16), VAR_6);
 if (!VAR_16) {
  VAR_9 = -1;
  return -VAR_3;
 }

 VAR_16->dev = VAR_14;

 VAR_17[0] = FUNC_14(VAR_13, VAR_7,
          VAR_0);
 if (!VAR_17[0]) {
  FUNC_4(VAR_14, "Can't get %pOF property 'reg::CE'\n", VAR_15);
  goto err_ioremap1;
 }

 VAR_17[1] = FUNC_14(VAR_13, VAR_7,
          VAR_1);
 if (!VAR_17[1]) {
  FUNC_4(VAR_14, "Can't get %pOF property 'reg::CI'\n", VAR_15);
  goto err_ioremap1;
 }

 VAR_20 = FUNC_12(VAR_15, "cell-index", &VAR_22);
 if (VAR_20) {
  FUNC_4(VAR_14, "Can't get %pOF property 'cell-index'\n", VAR_15);
  VAR_9 = -1;
  return VAR_20;
 }
 VAR_16->channel = VAR_22;
 VAR_16->cpu = -1;
 VAR_18 = FUNC_13(VAR_13, 0);
 if (VAR_18 <= 0)
  goto err_ioremap1;
 VAR_16->irq = VAR_18;

 VAR_16->addr_virt_ce = FUNC_10(VAR_17[0]->start,
     FUNC_22(VAR_17[0]),
     VAR_8);
 if (!VAR_16->addr_virt_ce) {
  FUNC_4(VAR_14, "memremap::CE failed\n");
  goto err_ioremap1;
 }

 VAR_16->addr_virt_ci = FUNC_8(VAR_17[1]->start,
    FUNC_22(VAR_17[1]));
 if (!VAR_16->addr_virt_ci) {
  FUNC_4(VAR_14, "ioremap::CI failed\n");
  goto err_ioremap2;
 }

 VAR_16->pools = FUNC_16();

 FUNC_23(&VAR_12);
 VAR_19 = FUNC_2(-1, &VAR_11);
 if (VAR_19 >= VAR_10) {
  VAR_9 = 1;

  FUNC_24(&VAR_12);
  return 0;
 }

 FUNC_3(VAR_19, &VAR_11);
 FUNC_24(&VAR_12);
 VAR_16->cpu = VAR_19;

 if (FUNC_6(VAR_14, FUNC_0(40))) {
  FUNC_4(VAR_14, "dma_set_mask() failed\n");
  goto err_portal_init;
 }

 if (!FUNC_7(VAR_16)) {
  FUNC_4(VAR_14, "portal init failed\n");
  goto err_portal_init;
 }


 if (!FUNC_1(VAR_19))
  FUNC_19(VAR_19);

 if (VAR_9 == 1 && FUNC_20()) {




  for (VAR_21 = 0; VAR_21 < FUNC_15(); VAR_21++) {
   VAR_20 = FUNC_21(VAR_21);
   if (VAR_20) {
    FUNC_4(VAR_14, "Failed to shutdown frame queue %d\n",
     VAR_21);
    goto err_portal_init;
   }
  }
  FUNC_17();
 }

 return 0;

err_portal_init:
 FUNC_9(VAR_16->addr_virt_ci);
err_ioremap2:
 FUNC_11(VAR_16->addr_virt_ce);
err_ioremap1:
 VAR_9 = -1;

 return -VAR_4;
}
