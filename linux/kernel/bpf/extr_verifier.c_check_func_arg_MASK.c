
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int type; scalar_t__ umax_value; scalar_t__ smin_value; scalar_t__ umin_value; int var_off; int smax_value; TYPE_1__* map_ptr; scalar_t__ ref_obj_id; } ;
struct bpf_call_arg_meta {scalar_t__ func_id; int raw_mode; scalar_t__ msize_umax_value; int msize_smax_value; TYPE_1__* map_ptr; scalar_t__ ref_obj_id; } ;
typedef enum bpf_reg_type { ____Placeholder_bpf_reg_type } bpf_reg_type ;
typedef enum bpf_arg_type { ____Placeholder_bpf_arg_type } bpf_arg_type ;
struct TYPE_2__ {int key_size; int value_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct bpf_verifier_env*,struct bpf_reg_state*,size_t) ;
 int FUNC_4 (struct bpf_verifier_env*,size_t,int,int,struct bpf_call_arg_meta*) ;
 int FUNC_5 (struct bpf_verifier_env*,struct bpf_reg_state*,int ,int,int) ;
 int FUNC_6 (struct bpf_verifier_env*,size_t,int ) ;
 struct bpf_reg_state* FUNC_7 (struct bpf_verifier_env*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct bpf_verifier_env*,size_t) ;
 int FUNC_10 (struct bpf_verifier_env*,size_t) ;
 int FUNC_11 (struct bpf_verifier_env*,struct bpf_call_arg_meta*,int ) ;
 scalar_t__ FUNC_12 (struct bpf_verifier_env*,size_t,int) ;
 scalar_t__* VAR_29 ;
 scalar_t__ FUNC_13 (struct bpf_reg_state*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_18(struct bpf_verifier_env *VAR_30, u32 VAR_31,
     enum bpf_arg_type VAR_32,
     struct bpf_call_arg_meta *VAR_33)
{
 struct bpf_reg_state *VAR_34 = FUNC_7(VAR_30), *VAR_35 = &VAR_34[VAR_31];
 enum bpf_reg_type VAR_36, VAR_37 = VAR_35->type;
 int VAR_38 = 0;

 if (VAR_32 == VAR_4)
  return 0;

 VAR_38 = FUNC_6(VAR_30, VAR_31, VAR_28);
 if (VAR_38)
  return VAR_38;

 if (VAR_32 == VAR_0) {
  if (FUNC_9(VAR_30, VAR_31)) {
   FUNC_17(VAR_30, "R%d leaks addr into helper function\n",
    VAR_31);
   return -VAR_20;
  }
  return 0;
 }

 if (FUNC_15(VAR_37) &&
     !FUNC_11(VAR_30, VAR_33, VAR_18)) {
  FUNC_17(VAR_30, "helper access to the packet is not allowed\n");
  return -VAR_20;
 }

 if (VAR_32 == VAR_6 ||
     VAR_32 == VAR_7 ||
     VAR_32 == VAR_13 ||
     VAR_32 == VAR_8) {
  VAR_36 = VAR_26;
  if (FUNC_13(VAR_35) &&
      VAR_32 == VAR_8)
                                             ;
  else if (!FUNC_15(VAR_37) &&
    VAR_37 != VAR_23 &&
    VAR_37 != VAR_36)
   goto err_type;
 } else if (VAR_32 == VAR_2 ||
     VAR_32 == VAR_3) {
  VAR_36 = VAR_27;
  if (VAR_37 != VAR_36)
   goto err_type;
 } else if (VAR_32 == VAR_1) {
  VAR_36 = VAR_19;
  if (VAR_37 != VAR_36)
   goto err_type;
 } else if (VAR_32 == VAR_5) {
  VAR_36 = VAR_22;
  if (VAR_37 != VAR_36)
   goto err_type;
  VAR_38 = FUNC_3(VAR_30, VAR_35, VAR_31);
  if (VAR_38 < 0)
   return VAR_38;
 } else if (VAR_32 == VAR_11) {
  VAR_36 = VAR_25;

  if (!FUNC_16(VAR_37))
   goto err_type;
  if (VAR_35->ref_obj_id) {
   if (VAR_33->ref_obj_id) {
    FUNC_17(VAR_30, "verifier internal error: more than one arg with ref_obj_id R%d %u %u\n",
     VAR_31, VAR_35->ref_obj_id,
     VAR_33->ref_obj_id);
    return -VAR_21;
   }
   VAR_33->ref_obj_id = VAR_35->ref_obj_id;
  }
 } else if (VAR_32 == VAR_10) {
  VAR_36 = VAR_24;
  if (VAR_37 != VAR_36)
   goto err_type;
 } else if (VAR_32 == VAR_12) {
  if (VAR_33->func_id == VAR_15) {
   if (FUNC_12(VAR_30, VAR_31, 1))
    return -VAR_20;
  } else if (VAR_33->func_id == VAR_16) {
   if (FUNC_12(VAR_30, VAR_31, 0))
    return -VAR_20;
  } else {
   FUNC_17(VAR_30, "verifier internal error\n");
   return -VAR_21;
  }
 } else if (FUNC_1(VAR_32)) {
  VAR_36 = VAR_26;




  if (FUNC_13(VAR_35) &&
      VAR_32 == VAR_9)
                                             ;
  else if (!FUNC_15(VAR_37) &&
    VAR_37 != VAR_23 &&
    VAR_37 != VAR_36)
   goto err_type;
  VAR_33->raw_mode = VAR_32 == VAR_14;
 } else if (FUNC_0(VAR_32)) {
  VAR_36 = VAR_26;
  if (!FUNC_15(VAR_37) &&
      VAR_37 != VAR_23 &&
      VAR_37 != VAR_36)
   goto err_type;
 } else {
  FUNC_17(VAR_30, "unsupported arg_type %d\n", VAR_32);
  return -VAR_21;
 }

 if (VAR_32 == VAR_1) {

  VAR_33->map_ptr = VAR_35->map_ptr;
 } else if (VAR_32 == VAR_6) {




  if (!VAR_33->map_ptr) {





   FUNC_17(VAR_30, "invalid map_ptr to access map->key\n");
   return -VAR_20;
  }
  VAR_38 = FUNC_4(VAR_30, VAR_31,
           VAR_33->map_ptr->key_size, 0,
           ((void*)0));
 } else if (VAR_32 == VAR_7 ||
     (VAR_32 == VAR_8 &&
      !FUNC_13(VAR_35)) ||
     VAR_32 == VAR_13) {



  if (!VAR_33->map_ptr) {

   FUNC_17(VAR_30, "invalid map_ptr to access map->value\n");
   return -VAR_20;
  }
  VAR_33->raw_mode = (VAR_32 == VAR_13);
  VAR_38 = FUNC_4(VAR_30, VAR_31,
           VAR_33->map_ptr->value_size, 0,
           VAR_33);
 } else if (FUNC_2(VAR_32)) {
  bool VAR_39 = (VAR_32 == VAR_3);




  VAR_33->msize_smax_value = VAR_35->smax_value;
  VAR_33->msize_umax_value = VAR_35->umax_value;




  if (!FUNC_14(VAR_35->var_off))





   VAR_33 = ((void*)0);

  if (VAR_35->smin_value < 0) {
   FUNC_17(VAR_30, "R%d min value is negative, either use unsigned or 'var &= const'\n",
    VAR_31);
   return -VAR_20;
  }

  if (VAR_35->umin_value == 0) {
   VAR_38 = FUNC_4(VAR_30, VAR_31 - 1, 0,
            VAR_39,
            VAR_33);
   if (VAR_38)
    return VAR_38;
  }

  if (VAR_35->umax_value >= VAR_17) {
   FUNC_17(VAR_30, "R%d unbounded memory access, use 'var &= const' or 'if (var < const)'\n",
    VAR_31);
   return -VAR_20;
  }
  VAR_38 = FUNC_4(VAR_30, VAR_31 - 1,
           VAR_35->umax_value,
           VAR_39, VAR_33);
  if (!VAR_38)
   VAR_38 = FUNC_10(VAR_30, VAR_31);
 } else if (FUNC_0(VAR_32)) {
  int VAR_40 = FUNC_8(VAR_32);

  VAR_38 = FUNC_4(VAR_30, VAR_31, VAR_40, 0, VAR_33);
  if (VAR_38)
   return VAR_38;
  VAR_38 = FUNC_5(VAR_30, VAR_35, 0, VAR_40, 1);
 }

 return VAR_38;
err_type:
 FUNC_17(VAR_30, "R%d type=%s expected=%s\n", VAR_31,
  VAR_29[VAR_37], VAR_29[VAR_36]);
 return -VAR_20;
}
