
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ashmem_range {int dummy; } ;


 scalar_t__ FUNC_0 (struct ashmem_range*,size_t) ;
 scalar_t__ FUNC_1 (struct ashmem_range*,size_t,size_t) ;

__attribute__((used)) static inline bool FUNC_2(struct ashmem_range *VAR_0,
           size_t VAR_1, size_t VAR_2)
{
 return FUNC_0(VAR_0, VAR_1) || FUNC_0(VAR_0, VAR_2) ||
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
