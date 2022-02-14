
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8941_wled_var_cfg {size_t size; size_t (* fn ) (size_t) ;size_t* values; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;

__attribute__((used)) static u32 FUNC_1(const struct pm8941_wled_var_cfg *VAR_1, u32 VAR_2)
{
 if (VAR_2 >= VAR_1->size)
  return VAR_0;
 if (VAR_1->fn)
  return VAR_1->fn(VAR_2);
 if (VAR_1->values)
  return VAR_1->values[VAR_2];
 return VAR_2;
}
