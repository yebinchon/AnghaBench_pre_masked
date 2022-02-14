
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stack_map_bucket {int dummy; } ;
struct TYPE_2__ {int value_size; int max_entries; int numa_node; } ;
struct bpf_stack_map {int elems; TYPE_1__ map; int freelist; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct bpf_stack_map *VAR_1)
{
 u32 VAR_2 = sizeof(struct stack_map_bucket) + VAR_1->map.value_size;
 int VAR_3;

 VAR_1->elems = FUNC_0(VAR_2 * VAR_1->map.max_entries,
      VAR_1->map.numa_node);
 if (!VAR_1->elems)
  return -VAR_0;

 VAR_3 = FUNC_2(&VAR_1->freelist);
 if (VAR_3)
  goto free_elems;

 FUNC_3(&VAR_1->freelist, VAR_1->elems, VAR_2,
          VAR_1->map.max_entries);
 return 0;

free_elems:
 FUNC_1(VAR_1->elems);
 return VAR_3;
}
