
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring_group {int count; struct hns3_enet_ring* ring; } ;
struct hns3_enet_ring {struct hns3_enet_ring* next; } ;



__attribute__((used)) static void FUNC_0(struct hns3_enet_ring_group *VAR_0,
       struct hns3_enet_ring *VAR_1)
{
 VAR_1->next = VAR_0->ring;
 VAR_0->ring = VAR_1;

 VAR_0->count++;
}
