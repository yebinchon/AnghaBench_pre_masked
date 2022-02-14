
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swreg ;
struct nfp_prog {int error; } ;
struct nfp_insn_ur_regs {int src_lmextn; int dst_lmextn; int wr_both; int swap; int breg; int areg; int dst_ab; int dst; } ;
typedef enum alu_op { ____Placeholder_alu_op } alu_op ;


 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,struct nfp_insn_ur_regs*) ;

__attribute__((used)) static void
FUNC_2(struct nfp_prog *VAR_0, swreg VAR_1,
  swreg VAR_2, enum alu_op VAR_3, swreg VAR_4)
{
 struct nfp_insn_ur_regs VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4, &VAR_5);
 if (VAR_6) {
  VAR_0->error = VAR_6;
  return;
 }

 FUNC_0(VAR_0, VAR_5.dst, VAR_5.dst_ab,
     VAR_5.areg, VAR_3, VAR_5.breg, VAR_5.swap, VAR_5.wr_both,
     VAR_5.dst_lmextn, VAR_5.src_lmextn);
}
