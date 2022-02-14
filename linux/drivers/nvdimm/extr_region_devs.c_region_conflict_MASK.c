
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {scalar_t__ ndr_start; scalar_t__ ndr_size; } ;
struct device {int dummy; } ;
struct conflict_context {scalar_t__ start; scalar_t__ size; struct nd_region* nd_region; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct nd_region* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, void *VAR_2)
{
 struct nd_region *VAR_3;
 struct conflict_context *VAR_4 = VAR_2;
 resource_size_t VAR_5, VAR_6, VAR_7;

 if (!FUNC_0(VAR_1))
  return 0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == VAR_4->nd_region)
  return 0;

 VAR_5 = VAR_4->start + VAR_4->size;
 VAR_7 = VAR_3->ndr_start;
 VAR_6 = VAR_7 + VAR_3->ndr_size;
 if (VAR_4->start >= VAR_7 && VAR_4->start < VAR_6)
  return -VAR_0;
 if (VAR_5 > VAR_7 && VAR_5 <= VAR_6)
  return -VAR_0;
 return 0;
}
