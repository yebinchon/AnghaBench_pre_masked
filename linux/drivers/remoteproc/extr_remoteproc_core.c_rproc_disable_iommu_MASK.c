
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct rproc {TYPE_1__ dev; struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct iommu_domain*,struct device*) ;
 int FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_2(struct rproc *VAR_0)
{
 struct iommu_domain *VAR_1 = VAR_0->domain;
 struct device *VAR_2 = VAR_0->dev.parent;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1);
}
