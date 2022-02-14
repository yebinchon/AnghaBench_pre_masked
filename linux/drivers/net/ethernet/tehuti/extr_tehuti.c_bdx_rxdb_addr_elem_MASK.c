
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxdb {int nelem; void* elems; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void *FUNC_1(struct rxdb *VAR_0, int VAR_1)
{
 FUNC_0((VAR_1 < 0) || (VAR_1 >= VAR_0->nelem));
 return VAR_0->elems + VAR_1;
}
