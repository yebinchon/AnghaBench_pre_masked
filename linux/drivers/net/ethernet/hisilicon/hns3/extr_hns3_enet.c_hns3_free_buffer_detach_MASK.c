
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {struct hns3_desc_cb* desc_cb; } ;
struct hns3_desc_cb {int dma; } ;


 int FUNC_0 (struct hns3_enet_ring*,int) ;
 int FUNC_1 (struct hns3_enet_ring*,struct hns3_desc_cb*) ;

__attribute__((used)) static void FUNC_2(struct hns3_enet_ring *VAR_0, int VAR_1)
{
 struct hns3_desc_cb *VAR_2 = &VAR_0->desc_cb[VAR_1];

 if (!VAR_0->desc_cb[VAR_1].dma)
  return;

 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_2);
}
