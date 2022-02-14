
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ashmem_range {int unpinned; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ashmem_range*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ashmem_range*) ;
 scalar_t__ FUNC_3 (struct ashmem_range*) ;

__attribute__((used)) static void FUNC_4(struct ashmem_range *VAR_1)
{
 FUNC_1(&VAR_1->unpinned);
 if (FUNC_3(VAR_1))
  FUNC_2(VAR_1);
 FUNC_0(VAR_0, VAR_1);
}
