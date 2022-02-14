
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned long long u64 ;
typedef int u32 ;
struct TYPE_4__ {int level; } ;
struct bpf_verifier_env {int allow_ptr_leaks; TYPE_2__ log; TYPE_1__* prog; } ;
struct bpf_insn_cbs {struct bpf_verifier_env* private_data; int (* cb_print ) (struct bpf_verifier_env*,char*,int) ;} ;
struct bpf_insn {scalar_t__ code; unsigned int dst_reg; unsigned int src_reg; int off; } ;
struct TYPE_3__ {struct bpf_insn* insnsi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (struct bpf_insn_cbs const*,struct bpf_insn*,int ) ;
 int FUNC_7 (struct bpf_verifier_env*,char*,int,...) ;

__attribute__((used)) static int FUNC_8(struct bpf_verifier_env *VAR_21, int VAR_22,
     u32 *VAR_23, u64 *VAR_24)
{
 const struct bpf_insn_cbs VAR_25 = {
  .cb_print = FUNC_7,
  .private_data = VAR_21,
 };
 struct bpf_insn *VAR_26 = VAR_21->prog->insnsi + VAR_22;
 u8 VAR_27 = FUNC_0(VAR_26->code);
 u8 VAR_28 = FUNC_2(VAR_26->code);
 u8 VAR_29 = FUNC_1(VAR_26->code);
 u32 VAR_30 = 1u << VAR_26->dst_reg;
 u32 VAR_31 = 1u << VAR_26->src_reg;
 u32 VAR_32;

 if (VAR_26->code == 0)
  return 0;
 if (VAR_21->log.level & VAR_11) {
  FUNC_7(VAR_21, "regs=%x stack=%llx before ", *VAR_23, *VAR_24);
  FUNC_7(VAR_21, "%d: ", VAR_22);
  FUNC_6(&VAR_25, VAR_26, VAR_21->allow_ptr_leaks);
 }

 if (VAR_27 == VAR_1 || VAR_27 == VAR_2) {
  if (!(*VAR_23 & VAR_30))
   return 0;
  if (VAR_28 == VAR_12) {
   if (FUNC_4(VAR_26->code) == VAR_18) {




    *VAR_23 &= ~VAR_30;
    *VAR_23 |= VAR_31;
   } else {






    *VAR_23 &= ~VAR_30;
   }
  } else {
   if (FUNC_4(VAR_26->code) == VAR_18) {




    *VAR_23 |= VAR_31;
   }


  }
 } else if (VAR_27 == VAR_10) {
  if (!(*VAR_23 & VAR_30))
   return 0;
  *VAR_23 &= ~VAR_30;







  if (VAR_26->src_reg != VAR_14)
   return 0;
  if (FUNC_3(VAR_26->code) != VAR_4)
   return 0;





  VAR_32 = (-VAR_26->off - 1) / VAR_15;
  if (VAR_32 >= 64) {
   FUNC_7(VAR_21, "BUG spi %d\n", VAR_32);
   FUNC_5(1, "verifier backtracking bug");
   return -VAR_19;
  }
  *VAR_24 |= 1ull << VAR_32;
 } else if (VAR_27 == VAR_17 || VAR_27 == VAR_16) {
  if (*VAR_23 & VAR_30)




   return -VAR_20;

  if (VAR_26->dst_reg != VAR_14)
   return 0;
  if (FUNC_3(VAR_26->code) != VAR_4)
   return 0;
  VAR_32 = (-VAR_26->off - 1) / VAR_15;
  if (VAR_32 >= 64) {
   FUNC_7(VAR_21, "BUG spi %d\n", VAR_32);
   FUNC_5(1, "verifier backtracking bug");
   return -VAR_19;
  }
  if (!(*VAR_24 & (1ull << VAR_32)))
   return 0;
  *VAR_24 &= ~(1ull << VAR_32);
  if (VAR_27 == VAR_17)
   *VAR_23 |= VAR_31;
 } else if (VAR_27 == VAR_7 || VAR_27 == VAR_8) {
  if (VAR_28 == VAR_3) {
   if (VAR_26->src_reg == VAR_13)
    return -VAR_20;

   *VAR_23 &= ~1;
   if (*VAR_23 & 0x3f) {



    FUNC_7(VAR_21, "BUG regs %x\n", *VAR_23);
    FUNC_5(1, "verifier backtracking bug");
    return -VAR_19;
   }
  } else if (VAR_28 == VAR_5) {
   return -VAR_20;
  }
 } else if (VAR_27 == VAR_9) {
  if (!(*VAR_23 & VAR_30))
   return 0;
  *VAR_23 &= ~VAR_30;




  if (VAR_29 == VAR_6 || VAR_29 == VAR_0)

   return -VAR_20;
 }
 return 0;
}
