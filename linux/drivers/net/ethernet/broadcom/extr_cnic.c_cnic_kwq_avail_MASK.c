
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cnic_local {int max_kwq_idx; int kwq_prod_idx; int kwq_con_idx; } ;



__attribute__((used)) static inline u32 FUNC_0(struct cnic_local *VAR_0)
{
 return VAR_0->max_kwq_idx -
  ((VAR_0->kwq_prod_idx - VAR_0->kwq_con_idx) & VAR_0->max_kwq_idx);
}
