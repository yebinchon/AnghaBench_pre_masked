
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int src_reg; scalar_t__ imm; } ;
struct nfp_insn_meta {scalar_t__ umax_dst; scalar_t__ umax_src; struct bpf_insn insn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfp_prog*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nfp_prog*,scalar_t__,int ) ;
 int FUNC_5 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_6 (struct nfp_prog*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct nfp_prog *VAR_1, struct nfp_insn_meta *VAR_2,
 bool VAR_3, bool VAR_4)
{
 swreg VAR_5, VAR_6, VAR_7, VAR_8;
 const struct bpf_insn *VAR_9 = &VAR_2->insn;
 u32 VAR_10, VAR_11;
 u8 VAR_12;

 VAR_12 = VAR_9->dst_reg;
 VAR_6 = FUNC_1(VAR_12 * 2);
 VAR_7 = FUNC_3(VAR_12 * 2 + 1);
 VAR_8 = FUNC_3(VAR_12 * 2);
 VAR_10 = VAR_2->umax_dst;
 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_9->src_reg * 2);
  VAR_11 = VAR_2->umax_src;
 } else {
  u32 VAR_13 = VAR_9->imm;

  VAR_5 = FUNC_4(VAR_1, VAR_13, FUNC_0(VAR_1));
  VAR_11 = VAR_13;
 }
 if (VAR_10 > VAR_0 || VAR_11 > VAR_0)
  FUNC_6(VAR_1, VAR_7, VAR_8, VAR_6, VAR_5,
       VAR_3);
 else
  FUNC_5(VAR_1, VAR_7, VAR_8, VAR_6, VAR_5);

 return 0;
}
