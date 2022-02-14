
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ashmem_range {size_t pgstart; size_t pgend; unsigned int purged; int unpinned; struct ashmem_area* asma; } ;
struct ashmem_area {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ashmem_range*) ;
 scalar_t__ FUNC_2 (struct ashmem_range*) ;

__attribute__((used)) static void FUNC_3(struct ashmem_area *VAR_0,
   struct ashmem_range *VAR_1, unsigned int VAR_2,
   size_t VAR_3, size_t VAR_4,
   struct ashmem_range **VAR_5)
{
 struct ashmem_range *VAR_6 = *VAR_5;

 *VAR_5 = ((void*)0);
 VAR_6->asma = VAR_0;
 VAR_6->pgstart = VAR_3;
 VAR_6->pgend = VAR_4;
 VAR_6->purged = VAR_2;

 FUNC_0(&VAR_6->unpinned, &VAR_1->unpinned);

 if (FUNC_2(VAR_6))
  FUNC_1(VAR_6);
}
