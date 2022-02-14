
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ashmem_range {size_t pgstart; size_t pgend; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ashmem_range*) ;
 size_t FUNC_1 (struct ashmem_range*) ;

__attribute__((used)) static inline void FUNC_2(struct ashmem_range *VAR_1,
    size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4 = FUNC_1(VAR_1);

 VAR_1->pgstart = VAR_2;
 VAR_1->pgend = VAR_3;

 if (FUNC_0(VAR_1))
  VAR_0 -= VAR_4 - FUNC_1(VAR_1);
}
