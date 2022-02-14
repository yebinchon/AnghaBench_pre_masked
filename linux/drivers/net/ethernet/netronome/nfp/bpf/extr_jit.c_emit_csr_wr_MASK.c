
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int swreg ;
struct nfp_prog {int error; } ;
struct nfp_insn_ur_regs {int src_lmextn; int breg; int areg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,struct nfp_insn_ur_regs*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct nfp_prog *VAR_1, swreg VAR_2, u16 VAR_3)
{
 struct nfp_insn_ur_regs VAR_4;
 int VAR_5;






 if (FUNC_4(VAR_2) == VAR_0) {
  VAR_5 = FUNC_3(FUNC_2(), VAR_2, FUNC_2(), &VAR_4);
  VAR_4.breg = VAR_4.areg;
 } else {
  VAR_5 = FUNC_3(FUNC_2(), VAR_2, FUNC_1(0), &VAR_4);
 }
 if (VAR_5) {
  VAR_1->error = VAR_5;
  return;
 }

 FUNC_0(VAR_1, VAR_4.areg, VAR_4.breg, 1, VAR_3,
      0, VAR_4.src_lmextn);
}
