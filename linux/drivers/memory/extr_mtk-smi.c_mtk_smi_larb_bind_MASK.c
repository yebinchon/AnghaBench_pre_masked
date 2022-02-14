
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_smi_larb_iommu {int mmu; struct device* dev; } ;
struct mtk_smi_larb {unsigned int larbid; int * mmu; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct mtk_smi_larb* FUNC_0 (struct device*) ;

__attribute__((used)) static int
FUNC_1(struct device *VAR_2, struct device *VAR_3, void *VAR_4)
{
 struct mtk_smi_larb *VAR_5 = FUNC_0(VAR_2);
 struct mtk_smi_larb_iommu *VAR_6 = VAR_4;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_2 == VAR_6[VAR_7].dev) {
   VAR_5->larbid = VAR_7;
   VAR_5->mmu = &VAR_6[VAR_7].mmu;
   return 0;
  }
 }
 return -VAR_0;
}
