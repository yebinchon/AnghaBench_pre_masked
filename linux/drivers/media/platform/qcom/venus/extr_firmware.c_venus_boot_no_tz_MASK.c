
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t mapped_mem_size; struct iommu_domain* iommu_domain; struct device* dev; } ;
struct venus_core {TYPE_1__ fw; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct iommu_domain*,int ,int ,size_t,int) ;
 int FUNC_2 (struct venus_core*) ;

__attribute__((used)) static int FUNC_3(struct venus_core *VAR_5, phys_addr_t VAR_6,
       size_t VAR_7)
{
 struct iommu_domain *VAR_8;
 struct device *VAR_9;
 int VAR_10;

 VAR_9 = VAR_5->fw.dev;
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = VAR_5->fw.iommu_domain;
 VAR_5->fw.mapped_mem_size = VAR_7;

 VAR_10 = FUNC_1(VAR_8, VAR_4, VAR_6, VAR_7,
   VAR_2 | VAR_3 | VAR_1);
 if (VAR_10) {
  FUNC_0(VAR_9, "could not map video firmware region\n");
  return VAR_10;
 }

 FUNC_2(VAR_5);

 return 0;
}
