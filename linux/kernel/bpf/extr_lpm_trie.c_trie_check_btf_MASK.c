
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int info; } ;
struct btf {int dummy; } ;
struct bpf_map {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct bpf_map *VAR_2,
     const struct btf *VAR_3,
     const struct btf_type *VAR_4,
     const struct btf_type *VAR_5)
{

 return FUNC_0(VAR_4->info) != VAR_0 ?
        -VAR_1 : 0;
}
