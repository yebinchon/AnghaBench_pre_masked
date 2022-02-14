
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btf_type {size_t size; } ;
struct btf {size_t* resolved_sizes; size_t* resolved_ids; } ;


 scalar_t__ FUNC_0 (int) ;
 struct btf_type* FUNC_1 (struct btf const*,size_t) ;
 scalar_t__ FUNC_2 (struct btf_type const*) ;
 scalar_t__ FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct btf_type const*) ;
 scalar_t__ FUNC_5 (struct btf_type const*) ;
 int FUNC_6 (struct btf_type const*) ;
 scalar_t__ FUNC_7 (struct btf_type const*) ;

const struct btf_type *FUNC_8(const struct btf *VAR_0,
     u32 *VAR_1, u32 *VAR_2)
{
 const struct btf_type *VAR_3;
 u32 VAR_4 = *VAR_1;
 u32 VAR_5 = 0;

 VAR_3 = FUNC_1(VAR_0, VAR_4);
 if (FUNC_7(VAR_3))
  return ((void*)0);

 if (FUNC_2(VAR_3)) {
  VAR_5 = VAR_3->size;
 } else if (FUNC_3(VAR_3)) {
  VAR_5 = VAR_0->resolved_sizes[VAR_4];
 } else if (FUNC_5(VAR_3)) {
  VAR_5 = sizeof(void *);
 } else {
  if (FUNC_0(!FUNC_4(VAR_3) &&
     !FUNC_6(VAR_3)))
   return ((void*)0);

  VAR_4 = VAR_0->resolved_ids[VAR_4];
  VAR_3 = FUNC_1(VAR_0, VAR_4);
  if (FUNC_7(VAR_3))
   return ((void*)0);
  else if (FUNC_2(VAR_3))
   VAR_5 = VAR_3->size;
  else if (FUNC_3(VAR_3))
   VAR_5 = VAR_0->resolved_sizes[VAR_4];
  else if (FUNC_5(VAR_3))
   VAR_5 = sizeof(void *);
  else
   return ((void*)0);
 }

 *VAR_1 = VAR_4;
 if (VAR_2)
  *VAR_2 = VAR_5;

 return VAR_3;
}
