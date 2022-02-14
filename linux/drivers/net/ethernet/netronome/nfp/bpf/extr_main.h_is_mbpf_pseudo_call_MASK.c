
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int code; scalar_t__ src_reg; } ;
struct nfp_insn_meta {struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(const struct nfp_insn_meta *VAR_3)
{
 struct bpf_insn VAR_4 = VAR_3->insn;

 return VAR_4.code == (VAR_1 | VAR_0) &&
  VAR_4.src_reg == VAR_2;
}
