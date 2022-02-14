
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_vsi {scalar_t__ num_queue_pairs; scalar_t__ alloc_queue_pairs; } ;


 scalar_t__ FUNC_0 (struct i40e_vsi*) ;

__attribute__((used)) static bool FUNC_1(struct i40e_vsi *VAR_0, u16 VAR_1)
{
 if (FUNC_0(VAR_0)) {
  return VAR_1 < VAR_0->num_queue_pairs ||
   (VAR_1 >= VAR_0->alloc_queue_pairs &&
    VAR_1 < VAR_0->alloc_queue_pairs + VAR_0->num_queue_pairs);
 }

 return VAR_1 < VAR_0->num_queue_pairs;
}
