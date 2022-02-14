
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int map_flags; int max_entries; int value_size; int key_size; int map_type; } ;
struct bpf_map {int numa_node; int map_flags; int max_entries; int value_size; int key_size; int map_type; } ;


 int FUNC_0 (union bpf_attr*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bpf_map *VAR_0, union bpf_attr *VAR_1)
{
 VAR_0->map_type = VAR_1->map_type;
 VAR_0->key_size = VAR_1->key_size;
 VAR_0->value_size = VAR_1->value_size;
 VAR_0->max_entries = VAR_1->max_entries;
 VAR_0->map_flags = FUNC_1(VAR_1->map_flags);
 VAR_0->numa_node = FUNC_0(VAR_1);
}
