
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int value_size; scalar_t__ max_entries; } ;
typedef int u64 ;
struct bpf_map {int memory; } ;
struct bpf_queue_stack {int size; struct bpf_map map; int lock; } ;
struct bpf_map_memory {int member_0; } ;


 int VAR_0 ;
 struct bpf_map* FUNC_0 (int) ;
 struct bpf_queue_stack* FUNC_1 (int,int) ;
 int FUNC_2 (union bpf_attr*) ;
 int FUNC_3 (struct bpf_map_memory*) ;
 int FUNC_4 (struct bpf_map_memory*,int) ;
 int FUNC_5 (int *,struct bpf_map_memory*) ;
 int FUNC_6 (struct bpf_map*,union bpf_attr*) ;
 int FUNC_7 (struct bpf_queue_stack*,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct bpf_map *FUNC_9(union bpf_attr *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_2(VAR_1);
 struct bpf_map_memory VAR_4 = {0};
 struct bpf_queue_stack *VAR_5;
 u64 VAR_6, VAR_7, VAR_8;

 VAR_6 = (u64) VAR_1->max_entries + 1;
 VAR_8 = VAR_7 = sizeof(*VAR_5) + VAR_6 * VAR_1->value_size;

 VAR_2 = FUNC_4(&VAR_4, VAR_8);
 if (VAR_2 < 0)
  return FUNC_0(VAR_2);

 VAR_5 = FUNC_1(VAR_7, VAR_3);
 if (!VAR_5) {
  FUNC_3(&VAR_4);
  return FUNC_0(-VAR_0);
 }

 FUNC_7(VAR_5, 0, sizeof(*VAR_5));

 FUNC_6(&VAR_5->map, VAR_1);

 FUNC_5(&VAR_5->map.memory, &VAR_4);
 VAR_5->size = VAR_6;

 FUNC_8(&VAR_5->lock);

 return &VAR_5->map;
}
