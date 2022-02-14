
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int swreg ;
struct nfp_prog {int error; } ;
struct nfp_insn_ur_regs {int src_lmextn; int dst_lmextn; int wr_both; int swap; int breg; int dst_ab; int areg; int dst; } ;
typedef enum mul_type { ____Placeholder_mul_type } mul_type ;
typedef enum mul_step { ____Placeholder_mul_step } mul_step ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,struct nfp_insn_ur_regs*) ;

__attribute__((used)) static void
FUNC_3(struct nfp_prog *VAR_5, swreg VAR_6, enum mul_type VAR_7,
  enum mul_step VAR_8, swreg VAR_9)
{
 struct nfp_insn_ur_regs VAR_10;
 u16 VAR_11;
 int VAR_12;

 if (VAR_7 == VAR_4 && VAR_8 != VAR_3) {
  VAR_5->error = -VAR_0;
  return;
 }

 if (VAR_8 == VAR_1 || VAR_8 == VAR_2) {



  VAR_12 = FUNC_2(VAR_6, FUNC_1(), VAR_9, &VAR_10);
  VAR_11 = VAR_10.dst;
 } else {
  VAR_12 = FUNC_2(FUNC_1(), VAR_6, VAR_9, &VAR_10);
  VAR_11 = VAR_10.areg;
 }

 if (VAR_12) {
  VAR_5->error = VAR_12;
  return;
 }

 FUNC_0(VAR_5, VAR_10.dst_ab, VAR_11, VAR_7, VAR_8, VAR_10.breg, VAR_10.swap,
     VAR_10.wr_both, VAR_10.dst_lmextn, VAR_10.src_lmextn);
}
