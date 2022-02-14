
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns3_enet_ring {TYPE_2__* desc; struct hns3_desc_cb* desc_cb; } ;
struct hns3_desc_cb {int dma; } ;
struct TYPE_3__ {scalar_t__ bd_base_info; } ;
struct TYPE_4__ {TYPE_1__ rx; int addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hns3_enet_ring*,struct hns3_desc_cb*) ;

__attribute__((used)) static void FUNC_2(struct hns3_enet_ring *VAR_0, int VAR_1,
    struct hns3_desc_cb *VAR_2)
{
 FUNC_1(VAR_0, &VAR_0->desc_cb[VAR_1]);
 VAR_0->desc_cb[VAR_1] = *VAR_2;
 VAR_0->desc[VAR_1].addr = FUNC_0(VAR_0->desc_cb[VAR_1].dma);
 VAR_0->desc[VAR_1].rx.bd_base_info = 0;
}
