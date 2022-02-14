
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_ring_container {int dummy; } ;
struct i40e_q_vector {struct i40e_ring_container rx; } ;



__attribute__((used)) static inline bool FUNC_0(struct i40e_q_vector *VAR_0,
     struct i40e_ring_container *VAR_1)
{
 return &VAR_0->rx == VAR_1;
}
