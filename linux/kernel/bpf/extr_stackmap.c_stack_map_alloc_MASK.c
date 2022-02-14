
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int value_size; int map_flags; scalar_t__ max_entries; int key_size; } ;
typedef int u64 ;
typedef int u32 ;
struct stack_map_bucket {int dummy; } ;
struct bpf_map {int value_size; int memory; } ;
struct bpf_stack_map {int n_buckets; struct bpf_map map; } ;
struct bpf_stack_build_id {int dummy; } ;
struct bpf_map_memory {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_map* FUNC_1 (int) ;
 int VAR_5 ;
 struct bpf_stack_map* FUNC_2 (int,int ) ;
 int FUNC_3 (struct bpf_stack_map*) ;
 int FUNC_4 (union bpf_attr*) ;
 int FUNC_5 (struct bpf_map_memory*) ;
 int FUNC_6 (struct bpf_map_memory*,int) ;
 int FUNC_7 (int *,struct bpf_map_memory*) ;
 int FUNC_8 (struct bpf_map*,union bpf_attr*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct bpf_stack_map*) ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static struct bpf_map *FUNC_14(union bpf_attr *VAR_7)
{
 u32 VAR_8 = VAR_7->value_size;
 struct bpf_stack_map *VAR_9;
 struct bpf_map_memory VAR_10;
 u64 VAR_11, VAR_12;
 int VAR_13;

 if (!FUNC_9(VAR_1))
  return FUNC_1(-VAR_4);

 if (VAR_7->map_flags & ~VAR_5)
  return FUNC_1(-VAR_2);


 if (VAR_7->max_entries == 0 || VAR_7->key_size != 4 ||
     VAR_8 < 8 || VAR_8 % 8)
  return FUNC_1(-VAR_2);

 FUNC_0(sizeof(struct bpf_stack_build_id) % sizeof(u64));
 if (VAR_7->map_flags & VAR_0) {
  if (VAR_8 % sizeof(struct bpf_stack_build_id) ||
      VAR_8 / sizeof(struct bpf_stack_build_id)
      > VAR_6)
   return FUNC_1(-VAR_2);
 } else if (VAR_8 / 8 > VAR_6)
  return FUNC_1(-VAR_2);


 VAR_12 = FUNC_13(VAR_7->max_entries);

 VAR_11 = VAR_12 * sizeof(struct stack_map_bucket *) + sizeof(*VAR_9);
 VAR_11 += VAR_12 * (VAR_8 + sizeof(struct stack_map_bucket));
 VAR_13 = FUNC_6(&VAR_10, VAR_11);
 if (VAR_13)
  return FUNC_1(VAR_13);

 VAR_9 = FUNC_2(VAR_11, FUNC_4(VAR_7));
 if (!VAR_9) {
  FUNC_5(&VAR_10);
  return FUNC_1(-VAR_3);
 }

 FUNC_8(&VAR_9->map, VAR_7);
 VAR_9->map.value_size = VAR_8;
 VAR_9->n_buckets = VAR_12;

 VAR_13 = FUNC_10(VAR_6);
 if (VAR_13)
  goto free_charge;

 VAR_13 = FUNC_11(VAR_9);
 if (VAR_13)
  goto put_buffers;

 FUNC_7(&VAR_9->map.memory, &VAR_10);

 return &VAR_9->map;

put_buffers:
 FUNC_12();
free_charge:
 FUNC_5(&VAR_10);
 FUNC_3(VAR_9);
 return FUNC_1(VAR_13);
}
