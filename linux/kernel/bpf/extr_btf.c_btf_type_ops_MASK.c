
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int info; } ;
struct btf_kind_operations {int dummy; } ;


 size_t FUNC_0 (int ) ;
 struct btf_kind_operations const** VAR_0 ;

__attribute__((used)) static const struct btf_kind_operations *FUNC_1(const struct btf_type *VAR_1)
{
 return VAR_0[FUNC_0(VAR_1->info)];
}
