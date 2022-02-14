
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {struct bpf_insn_aux_data* insn_aux_data; } ;
struct bpf_map {int map_flags; int unpriv_array; } ;
struct bpf_insn_aux_data {int map_state; } ;
struct bpf_call_arg_meta {struct bpf_map* map_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct bpf_map* FUNC_0 (int ) ;
 struct bpf_map* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct bpf_insn_aux_data*,struct bpf_map*,int ) ;
 int FUNC_2 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int
FUNC_3(struct bpf_verifier_env *VAR_11, struct bpf_call_arg_meta *VAR_12,
  int VAR_13, int VAR_14)
{
 struct bpf_insn_aux_data *VAR_15 = &VAR_11->insn_aux_data[VAR_14];
 struct bpf_map *VAR_16 = VAR_12->map_ptr;

 if (VAR_13 != VAR_6 &&
     VAR_13 != VAR_1 &&
     VAR_13 != VAR_5 &&
     VAR_13 != VAR_0 &&
     VAR_13 != VAR_4 &&
     VAR_13 != VAR_3 &&
     VAR_13 != VAR_2)
  return 0;

 if (VAR_16 == ((void*)0)) {
  FUNC_2(VAR_11, "kernel subsystem misconfigured verifier\n");
  return -VAR_10;
 }





 if ((VAR_16->map_flags & VAR_7) &&
     (VAR_13 == VAR_0 ||
      VAR_13 == VAR_5 ||
      VAR_13 == VAR_4 ||
      VAR_13 == VAR_3)) {
  FUNC_2(VAR_11, "write into map forbidden\n");
  return -VAR_9;
 }

 if (!FUNC_0(VAR_15->map_state))
  FUNC_1(VAR_15, VAR_12->map_ptr,
      VAR_12->map_ptr->unpriv_array);
 else if (FUNC_0(VAR_15->map_state) != VAR_12->map_ptr)
  FUNC_1(VAR_15, VAR_8,
      VAR_12->map_ptr->unpriv_array);
 return 0;
}
