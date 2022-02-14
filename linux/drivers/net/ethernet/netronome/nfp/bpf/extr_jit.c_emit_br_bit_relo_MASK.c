
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int swreg ;
struct nfp_prog {int error; int prog_len; int * prog; } ;
struct nfp_insn_re_regs {int src_lmextn; int breg; int areg; } ;
typedef enum nfp_relo_type { ____Placeholder_nfp_relo_type } nfp_relo_type ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,struct nfp_insn_re_regs*,int) ;

__attribute__((used)) static void
FUNC_5(struct nfp_prog *VAR_1, swreg VAR_2, u8 VAR_3, u16 VAR_4,
   u8 VAR_5, bool VAR_6, enum nfp_relo_type VAR_7)
{
 struct nfp_insn_re_regs VAR_8;
 int VAR_9;





 VAR_3 += 1;

 VAR_9 = FUNC_4(FUNC_3(), VAR_2, FUNC_2(VAR_3), &VAR_8, 0);
 if (VAR_9) {
  VAR_1->error = VAR_9;
  return;
 }

 FUNC_1(VAR_1, VAR_8.areg, VAR_8.breg, VAR_4, VAR_5, VAR_6,
        VAR_8.src_lmextn);

 VAR_1->prog[VAR_1->prog_len - 1] |=
  FUNC_0(VAR_0, VAR_7);
}
