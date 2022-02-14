
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ashmem_range {int lru; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ashmem_range*) ;

__attribute__((used)) static inline void FUNC_2(struct ashmem_range *VAR_1)
{
 FUNC_0(&VAR_1->lru);
 VAR_0 -= FUNC_1(VAR_1);
}
