
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int src_reg; } ;
struct nfp_insn_meta {scalar_t__ umin_src; scalar_t__ umax_src; struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,int,scalar_t__) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct nfp_prog*,struct nfp_insn_meta*,int) ;

__attribute__((used)) static int FUNC_9(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4)
{
 const struct bpf_insn *VAR_5 = &VAR_4->insn;
 u64 VAR_6, VAR_7;
 u8 VAR_8, VAR_9;

 VAR_8 = VAR_5->dst_reg * 2;
 VAR_6 = VAR_4->umin_src;
 VAR_7 = VAR_4->umax_src;
 if (VAR_6 == VAR_7)
  return FUNC_0(VAR_3, VAR_4, VAR_8, VAR_6);

 VAR_9 = VAR_5->src_reg * 2;
 FUNC_1(VAR_3, FUNC_7(), FUNC_3(VAR_9), VAR_0, FUNC_6(0));
 FUNC_2(VAR_3, FUNC_5(VAR_8), FUNC_7(), VAR_1,
         FUNC_4(VAR_8), VAR_2);
 FUNC_8(VAR_3, VAR_4, VAR_8);
 return 0;
}
