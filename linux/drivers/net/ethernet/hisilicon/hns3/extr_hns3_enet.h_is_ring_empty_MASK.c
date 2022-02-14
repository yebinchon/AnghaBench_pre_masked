
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;



__attribute__((used)) static inline int FUNC_0(struct hns3_enet_ring *VAR_0)
{
 return VAR_0->next_to_use == VAR_0->next_to_clean;
}
