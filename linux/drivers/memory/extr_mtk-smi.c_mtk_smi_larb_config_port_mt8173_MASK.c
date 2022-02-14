
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_smi_larb {scalar_t__ base; int * mmu; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mtk_smi_larb* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1)
{
 struct mtk_smi_larb *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(*VAR_2->mmu, VAR_2->base + VAR_0);
}
