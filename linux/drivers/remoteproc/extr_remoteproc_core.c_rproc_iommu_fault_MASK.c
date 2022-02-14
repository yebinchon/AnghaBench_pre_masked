
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,unsigned long,int) ;
 int FUNC_1 (struct rproc*,int ) ;

__attribute__((used)) static int FUNC_2(struct iommu_domain *VAR_2, struct device *VAR_3,
        unsigned long VAR_4, int VAR_5, void *VAR_6)
{
 struct rproc *VAR_7 = VAR_6;

 FUNC_0(VAR_3, "iommu fault: da 0x%lx flags 0x%x\n", VAR_4, VAR_5);

 FUNC_1(VAR_7, VAR_1);





 return -VAR_0;
}
