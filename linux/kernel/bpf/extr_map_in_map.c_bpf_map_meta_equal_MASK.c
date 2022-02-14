
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {scalar_t__ map_type; scalar_t__ key_size; scalar_t__ value_size; scalar_t__ map_flags; scalar_t__ max_entries; } ;



bool FUNC_0(const struct bpf_map *VAR_0,
   const struct bpf_map *VAR_1)
{

 return VAR_0->map_type == VAR_1->map_type &&
  VAR_0->key_size == VAR_1->key_size &&
  VAR_0->value_size == VAR_1->value_size &&
  VAR_0->map_flags == VAR_1->map_flags &&
  VAR_0->max_entries == VAR_1->max_entries;
}
