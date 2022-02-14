
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int level; } ;
struct bpf_verifier_env {size_t subprog_cnt; TYPE_2__ log; int allow_ptr_leaks; TYPE_1__* prog; struct bpf_subprog_info* subprog_info; } ;
struct bpf_subprog_info {int start; } ;
struct bpf_insn {int code; scalar_t__ src_reg; int off; scalar_t__ imm; } ;
struct TYPE_3__ {int len; struct bpf_insn* insnsi; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct bpf_verifier_env*,scalar_t__) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct bpf_verifier_env *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 struct bpf_subprog_info *VAR_16 = VAR_9->subprog_info;
 struct bpf_insn *VAR_17 = VAR_9->prog->insnsi;
 int VAR_18 = VAR_9->prog->len;


 VAR_11 = FUNC_2(VAR_9, 0);
 if (VAR_11 < 0)
  return VAR_11;


 for (VAR_10 = 0; VAR_10 < VAR_18; VAR_10++) {
  if (VAR_17[VAR_10].code != (VAR_3 | VAR_0))
   continue;
  if (VAR_17[VAR_10].src_reg != VAR_6)
   continue;
  if (!VAR_9->allow_ptr_leaks) {
   FUNC_3(VAR_9, "function calls to other bpf functions are allowed for root only\n");
   return -VAR_8;
  }
  VAR_11 = FUNC_2(VAR_9, VAR_10 + VAR_17[VAR_10].imm + 1);
  if (VAR_11 < 0)
   return VAR_11;
 }




 VAR_16[VAR_9->subprog_cnt].start = VAR_18;

 if (VAR_9->log.level & VAR_5)
  for (VAR_10 = 0; VAR_10 < VAR_9->subprog_cnt; VAR_10++)
   FUNC_3(VAR_9, "func#%d @%d\n", VAR_10, VAR_16[VAR_10].start);


 VAR_12 = VAR_16[VAR_15].start;
 VAR_13 = VAR_16[VAR_15 + 1].start;
 for (VAR_10 = 0; VAR_10 < VAR_18; VAR_10++) {
  u8 VAR_19 = VAR_17[VAR_10].code;

  if (FUNC_0(VAR_19) != VAR_3 && FUNC_0(VAR_19) != VAR_4)
   goto next;
  if (FUNC_1(VAR_19) == VAR_1 || FUNC_1(VAR_19) == VAR_0)
   goto next;
  VAR_14 = VAR_10 + VAR_17[VAR_10].off + 1;
  if (VAR_14 < VAR_12 || VAR_14 >= VAR_13) {
   FUNC_3(VAR_9, "jump out of range from insn %d to %d\n", VAR_10, VAR_14);
   return -VAR_7;
  }
next:
  if (VAR_10 == VAR_13 - 1) {




   if (VAR_19 != (VAR_3 | VAR_1) &&
       VAR_19 != (VAR_3 | VAR_2)) {
    FUNC_3(VAR_9, "last insn is not an exit or jmp\n");
    return -VAR_7;
   }
   VAR_12 = VAR_13;
   VAR_15++;
   if (VAR_15 < VAR_9->subprog_cnt)
    VAR_13 = VAR_16[VAR_15 + 1].start;
  }
 }
 return 0;
}
