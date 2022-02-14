
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btf_type {int dummy; } ;
struct btf {size_t* resolved_ids; } ;


 struct btf_type const* FUNC_0 (struct btf const*,size_t) ;

__attribute__((used)) static const struct btf_type *FUNC_1(const struct btf *VAR_0,
        u32 *VAR_1)
{
 *VAR_1 = VAR_0->resolved_ids[*VAR_1];
 return FUNC_0(VAR_0, *VAR_1);
}
