
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u64 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {unsigned int imm; int dst_reg; int off; } ;
struct nfp_insn_meta {scalar_t__ jump_neg_op; struct bpf_insn insn; } ;
struct jmp_code_map {int br_mask; int swap; } ;
typedef enum alu_op { ____Placeholder_alu_op } alu_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*) ;
 scalar_t__ FUNC_3 (struct nfp_insn_meta*) ;
 struct jmp_code_map* FUNC_4 (struct nfp_insn_meta*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfp_prog*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(struct nfp_prog *VAR_5, struct nfp_insn_meta *VAR_6)
{
 const struct bpf_insn *VAR_7 = &VAR_6->insn;
 u64 VAR_8 = VAR_7->imm;
 const struct jmp_code_map *VAR_9;
 enum alu_op VAR_10, VAR_11;
 u8 VAR_12 = VAR_7->dst_reg * 2;
 swreg VAR_13;

 VAR_9 = FUNC_4(VAR_6);
 if (!VAR_9)
  return -VAR_4;

 VAR_10 = VAR_6->jump_neg_op ? VAR_0 : VAR_2;
 VAR_11 = VAR_6->jump_neg_op ? VAR_1 : VAR_3;

 VAR_13 = FUNC_7(VAR_5, VAR_8 & ~0U, FUNC_2(VAR_5));
 if (!VAR_9->swap)
  FUNC_0(VAR_5, FUNC_6(), FUNC_5(VAR_12), VAR_10, VAR_13);
 else
  FUNC_0(VAR_5, FUNC_6(), VAR_13, VAR_10, FUNC_5(VAR_12));

 if (FUNC_3(VAR_6)) {
  VAR_13 = FUNC_7(VAR_5, VAR_8 >> 32, FUNC_2(VAR_5));
  if (!VAR_9->swap)
   FUNC_0(VAR_5, FUNC_6(),
     FUNC_5(VAR_12 + 1), VAR_11, VAR_13);
  else
   FUNC_0(VAR_5, FUNC_6(),
     VAR_13, VAR_11, FUNC_5(VAR_12 + 1));
 }

 FUNC_1(VAR_5, VAR_9->br_mask, VAR_7->off, 0);

 return 0;
}
