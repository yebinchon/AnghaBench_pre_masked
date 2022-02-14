
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {scalar_t__ map_type; int max_entries; int value_size; } ;
typedef unsigned long long u64 ;
typedef int u32 ;
struct bpf_map_memory {int dummy; } ;
struct bpf_map {int unpriv_array; struct bpf_map_memory memory; } ;
struct bpf_array {int index_mask; int elem_size; struct bpf_map map; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_map* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bpf_array*) ;
 struct bpf_array* FUNC_2 (unsigned long long,int) ;
 int FUNC_3 (struct bpf_array*) ;
 int FUNC_4 (union bpf_attr*) ;
 int FUNC_5 (struct bpf_map_memory*) ;
 int FUNC_6 (struct bpf_map_memory*,unsigned long long) ;
 int FUNC_7 (struct bpf_map_memory*,struct bpf_map_memory*) ;
 int FUNC_8 (struct bpf_map*,union bpf_attr*) ;
 int FUNC_9 (int ) ;
 unsigned long long FUNC_10 (int) ;
 unsigned long long FUNC_11 () ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static struct bpf_map *FUNC_13(union bpf_attr *VAR_4)
{
 bool VAR_5 = VAR_4->map_type == VAR_0;
 int VAR_6, VAR_7 = FUNC_4(VAR_4);
 u32 VAR_8, VAR_9, VAR_10;
 bool VAR_11 = !FUNC_9(VAR_1);
 u64 VAR_12, VAR_13, VAR_14;
 struct bpf_map_memory VAR_15;
 struct bpf_array *VAR_16;

 VAR_8 = FUNC_12(VAR_4->value_size, 8);

 VAR_10 = VAR_4->max_entries;





 VAR_14 = FUNC_10(VAR_10 - 1);
 VAR_14 = 1ULL << VAR_14;
 VAR_14 -= 1;

 VAR_9 = VAR_14;
 if (VAR_11) {



  VAR_10 = VAR_9 + 1;

  if (VAR_10 < VAR_4->max_entries)
   return FUNC_0(-VAR_2);
 }

 VAR_13 = sizeof(*VAR_16);
 if (VAR_5)
  VAR_13 += (u64) VAR_10 * sizeof(void *);
 else
  VAR_13 += (u64) VAR_10 * VAR_8;


 VAR_12 = VAR_13;
 if (VAR_5)
  VAR_12 += (u64)VAR_4->max_entries * VAR_8 * FUNC_11();

 VAR_6 = FUNC_6(&VAR_15, VAR_12);
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);


 VAR_16 = FUNC_2(VAR_13, VAR_7);
 if (!VAR_16) {
  FUNC_5(&VAR_15);
  return FUNC_0(-VAR_3);
 }
 VAR_16->index_mask = VAR_9;
 VAR_16->map.unpriv_array = VAR_11;


 FUNC_8(&VAR_16->map, VAR_4);
 FUNC_7(&VAR_16->map.memory, &VAR_15);
 VAR_16->elem_size = VAR_8;

 if (VAR_5 && FUNC_1(VAR_16)) {
  FUNC_5(&VAR_16->map.memory);
  FUNC_3(VAR_16);
  return FUNC_0(-VAR_3);
 }

 return &VAR_16->map;
}
