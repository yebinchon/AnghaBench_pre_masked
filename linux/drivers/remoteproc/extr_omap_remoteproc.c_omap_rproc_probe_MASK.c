
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rproc {int has_iommu; struct omap_rproc* priv; } ;
struct TYPE_4__ {struct omap_rproc_pdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct omap_rproc_pdata {int firmware; int name; } ;
struct omap_rproc {struct rproc* rproc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct platform_device*,struct rproc*) ;
 int FUNC_4 (struct rproc*) ;
 struct rproc* FUNC_5 (TYPE_1__*,int ,int *,int ,int) ;
 int FUNC_6 (struct rproc*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct omap_rproc_pdata *VAR_3 = VAR_2->dev.platform_data;
 struct omap_rproc *VAR_4;
 struct rproc *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_2->dev, FUNC_0(32));
 if (VAR_6) {
  FUNC_1(&VAR_2->dev, "dma_set_coherent_mask: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_5 = FUNC_5(&VAR_2->dev, VAR_3->name, &VAR_1,
       VAR_3->firmware, sizeof(*VAR_4));
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = VAR_5->priv;
 VAR_4->rproc = VAR_5;

 VAR_5->has_iommu = 1;

 FUNC_3(VAR_2, VAR_5);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  goto free_rproc;

 return 0;

free_rproc:
 FUNC_6(VAR_5);
 return VAR_6;
}
