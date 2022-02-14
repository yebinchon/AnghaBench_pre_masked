
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ooo_info {int cid_base; int max_num_archipelagos; struct qed_ooo_archipelago* p_archipelagos_mem; } ;
struct qed_ooo_archipelago {int isles_list; } ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static struct qed_ooo_archipelago
*FUNC_1(struct qed_hwfn *VAR_0,
     struct qed_ooo_info
     *VAR_1,
     u32 VAR_2)
{
 u32 VAR_3 = (VAR_2 & 0xffff) - VAR_1->cid_base;
 struct qed_ooo_archipelago *VAR_4;

 if (VAR_3 >= VAR_1->max_num_archipelagos)
  return ((void*)0);

 VAR_4 = &VAR_1->p_archipelagos_mem[VAR_3];

 if (FUNC_0(&VAR_4->isles_list))
  return ((void*)0);

 return VAR_4;
}
