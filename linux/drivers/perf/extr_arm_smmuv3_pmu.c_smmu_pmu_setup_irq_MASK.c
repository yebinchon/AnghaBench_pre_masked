
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {int irq; int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,int,int ,unsigned long,char*,struct smmu_pmu*) ;
 int VAR_4 ;
 int FUNC_1 (struct smmu_pmu*) ;

__attribute__((used)) static int FUNC_2(struct smmu_pmu *VAR_5)
{
 unsigned long VAR_6 = VAR_1 | VAR_3 | VAR_2;
 int VAR_7, VAR_8 = -VAR_0;

 FUNC_1(VAR_5);

 VAR_7 = VAR_5->irq;
 if (VAR_7)
  VAR_8 = FUNC_0(VAR_5->dev, VAR_7, VAR_4,
           VAR_6, "smmuv3-pmu", VAR_5);
 return VAR_8;
}
