
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int error; } ;
struct nfp_insn_re_regs {int src_lmextn; int dst_lmextn; int wr_both; int swap; int i8; int breg; int areg; } ;
typedef enum shf_sc { ____Placeholder_shf_sc } shf_sc ;


 int FUNC_0 (struct nfp_prog*,int,int ,int ,int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,struct nfp_insn_re_regs*,int) ;

__attribute__((used)) static void
FUNC_2(struct nfp_prog *VAR_0, swreg VAR_1, u8 VAR_2, swreg VAR_3,
    enum shf_sc VAR_4, u8 VAR_5, bool VAR_6)
{
 struct nfp_insn_re_regs VAR_7;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_1, VAR_1, VAR_3, &VAR_7, 1);
 if (VAR_8) {
  VAR_0->error = VAR_8;
  return;
 }

 FUNC_0(VAR_0, VAR_4, VAR_7.areg, VAR_2, VAR_7.breg, VAR_5,
   VAR_7.i8, VAR_6, VAR_7.swap, VAR_7.wr_both,
   VAR_7.dst_lmextn, VAR_7.src_lmextn);
}
