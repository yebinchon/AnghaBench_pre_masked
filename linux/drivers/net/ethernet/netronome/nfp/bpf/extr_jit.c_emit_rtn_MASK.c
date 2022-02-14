
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int error; } ;
struct nfp_insn_ur_regs {int src_lmextn; int dst_lmextn; int breg; int areg; } ;


 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,struct nfp_insn_ur_regs*) ;

__attribute__((used)) static void FUNC_4(struct nfp_prog *VAR_0, swreg VAR_1, u8 VAR_2)
{
 struct nfp_insn_ur_regs VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(FUNC_2(), VAR_1, FUNC_1(0), &VAR_3);
 if (VAR_4) {
  VAR_0->error = VAR_4;
  return;
 }

 FUNC_0(VAR_0, VAR_3.areg, VAR_3.breg, 0, VAR_2, VAR_3.dst_lmextn,
        VAR_3.src_lmextn);
}
