
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int stack_frame_depth; } ;
struct bpf_insn {int dst_reg; int src_reg; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfp_prog*) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (struct nfp_prog*,int ,int ) ;
 int FUNC_5 (struct nfp_prog*,int ,int ) ;
 int FUNC_6 (struct nfp_prog*,int,int) ;

__attribute__((used)) static int FUNC_7(struct nfp_prog *VAR_2, struct nfp_insn_meta *VAR_3)
{
 const struct bpf_insn *VAR_4 = &VAR_3->insn;
 u8 VAR_5 = VAR_4->dst_reg * 2;
 u8 VAR_6 = VAR_4->src_reg * 2;

 if (VAR_4->src_reg == VAR_1) {
  swreg VAR_7;

  VAR_7 = FUNC_4(VAR_2,
        VAR_2->stack_frame_depth,
        FUNC_2(VAR_2));
  FUNC_0(VAR_2, FUNC_1(VAR_5), FUNC_3(VAR_2),
    VAR_0, VAR_7);
  FUNC_5(VAR_2, FUNC_1(VAR_5 + 1), 0);
 } else {
  FUNC_6(VAR_2, VAR_5, VAR_6);
  FUNC_6(VAR_2, VAR_5 + 1, VAR_6 + 1);
 }

 return 0;
}
