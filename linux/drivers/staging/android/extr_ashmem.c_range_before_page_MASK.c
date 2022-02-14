
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ashmem_range {size_t pgend; } ;



__attribute__((used)) static inline bool FUNC_0(struct ashmem_range *VAR_0,
         size_t VAR_1)
{
 return VAR_0->pgend < VAR_1;
}
