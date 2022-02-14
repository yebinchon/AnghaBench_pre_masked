
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {int irq; scalar_t__ reg_base; struct device* dev; } ;
struct msi_desc {int irq; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int ,struct device*) ;
 struct msi_desc* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct smmu_pmu *VAR_5)
{
 struct msi_desc *VAR_6;
 struct device *VAR_7 = VAR_5->dev;
 int VAR_8;


 FUNC_5(0, VAR_5->reg_base + VAR_2);


 if (!(FUNC_4(VAR_5->reg_base + VAR_0) & VAR_1))
  return;

 VAR_8 = FUNC_3(VAR_7, 1, VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_7, "failed to allocate MSIs\n");
  return;
 }

 VAR_6 = FUNC_2(VAR_7);
 if (VAR_6)
  VAR_5->irq = VAR_6->irq;


 FUNC_1(VAR_7, VAR_3, VAR_7);
}
