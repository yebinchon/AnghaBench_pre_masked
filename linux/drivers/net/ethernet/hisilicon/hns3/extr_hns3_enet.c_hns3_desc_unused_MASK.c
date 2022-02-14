
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {int next_to_clean; int next_to_use; int desc_num; } ;



__attribute__((used)) static int FUNC_0(struct hns3_enet_ring *VAR_0)
{
 int VAR_1 = VAR_0->next_to_clean;
 int VAR_2 = VAR_0->next_to_use;

 return ((VAR_1 >= VAR_2) ? 0 : VAR_0->desc_num) + VAR_1 - VAR_2;
}
