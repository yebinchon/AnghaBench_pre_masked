
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int tn_buf ;
struct bpf_verifier_env {int allow_ptr_leaks; } ;
struct TYPE_7__ {int value; } ;
struct bpf_reg_state {size_t type; int off; int smax_value; int smin_value; TYPE_2__ var_off; } ;
struct bpf_func_state {int allocated_stack; TYPE_1__* stack; } ;
struct bpf_call_arg_meta {int access_size; int regno; scalar_t__ raw_mode; } ;
struct TYPE_8__ {scalar_t__ type; int parent; } ;
struct TYPE_6__ {scalar_t__* slot_type; TYPE_4__ spilled_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct bpf_verifier_env*,int,int,int,int) ;
 int FUNC_1 (TYPE_4__*) ;
 struct bpf_func_state* FUNC_2 (struct bpf_verifier_env*,struct bpf_reg_state*) ;
 int FUNC_3 (struct bpf_verifier_env*,TYPE_4__*,int ,int ) ;
 struct bpf_reg_state* FUNC_4 (struct bpf_verifier_env*,int) ;
 int * VAR_9 ;
 scalar_t__ FUNC_5 (struct bpf_reg_state*) ;
 scalar_t__ FUNC_6 (TYPE_2__) ;
 int FUNC_7 (char*,int,TYPE_2__) ;
 int FUNC_8 (struct bpf_verifier_env*,struct bpf_func_state*,int) ;
 int FUNC_9 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_10(struct bpf_verifier_env *VAR_10, int VAR_11,
    int VAR_12, bool VAR_13,
    struct bpf_call_arg_meta *VAR_14)
{
 struct bpf_reg_state *VAR_15 = FUNC_4(VAR_10, VAR_11);
 struct bpf_func_state *VAR_16 = FUNC_2(VAR_10, VAR_15);
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 if (VAR_15->type != VAR_3) {

  if (VAR_13 && VAR_12 == 0 &&
      FUNC_5(VAR_15))
   return 0;

  FUNC_9(VAR_10, "R%d type=%s expected=%s\n", VAR_11,
   VAR_9[VAR_15->type],
   VAR_9[VAR_3]);
  return -VAR_2;
 }

 if (FUNC_6(VAR_15->var_off)) {
  VAR_18 = VAR_19 = VAR_15->var_off.value + VAR_15->off;
  VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_18, VAR_12,
          VAR_13);
  if (VAR_17)
   return VAR_17;
 } else {





  if (!VAR_10->allow_ptr_leaks) {
   char VAR_24[48];

   FUNC_7(VAR_24, sizeof(VAR_24), VAR_15->var_off);
   FUNC_9(VAR_10, "R%d indirect variable offset stack access prohibited for !root, var_off=%s\n",
    VAR_11, VAR_24);
   return -VAR_2;
  }






  if (VAR_14 && VAR_14->raw_mode)
   VAR_14 = ((void*)0);

  if (VAR_15->smax_value >= VAR_0 ||
      VAR_15->smax_value <= -VAR_0) {
   FUNC_9(VAR_10, "R%d unbounded indirect variable offset stack access\n",
    VAR_11);
   return -VAR_2;
  }
  VAR_18 = VAR_15->smin_value + VAR_15->off;
  VAR_19 = VAR_15->smax_value + VAR_15->off;
  VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_18, VAR_12,
          VAR_13);
  if (VAR_17) {
   FUNC_9(VAR_10, "R%d min value is outside of stack bound\n",
    VAR_11);
   return VAR_17;
  }
  VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_19, VAR_12,
          VAR_13);
  if (VAR_17) {
   FUNC_9(VAR_10, "R%d max value is outside of stack bound\n",
    VAR_11);
   return VAR_17;
  }
 }

 if (VAR_14 && VAR_14->raw_mode) {
  VAR_14->access_size = VAR_12;
  VAR_14->regno = VAR_11;
  return 0;
 }

 for (VAR_20 = VAR_18; VAR_20 < VAR_19 + VAR_12; VAR_20++) {
  u8 *VAR_25;

  VAR_22 = -VAR_20 - 1;
  VAR_23 = VAR_22 / VAR_1;
  if (VAR_16->allocated_stack <= VAR_22)
   goto err;
  VAR_25 = &VAR_16->stack[VAR_23].slot_type[VAR_22 % VAR_1];
  if (*VAR_25 == VAR_6)
   goto mark;
  if (*VAR_25 == VAR_8) {

   *VAR_25 = VAR_6;
   goto mark;
  }
  if (VAR_16->stack[VAR_23].slot_type[0] == VAR_7 &&
      VAR_16->stack[VAR_23].spilled_ptr.type == VAR_5) {
   FUNC_1(&VAR_16->stack[VAR_23].spilled_ptr);
   for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++)
    VAR_16->stack[VAR_23].slot_type[VAR_21] = VAR_6;
   goto mark;
  }

err:
  if (FUNC_6(VAR_15->var_off)) {
   FUNC_9(VAR_10, "invalid indirect read from stack off %d+%d size %d\n",
    VAR_18, VAR_20 - VAR_18, VAR_12);
  } else {
   char VAR_26[48];

   FUNC_7(VAR_26, sizeof(VAR_26), VAR_15->var_off);
   FUNC_9(VAR_10, "invalid indirect read from stack var_off %s+%d size %d\n",
    VAR_26, VAR_20 - VAR_18, VAR_12);
  }
  return -VAR_2;
mark:



  FUNC_3(VAR_10, &VAR_16->stack[VAR_23].spilled_ptr,
         VAR_16->stack[VAR_23].spilled_ptr.parent,
         VAR_4);
 }
 return FUNC_8(VAR_10, VAR_16, VAR_18);
}
