
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {int desc_num; int next_to_use; int next_to_clean; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct hns3_enet_ring *VAR_0)
{



 int VAR_1 = FUNC_1(&VAR_0->next_to_clean);
 int VAR_2 = FUNC_0(VAR_0->next_to_use);

 return ((VAR_2 >= VAR_1) ? (VAR_0->desc_num - VAR_2 + VAR_1) :
   (VAR_1 - VAR_2)) - 1;
}
