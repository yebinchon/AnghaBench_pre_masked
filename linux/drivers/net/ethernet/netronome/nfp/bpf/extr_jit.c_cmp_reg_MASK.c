
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int src_reg; int off; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;
struct jmp_code_map {int br_mask; scalar_t__ swap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct nfp_insn_meta*) ;
 struct jmp_code_map* FUNC_3 (struct nfp_insn_meta*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4)
{
 const struct bpf_insn *VAR_5 = &VAR_4->insn;
 const struct jmp_code_map *VAR_6;
 u8 VAR_7, VAR_8;

 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6)
  return -VAR_2;

 VAR_7 = VAR_5->dst_reg * 2;
 VAR_8 = VAR_5->src_reg * 2;

 if (VAR_6->swap) {
  VAR_7 ^= VAR_8;
  VAR_8 ^= VAR_7;
  VAR_7 ^= VAR_8;
 }

 FUNC_0(VAR_3, FUNC_6(), FUNC_4(VAR_7), VAR_0, FUNC_5(VAR_8));
 if (FUNC_2(VAR_4))
  FUNC_0(VAR_3, FUNC_6(),
    FUNC_4(VAR_7 + 1), VAR_1, FUNC_5(VAR_8 + 1));
 FUNC_1(VAR_3, VAR_6->br_mask, VAR_5->off, 0);

 return 0;
}
