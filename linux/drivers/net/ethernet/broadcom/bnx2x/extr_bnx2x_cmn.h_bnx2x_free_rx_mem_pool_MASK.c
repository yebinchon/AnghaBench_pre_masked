
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_alloc_pool {int * page; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct bnx2x *VAR_0,
       struct bnx2x_alloc_pool *VAR_1)
{
 if (!VAR_1->page)
  return;

 FUNC_0(VAR_1->page);

 VAR_1->page = ((void*)0);
}
