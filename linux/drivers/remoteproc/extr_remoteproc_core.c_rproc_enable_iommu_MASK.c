
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct rproc {struct iommu_domain* domain; int has_iommu; TYPE_1__ dev; } ;
struct iommu_domain {int dummy; } ;
struct device {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct iommu_domain*,struct device*) ;
 struct iommu_domain* FUNC_3 (int ) ;
 int FUNC_4 (struct iommu_domain*) ;
 int FUNC_5 (struct iommu_domain*,int ,struct rproc*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct rproc *VAR_2)
{
 struct iommu_domain *VAR_3;
 struct device *VAR_4 = VAR_2->dev.parent;
 int VAR_5;

 if (!VAR_2->has_iommu) {
  FUNC_0(VAR_4, "iommu not present\n");
  return 0;
 }

 VAR_3 = FUNC_3(VAR_4->bus);
 if (!VAR_3) {
  FUNC_1(VAR_4, "can't alloc iommu domain\n");
  return -VAR_0;
 }

 FUNC_5(VAR_3, VAR_1, VAR_2);

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_4, "can't attach iommu device: %d\n", VAR_5);
  goto free_domain;
 }

 VAR_2->domain = VAR_3;

 return 0;

free_domain:
 FUNC_4(VAR_3);
 return VAR_5;
}
