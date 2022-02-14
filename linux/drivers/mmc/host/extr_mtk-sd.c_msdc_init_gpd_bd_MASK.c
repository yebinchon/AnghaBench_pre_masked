
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt_gpdma_desc {int gpd_info; int bd_info; void* next; void* ptr; } ;
struct mt_bdma_desc {int gpd_info; int bd_info; void* next; void* ptr; } ;
struct msdc_host {TYPE_1__* dev_comp; } ;
struct msdc_dma {scalar_t__ bd_addr; scalar_t__ gpd_addr; struct mt_gpdma_desc* bd; struct mt_gpdma_desc* gpd; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ support_64g; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mt_gpdma_desc*,int ,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct msdc_host *VAR_2, struct msdc_dma *VAR_3)
{
 struct mt_gpdma_desc *VAR_4 = VAR_3->gpd;
 struct mt_bdma_desc *VAR_5 = VAR_3->bd;
 dma_addr_t VAR_6;
 int VAR_7;

 FUNC_1(VAR_4, 0, sizeof(struct mt_gpdma_desc) * 2);

 VAR_6 = VAR_3->gpd_addr + sizeof(struct mt_gpdma_desc);
 VAR_4->gpd_info = VAR_0;



 VAR_4->next = FUNC_0(VAR_6);
 if (VAR_2->dev_comp->support_64g)
  VAR_4->gpd_info |= (FUNC_2(VAR_6) & 0xf) << 24;

 VAR_6 = VAR_3->bd_addr;
 VAR_4->ptr = FUNC_0(VAR_3->bd_addr);
 if (VAR_2->dev_comp->support_64g)
  VAR_4->gpd_info |= (FUNC_2(VAR_6) & 0xf) << 28;

 FUNC_1(VAR_5, 0, sizeof(struct mt_bdma_desc) * VAR_1);
 for (VAR_7 = 0; VAR_7 < (VAR_1 - 1); VAR_7++) {
  VAR_6 = VAR_3->bd_addr + sizeof(*VAR_5) * (VAR_7 + 1);
  VAR_5[VAR_7].next = FUNC_0(VAR_6);
  if (VAR_2->dev_comp->support_64g)
   VAR_5[VAR_7].bd_info |= (FUNC_2(VAR_6) & 0xf) << 24;
 }
}
