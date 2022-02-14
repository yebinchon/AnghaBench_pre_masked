
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int dst_reg; int imm; int code; } ;
typedef int (* bpf_insn_print_t ) (void*,char*,int ,int ,char*,int ,int ) ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(bpf_insn_print_t VAR_1,
          void *VAR_2,
          const struct bpf_insn *VAR_3)
{
 VAR_1(VAR_2, "(%02x) r%d = %s%d r%d\n",
  VAR_3->code, VAR_3->dst_reg,
  FUNC_0(VAR_3->code) == VAR_0 ? "be" : "le",
  VAR_3->imm, VAR_3->dst_reg);
}
