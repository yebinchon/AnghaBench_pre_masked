
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_wq {size_t num_q_pages; size_t max_wqe_size; int * shadow_wqe; } ;
struct hinic_hw_wqe {int dummy; } ;


 int FUNC_0 (struct hinic_hw_wqe*,int *,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct hinic_wq *VAR_0, struct hinic_hw_wqe *VAR_1)
{
 size_t VAR_2 = VAR_0->num_q_pages * VAR_0->max_wqe_size;

 return FUNC_0(VAR_1, VAR_0->shadow_wqe,
       &VAR_0->shadow_wqe[VAR_2]);
}
