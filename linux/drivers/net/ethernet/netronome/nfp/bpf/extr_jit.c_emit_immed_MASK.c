
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int swreg ;
struct nfp_prog {int error; } ;
struct nfp_insn_ur_regs {int src_lmextn; int dst_lmextn; int wr_both; int breg; int areg; int dst; } ;
typedef enum immed_width { ____Placeholder_immed_width } immed_width ;
typedef enum immed_shift { ____Placeholder_immed_shift } immed_shift ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int,int,int,int,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,struct nfp_insn_ur_regs*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct nfp_prog *VAR_3, swreg VAR_4, u16 VAR_5,
    enum immed_width VAR_6, bool VAR_7, enum immed_shift VAR_8)
{
 struct nfp_insn_ur_regs VAR_9;
 int VAR_10;

 if (FUNC_3(VAR_4) == VAR_1) {
  VAR_3->error = -VAR_0;
  return;
 }

 VAR_10 = FUNC_2(VAR_4, VAR_4, FUNC_1(VAR_5 & 0xff), &VAR_9);
 if (VAR_10) {
  VAR_3->error = VAR_10;
  return;
 }


 FUNC_0(VAR_3,
       FUNC_3(VAR_4) == VAR_2 ? VAR_9.dst : VAR_9.areg,
       VAR_9.breg, VAR_5 >> 8, VAR_6, VAR_7, VAR_8,
       VAR_9.wr_both, VAR_9.dst_lmextn, VAR_9.src_lmextn);
}
