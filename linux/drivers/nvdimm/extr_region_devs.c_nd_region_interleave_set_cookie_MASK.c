
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nd_region {struct nd_interleave_set* nd_set; } ;
struct nd_namespace_index {int minor; int major; } ;
struct nd_interleave_set {int cookie2; int cookie1; } ;


 int FUNC_0 (int ) ;

u64 FUNC_1(struct nd_region *VAR_0,
  struct nd_namespace_index *VAR_1)
{
 struct nd_interleave_set *VAR_2 = VAR_0->nd_set;

 if (!VAR_2)
  return 0;

 if (VAR_1 && FUNC_0(VAR_1->major) == 1
   && FUNC_0(VAR_1->minor) == 1)
  return VAR_2->cookie1;
 return VAR_2->cookie2;
}
