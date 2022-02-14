
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
struct bpf_prog {scalar_t__ type; int aux; } ;
struct bpf_map {struct bpf_map* inner_map_meta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (struct bpf_prog*,struct bpf_map*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bpf_map*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct bpf_map*) ;
 int FUNC_6 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int FUNC_7(struct bpf_verifier_env *VAR_3,
     struct bpf_map *VAR_4,
     struct bpf_prog *VAR_5)

{





 if (VAR_5->type == VAR_0) {
  if (!FUNC_3(VAR_4)) {
   FUNC_6(VAR_3, "perf_event programs can only use preallocated hash map\n");
   return -VAR_2;
  }
  if (VAR_4->inner_map_meta &&
      !FUNC_3(VAR_4->inner_map_meta)) {
   FUNC_6(VAR_3, "perf_event programs can only use preallocated inner hash map\n");
   return -VAR_2;
  }
 }

 if ((FUNC_4(VAR_5->type) ||
      VAR_5->type == VAR_1) &&
     FUNC_5(VAR_4)) {
  FUNC_6(VAR_3, "tracing progs cannot use bpf_spin_lock yet\n");
  return -VAR_2;
 }

 if ((FUNC_2(VAR_5->aux) || FUNC_0(VAR_4)) &&
     !FUNC_1(VAR_5, VAR_4)) {
  FUNC_6(VAR_3, "offload device mismatch between prog and map\n");
  return -VAR_2;
 }

 return 0;
}
