
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bnx2x {int pf_num; scalar_t__ cnic_base_cl_id; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct bnx2x *VAR_1, u8 VAR_2)
{
 return VAR_1->cnic_base_cl_id + VAR_2 +
  (VAR_1->pf_num >> 1) * VAR_0;
}
