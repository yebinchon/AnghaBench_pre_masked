
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int inner_map_fd; } ;
struct bpf_map {struct bpf_map* inner_map_meta; } ;


 scalar_t__ FUNC_0 (struct bpf_map*) ;
 struct bpf_map* FUNC_1 (union bpf_attr*) ;
 struct bpf_map* FUNC_2 (int ) ;
 int FUNC_3 (struct bpf_map*) ;

__attribute__((used)) static struct bpf_map *FUNC_4(union bpf_attr *VAR_0)
{
 struct bpf_map *VAR_1, *VAR_2;

 VAR_2 = FUNC_2(VAR_0->inner_map_fd);
 if (FUNC_0(VAR_2))
  return VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_2);
  return VAR_1;
 }

 VAR_1->inner_map_meta = VAR_2;

 return VAR_1;
}
