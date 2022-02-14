
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_smi_larb_gen {int* port_in_larb; } ;
struct mtk_smi_larb {size_t larbid; int* mmu; struct device* smi_common_dev; struct mtk_smi_larb_gen* larb_gen; } ;
struct mtk_smi {scalar_t__ smi_ao_base; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (struct device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_0)
{
 struct mtk_smi_larb *VAR_1 = FUNC_5(VAR_0);
 const struct mtk_smi_larb_gen *VAR_2 = VAR_1->larb_gen;
 struct mtk_smi *VAR_3 = FUNC_5(VAR_1->smi_common_dev);
 int VAR_4, VAR_5, VAR_6;
 u32 VAR_7, VAR_8;

 VAR_5 = VAR_2->port_in_larb[VAR_1->larbid];
 VAR_6 = VAR_2->port_in_larb[VAR_1->larbid + 1]
   - VAR_2->port_in_larb[VAR_1->larbid];

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++, VAR_5++) {
  if (*VAR_1->mmu & FUNC_0(VAR_4)) {

   VAR_7 = FUNC_4(VAR_5);
  } else {

   continue;
  }
  VAR_8 = FUNC_6(VAR_3->smi_ao_base
   + FUNC_1(VAR_5));
  VAR_8 &= FUNC_3(VAR_5);
  VAR_8 |= VAR_7;
  VAR_8 |= FUNC_2(VAR_5);
  FUNC_7(VAR_8,
   VAR_3->smi_ao_base
   + FUNC_1(VAR_5));
 }
}
