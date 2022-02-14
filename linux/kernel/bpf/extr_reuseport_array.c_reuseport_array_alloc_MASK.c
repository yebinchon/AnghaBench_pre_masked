
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {scalar_t__ max_entries; } ;
typedef int u64 ;
struct sock {int dummy; } ;
struct bpf_map {int memory; } ;
struct reuseport_array {struct bpf_map map; } ;
struct bpf_map_memory {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_map* FUNC_0 (int) ;
 struct reuseport_array* FUNC_1 (int,int) ;
 int FUNC_2 (union bpf_attr*) ;
 int FUNC_3 (struct bpf_map_memory*) ;
 int FUNC_4 (struct bpf_map_memory*,int) ;
 int FUNC_5 (int *,struct bpf_map_memory*) ;
 int FUNC_6 (struct bpf_map*,union bpf_attr*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static struct bpf_map *FUNC_8(union bpf_attr *VAR_3)
{
 int VAR_4, VAR_5 = FUNC_2(VAR_3);
 struct reuseport_array *VAR_6;
 struct bpf_map_memory VAR_7;
 u64 VAR_8;

 if (!FUNC_7(VAR_0))
  return FUNC_0(-VAR_2);

 VAR_8 = sizeof(*VAR_6);
 VAR_8 += (u64)VAR_3->max_entries * sizeof(struct sock *);

 VAR_4 = FUNC_4(&VAR_7, VAR_8);
 if (VAR_4)
  return FUNC_0(VAR_4);


 VAR_6 = FUNC_1(VAR_8, VAR_5);
 if (!VAR_6) {
  FUNC_3(&VAR_7);
  return FUNC_0(-VAR_1);
 }


 FUNC_6(&VAR_6->map, VAR_3);
 FUNC_5(&VAR_6->map.memory, &VAR_7);

 return &VAR_6->map;
}
