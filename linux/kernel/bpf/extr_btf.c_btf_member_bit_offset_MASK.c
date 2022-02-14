
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btf_type {int dummy; } ;
struct btf_member {int offset; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct btf_type const*) ;

__attribute__((used)) static u32 FUNC_2(const struct btf_type *VAR_0,
        const struct btf_member *VAR_1)
{
 return FUNC_1(VAR_0) ? FUNC_0(VAR_1->offset)
        : VAR_1->offset;
}
