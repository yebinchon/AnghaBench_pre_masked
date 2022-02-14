
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_offloaded_map {int dummy; } ;


 int FUNC_0 (struct bpf_offloaded_map*,void*) ;
 int FUNC_1 (struct bpf_offloaded_map*,void*,void*) ;

__attribute__((used)) static int
FUNC_2(struct bpf_offloaded_map *VAR_0,
    void *VAR_1, void *VAR_2)
{
 if (!VAR_1)
  return FUNC_0(VAR_0, VAR_2);
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
