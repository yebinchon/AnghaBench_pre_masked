
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bpf_insn {scalar_t__ src_reg; scalar_t__ dst_reg; scalar_t__ off; } ;
struct nfp_insn_meta {int flags; struct bpf_insn insn; } ;
typedef scalar_t__ s16 ;


 scalar_t__ FUNC_0 (struct bpf_insn*) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(struct nfp_insn_meta *VAR_1,
         struct nfp_insn_meta *VAR_2,
         struct bpf_insn *VAR_3,
         struct bpf_insn *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct bpf_insn *VAR_10 = &VAR_1->insn;
 struct bpf_insn *VAR_11 = &VAR_2->insn;
 s16 VAR_12, VAR_13;


 if (!VAR_3)
  return 1;

 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = FUNC_0(VAR_10);
 VAR_7 = VAR_3->src_reg;
 VAR_8 = VAR_4->dst_reg;
 VAR_9 = VAR_3->dst_reg;
 VAR_12 = VAR_3->off;
 VAR_13 = VAR_4->off;

 if (VAR_10->dst_reg != VAR_9)
  return 0;

 if (VAR_10->src_reg != VAR_7 || VAR_11->dst_reg != VAR_8)
  return 0;

 if (VAR_6 != VAR_5)
  return 0;


 if (VAR_1->flags & VAR_0)
  return 0;


 if (VAR_12 + VAR_5 == VAR_10->off &&
     VAR_13 + VAR_5 == VAR_11->off)
  return 1;


 if (VAR_10->off + VAR_6 == VAR_12 &&
     VAR_11->off + VAR_6 == VAR_13)
  return 1;

 return 0;
}
