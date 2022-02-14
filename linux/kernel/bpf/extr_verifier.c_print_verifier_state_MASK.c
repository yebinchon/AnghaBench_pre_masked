
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tn_buf ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_10__ {int value; } ;
struct bpf_reg_state {int type; scalar_t__ smin_value; scalar_t__ umin_value; scalar_t__ smax_value; scalar_t__ umax_value; int off; TYPE_4__ var_off; scalar_t__ precise; int live; TYPE_1__* map_ptr; int range; int ref_obj_id; int id; } ;
struct bpf_func_state {int allocated_stack; int acquired_refs; TYPE_3__* refs; TYPE_2__* stack; struct bpf_reg_state* regs; scalar_t__ frameno; } ;
typedef enum bpf_reg_type { ____Placeholder_bpf_reg_type } bpf_reg_type ;
struct TYPE_9__ {int id; } ;
struct TYPE_8__ {size_t* slot_type; struct bpf_reg_state spilled_ptr; } ;
struct TYPE_7__ {int value_size; int key_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct bpf_verifier_env*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_13 ;
 char* VAR_14 ;
 scalar_t__ FUNC_2 (TYPE_4__) ;
 int FUNC_3 (TYPE_4__) ;
 int FUNC_4 (char*,int,TYPE_4__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static void FUNC_7(struct bpf_verifier_env *VAR_15,
     const struct bpf_func_state *VAR_16)
{
 const struct bpf_reg_state *VAR_17;
 enum bpf_reg_type VAR_18;
 int VAR_19;

 if (VAR_16->frameno)
  FUNC_6(VAR_15, " frame%d:", VAR_16->frameno);
 for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {
  VAR_17 = &VAR_16->regs[VAR_19];
  VAR_18 = VAR_17->type;
  if (VAR_18 == VAR_3)
   continue;
  FUNC_6(VAR_15, " R%d", VAR_19);
  FUNC_0(VAR_15, VAR_17->live);
  FUNC_6(VAR_15, "=%s", VAR_13[VAR_18]);
  if (VAR_18 == VAR_9 && VAR_17->precise)
   FUNC_6(VAR_15, "P");
  if ((VAR_18 == VAR_9 || VAR_18 == VAR_6) &&
      FUNC_2(VAR_17->var_off)) {

   FUNC_6(VAR_15, "%lld", VAR_17->var_off.value + VAR_17->off);
  } else {
   FUNC_6(VAR_15, "(id=%d", VAR_17->id);
   if (FUNC_1(VAR_18))
    FUNC_6(VAR_15, ",ref_obj_id=%d", VAR_17->ref_obj_id);
   if (VAR_18 != VAR_9)
    FUNC_6(VAR_15, ",off=%d", VAR_17->off);
   if (FUNC_5(VAR_18))
    FUNC_6(VAR_15, ",r=%d", VAR_17->range);
   else if (VAR_18 == VAR_1 ||
     VAR_18 == VAR_4 ||
     VAR_18 == VAR_5)
    FUNC_6(VAR_15, ",ks=%d,vs=%d",
     VAR_17->map_ptr->key_size,
     VAR_17->map_ptr->value_size);
   if (FUNC_2(VAR_17->var_off)) {




    FUNC_6(VAR_15, ",imm=%llx", VAR_17->var_off.value);
   } else {
    if (VAR_17->smin_value != VAR_17->umin_value &&
        VAR_17->smin_value != VAR_8)
     FUNC_6(VAR_15, ",smin_value=%lld",
      (long long)VAR_17->smin_value);
    if (VAR_17->smax_value != VAR_17->umax_value &&
        VAR_17->smax_value != VAR_7)
     FUNC_6(VAR_15, ",smax_value=%lld",
      (long long)VAR_17->smax_value);
    if (VAR_17->umin_value != 0)
     FUNC_6(VAR_15, ",umin_value=%llu",
      (unsigned long long)VAR_17->umin_value);
    if (VAR_17->umax_value != VAR_12)
     FUNC_6(VAR_15, ",umax_value=%llu",
      (unsigned long long)VAR_17->umax_value);
    if (!FUNC_3(VAR_17->var_off)) {
     char VAR_20[48];

     FUNC_4(VAR_20, sizeof(VAR_20), VAR_17->var_off);
     FUNC_6(VAR_15, ",var_off=%s", VAR_20);
    }
   }
   FUNC_6(VAR_15, ")");
  }
 }
 for (VAR_19 = 0; VAR_19 < VAR_16->allocated_stack / VAR_0; VAR_19++) {
  char VAR_21[VAR_0 + 1];
  bool VAR_22 = 0;
  int VAR_23;

  for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++) {
   if (VAR_16->stack[VAR_19].slot_type[VAR_23] != VAR_10)
    VAR_22 = 1;
   VAR_21[VAR_23] = VAR_14[
     VAR_16->stack[VAR_19].slot_type[VAR_23]];
  }
  VAR_21[VAR_0] = 0;
  if (!VAR_22)
   continue;
  FUNC_6(VAR_15, " fp%d", (-VAR_19 - 1) * VAR_0);
  FUNC_0(VAR_15, VAR_16->stack[VAR_19].spilled_ptr.live);
  if (VAR_16->stack[VAR_19].slot_type[0] == VAR_11) {
   VAR_17 = &VAR_16->stack[VAR_19].spilled_ptr;
   VAR_18 = VAR_17->type;
   FUNC_6(VAR_15, "=%s", VAR_13[VAR_18]);
   if (VAR_18 == VAR_9 && VAR_17->precise)
    FUNC_6(VAR_15, "P");
   if (VAR_18 == VAR_9 && FUNC_2(VAR_17->var_off))
    FUNC_6(VAR_15, "%lld", VAR_17->var_off.value + VAR_17->off);
  } else {
   FUNC_6(VAR_15, "=%s", VAR_21);
  }
 }
 if (VAR_16->acquired_refs && VAR_16->refs[0].id) {
  FUNC_6(VAR_15, " refs=%d", VAR_16->refs[0].id);
  for (VAR_19 = 1; VAR_19 < VAR_16->acquired_refs; VAR_19++)
   if (VAR_16->refs[VAR_19].id)
    FUNC_6(VAR_15, ",%d", VAR_16->refs[VAR_19].id);
 }
 FUNC_6(VAR_15, "\n");
}
