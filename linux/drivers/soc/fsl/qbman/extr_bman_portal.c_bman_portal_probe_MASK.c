
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct bm_portal_config {int cpu; int irq; int addr_virt_ce; int addr_virt_ci; struct device* dev; } ;


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
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (struct device*,char*,...) ;
 struct bm_portal_config* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct bm_portal_config*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ) ;
 int VAR_12 ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int VAR_13 ;
 int FUNC_17 (struct resource*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct device_node *VAR_16 = VAR_15->of_node;
 struct bm_portal_config *VAR_17;
 struct resource *VAR_18[2];
 int VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_21 = FUNC_2();
 if (!VAR_21)
  return -VAR_6;
 if (VAR_21 < 0) {
  FUNC_8(&VAR_14->dev, "failing probe due to bman probe error\n");
  return -VAR_3;
 }

 VAR_17 = FUNC_9(VAR_15, sizeof(*VAR_17), VAR_7);
 if (!VAR_17) {
  VAR_10 = -1;
  return -VAR_4;
 }

 VAR_17->dev = VAR_15;

 VAR_18[0] = FUNC_16(VAR_14, VAR_8,
          VAR_1);
 if (!VAR_18[0]) {
  FUNC_8(VAR_15, "Can't get %pOF property 'reg::CE'\n", VAR_16);
  goto err_ioremap1;
 }

 VAR_18[1] = FUNC_16(VAR_14, VAR_8,
          VAR_2);
 if (!VAR_18[1]) {
  FUNC_8(VAR_15, "Can't get %pOF property 'reg::CI'\n", VAR_16);
  goto err_ioremap1;
 }

 VAR_17->cpu = -1;

 VAR_19 = FUNC_15(VAR_14, 0);
 if (VAR_19 <= 0)
  goto err_ioremap1;
 VAR_17->irq = VAR_19;

 VAR_17->addr_virt_ce = FUNC_13(VAR_18[0]->start,
     FUNC_17(VAR_18[0]),
     VAR_9);
 if (!VAR_17->addr_virt_ce) {
  FUNC_8(VAR_15, "memremap::CE failed\n");
  goto err_ioremap1;
 }

 VAR_17->addr_virt_ci = FUNC_11(VAR_18[1]->start,
     FUNC_17(VAR_18[1]));
 if (!VAR_17->addr_virt_ci) {
  FUNC_8(VAR_15, "ioremap::CI failed\n");
  goto err_ioremap2;
 }

 FUNC_18(&VAR_11);
 VAR_20 = FUNC_6(-1, &VAR_13);
 if (VAR_20 >= VAR_12) {
  VAR_10 = 1;

  FUNC_19(&VAR_11);
  return 0;
 }

 FUNC_7(VAR_20, &VAR_13);
 FUNC_19(&VAR_11);
 VAR_17->cpu = VAR_20;

 if (!FUNC_10(VAR_17)) {
  FUNC_8(VAR_15, "portal init failed\n");
  goto err_portal_init;
 }


 if (!FUNC_5(VAR_20))
  FUNC_3(VAR_20);

 if (VAR_10 == 1 && FUNC_4()) {




  for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
   VAR_21 = FUNC_0(VAR_22);
   if (VAR_21) {
    FUNC_8(VAR_15, "Failed to shutdown bpool %d\n",
     VAR_22);
    goto err_portal_init;
   }
  }
  FUNC_1();
 }

 return 0;

err_portal_init:
 FUNC_12(VAR_17->addr_virt_ci);
err_ioremap2:
 FUNC_14(VAR_17->addr_virt_ce);
err_ioremap1:
  VAR_10 = -1;

 return -VAR_5;
}
