
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {int desc_num; int * desc; int desc_dma_addr; } ;


 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (struct hns3_enet_ring*) ;
 int FUNC_2 (struct hns3_enet_ring*) ;

__attribute__((used)) static void FUNC_3(struct hns3_enet_ring *VAR_0)
{
 int VAR_1 = VAR_0->desc_num * sizeof(VAR_0->desc[0]);

 FUNC_1(VAR_0);

 if (VAR_0->desc) {
  FUNC_0(FUNC_2(VAR_0), VAR_1,
      VAR_0->desc, VAR_0->desc_dma_addr);
  VAR_0->desc = ((void*)0);
 }
}
