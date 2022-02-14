
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns3_enet_ring {size_t next_to_use; size_t next_to_clean; TYPE_1__* desc_cb; } ;
struct TYPE_2__ {scalar_t__ dma; int reuse_flag; } ;


 int FUNC_0 (struct hns3_enet_ring*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct hns3_enet_ring*,int ) ;

__attribute__((used)) static void FUNC_2(struct hns3_enet_ring *VAR_1)
{
 while (VAR_1->next_to_use != VAR_1->next_to_clean) {




  if (!VAR_1->desc_cb[VAR_1->next_to_use].reuse_flag) {
   FUNC_0(VAR_1,
       &VAR_1->desc_cb[VAR_1->next_to_use]);
   VAR_1->desc_cb[VAR_1->next_to_use].dma = 0;
  }

  FUNC_1(VAR_1, VAR_0);
 }
}
