
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int idx_mask; } ;
struct cxgbi_ppm {int base_idx; TYPE_1__ tformat; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct cxgbi_ppm *VAR_1,
         u32 VAR_2)
{
 u32 VAR_3 = (VAR_2 >> VAR_0) &
   VAR_1->tformat.idx_mask;

 return VAR_3 - VAR_1->base_idx;
}
