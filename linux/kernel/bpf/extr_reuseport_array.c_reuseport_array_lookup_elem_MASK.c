
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t max_entries; } ;
struct reuseport_array {int * ptrs; TYPE_1__ map; } ;
struct bpf_map {int dummy; } ;


 void* FUNC_0 (int ) ;
 struct reuseport_array* FUNC_1 (struct bpf_map*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void *FUNC_3(struct bpf_map *VAR_0, void *VAR_1)
{
 struct reuseport_array *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3 = *(u32 *)VAR_1;

 if (FUNC_2(VAR_3 >= VAR_2->map.max_entries))
  return ((void*)0);

 return FUNC_0(VAR_2->ptrs[VAR_3]);
}
