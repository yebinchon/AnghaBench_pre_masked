
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_slim_rproc {scalar_t__* clks; void* peri; void* slimcore; TYPE_1__* mem; struct rproc* rproc; } ;
struct rproc {int has_iommu; struct st_slim_rproc* priv; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int name; } ;
struct TYPE_2__ {int size; int bus_addr; void* cpu_addr; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct st_slim_rproc* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 char** VAR_4 ;
 int FUNC_7 (struct device_node*,char*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,char*) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (struct rproc*) ;
 struct rproc* FUNC_11 (struct device*,int ,int *,char*,int) ;
 int FUNC_12 (struct rproc*) ;
 int FUNC_13 (struct st_slim_rproc*) ;
 int FUNC_14 (struct st_slim_rproc*) ;
 int FUNC_15 (struct st_slim_rproc*,struct device*) ;
 int VAR_5 ;

struct st_slim_rproc *FUNC_16(struct platform_device *VAR_6,
    char *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct st_slim_rproc *VAR_9;
 struct device_node *VAR_10 = VAR_8->of_node;
 struct rproc *VAR_11;
 struct resource *VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_7)
  return FUNC_1(-VAR_0);

 if (!FUNC_7(VAR_10, "st,slim-rproc"))
  return FUNC_1(-VAR_0);

 VAR_11 = FUNC_11(VAR_8, VAR_10->name, &VAR_5,
   VAR_7, sizeof(*VAR_9));
 if (!VAR_11)
  return FUNC_1(-VAR_1);

 VAR_11->has_iommu = 0;

 VAR_9 = VAR_11->priv;
 VAR_9->rproc = VAR_11;


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_4); VAR_14++) {
  VAR_12 = FUNC_8(VAR_6, VAR_2,
      VAR_4[VAR_14]);

  VAR_9->mem[VAR_14].cpu_addr = FUNC_6(VAR_8, VAR_12);
  if (FUNC_2(VAR_9->mem[VAR_14].cpu_addr)) {
   FUNC_5(&VAR_6->dev, "devm_ioremap_resource failed\n");
   VAR_13 = FUNC_3(VAR_9->mem[VAR_14].cpu_addr);
   goto err;
  }
  VAR_9->mem[VAR_14].bus_addr = VAR_12->start;
  VAR_9->mem[VAR_14].size = FUNC_9(VAR_12);
 }

 VAR_12 = FUNC_8(VAR_6, VAR_2, "slimcore");
 VAR_9->slimcore = FUNC_6(VAR_8, VAR_12);
 if (FUNC_2(VAR_9->slimcore)) {
  FUNC_5(&VAR_6->dev, "failed to ioremap slimcore IO\n");
  VAR_13 = FUNC_3(VAR_9->slimcore);
  goto err;
 }

 VAR_12 = FUNC_8(VAR_6, VAR_2, "peripherals");
 VAR_9->peri = FUNC_6(VAR_8, VAR_12);
 if (FUNC_2(VAR_9->peri)) {
  FUNC_5(&VAR_6->dev, "failed to ioremap peripherals IO\n");
  VAR_13 = FUNC_3(VAR_9->peri);
  goto err;
 }

 VAR_13 = FUNC_15(VAR_9, VAR_8);
 if (VAR_13)
  goto err;

 VAR_13 = FUNC_14(VAR_9);
 if (VAR_13) {
  FUNC_5(VAR_8, "Failed to enable clocks\n");
  goto err_clk_put;
 }


 VAR_13 = FUNC_10(VAR_11);
 if (VAR_13) {
  FUNC_5(VAR_8, "registration of slim remoteproc failed\n");
  goto err_clk_dis;
 }

 return VAR_9;

err_clk_dis:
 FUNC_13(VAR_9);
err_clk_put:
 for (VAR_14 = 0; VAR_14 < VAR_3 && VAR_9->clks[VAR_14]; VAR_14++)
  FUNC_4(VAR_9->clks[VAR_14]);
err:
 FUNC_12(VAR_11);
 return FUNC_1(VAR_13);
}
