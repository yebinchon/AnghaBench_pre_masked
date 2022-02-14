
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct smmu_pmu {scalar_t__ reg_base; } ;
struct msi_msg {int address_lo; int data; scalar_t__ address_hi; } ;
struct msi_desc {int dummy; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct smmu_pmu* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct msi_desc*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct msi_desc *VAR_5, struct msi_msg *VAR_6)
{
 phys_addr_t VAR_7;
 struct device *VAR_8 = FUNC_1(VAR_5);
 struct smmu_pmu *VAR_9 = FUNC_0(VAR_8);

 VAR_7 = (((u64)VAR_6->address_hi) << 32) | VAR_6->address_lo;
 VAR_7 &= VAR_0;

 FUNC_3(VAR_7, VAR_9->reg_base + VAR_2);
 FUNC_2(VAR_6->data, VAR_9->reg_base + VAR_3);
 FUNC_2(VAR_1,
         VAR_9->reg_base + VAR_4);
}
