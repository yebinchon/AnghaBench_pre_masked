
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int* insn_state; int* insn_stack; int cur_stack; } ;
struct bpf_verifier_env {TYPE_2__ cfg; TYPE_1__* prog; } ;
struct bpf_insn {scalar_t__ src_reg; int imm; int off; int code; } ;
struct TYPE_3__ {int len; struct bpf_insn* insnsi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct bpf_verifier_env*,int) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int,int,int ,struct bpf_verifier_env*,int) ;
 int FUNC_7 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_8(struct bpf_verifier_env *VAR_15)
{
 struct bpf_insn *VAR_16 = VAR_15->prog->insnsi;
 int VAR_17 = VAR_15->prog->len;
 int *VAR_18, *VAR_19;
 int VAR_20 = 0;
 int VAR_21, VAR_22;

 VAR_19 = VAR_15->cfg.insn_state = FUNC_4(VAR_17, sizeof(int), VAR_14);
 if (!VAR_19)
  return -VAR_11;

 VAR_18 = VAR_15->cfg.insn_stack = FUNC_4(VAR_17, sizeof(int), VAR_14);
 if (!VAR_18) {
  FUNC_5(VAR_19);
  return -VAR_11;
 }

 VAR_19[0] = VAR_8;
 VAR_18[0] = 0;
 VAR_15->cfg.cur_stack = 1;

peek_stack:
 if (VAR_15->cfg.cur_stack == 0)
  goto check_state;
 VAR_22 = VAR_18[VAR_15->cfg.cur_stack - 1];

 if (FUNC_0(VAR_16[VAR_22].code) == VAR_3 ||
     FUNC_0(VAR_16[VAR_22].code) == VAR_4) {
  u8 VAR_23 = FUNC_1(VAR_16[VAR_22].code);

  if (VAR_23 == VAR_1) {
   goto mark_explored;
  } else if (VAR_23 == VAR_0) {
   VAR_20 = FUNC_6(VAR_22, VAR_22 + 1, VAR_13, VAR_15, 0);
   if (VAR_20 == 1)
    goto peek_stack;
   else if (VAR_20 < 0)
    goto err_free;
   if (VAR_22 + 1 < VAR_17)
    FUNC_3(VAR_15, VAR_22 + 1);
   if (VAR_16[VAR_22].src_reg == VAR_6) {
    FUNC_3(VAR_15, VAR_22);
    VAR_20 = FUNC_6(VAR_22, VAR_22 + VAR_16[VAR_22].imm + 1, VAR_7,
      VAR_15, 0);
    if (VAR_20 == 1)
     goto peek_stack;
    else if (VAR_20 < 0)
     goto err_free;
   }
  } else if (VAR_23 == VAR_2) {
   if (FUNC_2(VAR_16[VAR_22].code) != VAR_5) {
    VAR_20 = -VAR_10;
    goto err_free;
   }

   VAR_20 = FUNC_6(VAR_22, VAR_22 + VAR_16[VAR_22].off + 1,
     VAR_13, VAR_15, 1);
   if (VAR_20 == 1)
    goto peek_stack;
   else if (VAR_20 < 0)
    goto err_free;




   FUNC_3(VAR_15, VAR_22 + VAR_16[VAR_22].off + 1);



   if (VAR_22 + 1 < VAR_17)
    FUNC_3(VAR_15, VAR_22 + 1);
  } else {

   FUNC_3(VAR_15, VAR_22);
   VAR_20 = FUNC_6(VAR_22, VAR_22 + 1, VAR_13, VAR_15, 1);
   if (VAR_20 == 1)
    goto peek_stack;
   else if (VAR_20 < 0)
    goto err_free;

   VAR_20 = FUNC_6(VAR_22, VAR_22 + VAR_16[VAR_22].off + 1, VAR_7, VAR_15, 1);
   if (VAR_20 == 1)
    goto peek_stack;
   else if (VAR_20 < 0)
    goto err_free;
  }
 } else {



  VAR_20 = FUNC_6(VAR_22, VAR_22 + 1, VAR_13, VAR_15, 0);
  if (VAR_20 == 1)
   goto peek_stack;
  else if (VAR_20 < 0)
   goto err_free;
 }

mark_explored:
 VAR_19[VAR_22] = VAR_12;
 if (VAR_15->cfg.cur_stack-- <= 0) {
  FUNC_7(VAR_15, "pop stack internal bug\n");
  VAR_20 = -VAR_9;
  goto err_free;
 }
 goto peek_stack;

check_state:
 for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++) {
  if (VAR_19[VAR_21] != VAR_12) {
   FUNC_7(VAR_15, "unreachable insn %d\n", VAR_21);
   VAR_20 = -VAR_10;
   goto err_free;
  }
 }
 VAR_20 = 0;

err_free:
 FUNC_5(VAR_19);
 FUNC_5(VAR_18);
 VAR_15->cfg.insn_state = VAR_15->cfg.insn_stack = ((void*)0);
 return VAR_20;
}
