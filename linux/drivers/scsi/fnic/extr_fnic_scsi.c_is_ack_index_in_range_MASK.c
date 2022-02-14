
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vnic_wq_copy {scalar_t__ to_clean_index; scalar_t__ to_use_index; } ;



__attribute__((used)) static inline int FUNC_0(struct vnic_wq_copy *VAR_0,
     u16 VAR_1)
{
 if (VAR_0->to_clean_index <= VAR_0->to_use_index) {

  if (VAR_1 < VAR_0->to_clean_index ||
      VAR_1 >= VAR_0->to_use_index)
   return 0;
 } else {

  if (VAR_1 < VAR_0->to_clean_index &&
      VAR_1 >= VAR_0->to_use_index)
   return 0;
 }

 return 1;
}
