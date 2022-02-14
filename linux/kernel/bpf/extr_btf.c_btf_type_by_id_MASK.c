
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btf_type {int dummy; } ;
struct btf {size_t nr_types; struct btf_type const** types; } ;



const struct btf_type *FUNC_0(const struct btf *VAR_0, u32 VAR_1)
{
 if (VAR_1 > VAR_0->nr_types)
  return ((void*)0);

 return VAR_0->types[VAR_1];
}
