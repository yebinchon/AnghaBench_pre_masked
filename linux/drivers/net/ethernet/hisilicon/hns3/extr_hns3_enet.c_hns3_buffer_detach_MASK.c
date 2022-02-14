
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns3_enet_ring {TYPE_1__* desc; int * desc_cb; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int FUNC_0 (struct hns3_enet_ring*,int *) ;

__attribute__((used)) static void FUNC_1(struct hns3_enet_ring *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, &VAR_0->desc_cb[VAR_1]);
 VAR_0->desc[VAR_1].addr = 0;
}
