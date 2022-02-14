
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nd_region {struct nd_interleave_set* nd_set; } ;
struct nd_interleave_set {int altcookie; } ;



u64 FUNC_0(struct nd_region *VAR_0)
{
 struct nd_interleave_set *VAR_1 = VAR_0->nd_set;

 if (VAR_1)
  return VAR_1->altcookie;
 return 0;
}
