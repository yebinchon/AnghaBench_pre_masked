
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_rproc {int dummy; } ;
struct rproc {int has_iommu; struct stm32_rproc* priv; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct platform_device*,struct rproc*) ;
 int FUNC_3 (struct rproc*) ;
 struct rproc* FUNC_4 (struct device*,int ,int *,int *,int) ;
 int FUNC_5 (struct rproc*) ;
 int VAR_1 ;
 int FUNC_6 (struct rproc*) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct rproc*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct stm32_rproc *VAR_4;
 struct device_node *VAR_5 = VAR_3->of_node;
 struct rproc *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, FUNC_0(32));
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_4(VAR_3, VAR_5->name, &VAR_1, ((void*)0), sizeof(*VAR_4));
 if (!VAR_6)
  return -VAR_0;

 VAR_6->has_iommu = 0;
 VAR_4 = VAR_6->priv;

 FUNC_2(VAR_2, VAR_6);

 VAR_7 = FUNC_7(VAR_2);
 if (VAR_7)
  goto free_rproc;

 FUNC_8(VAR_6);

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto free_mb;

 return 0;

free_mb:
 FUNC_6(VAR_6);
free_rproc:
 FUNC_5(VAR_6);
 return VAR_7;
}
