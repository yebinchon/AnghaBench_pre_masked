
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ashmem_range {unsigned long pgend; unsigned long pgstart; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct ashmem_range *VAR_0)
{
 return VAR_0->pgend - VAR_0->pgstart + 1;
}
