
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int dummy; } ;


 void* FUNC_0 (struct bpf_map*) ;
 struct bpf_map** FUNC_1 (struct bpf_map*,void*) ;

__attribute__((used)) static void *FUNC_2(struct bpf_map *VAR_0, void *VAR_1)
{
 struct bpf_map **VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_2)
  return ((void*)0);

 return FUNC_0(*VAR_2);
}
