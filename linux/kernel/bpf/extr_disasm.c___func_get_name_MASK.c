
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn_cbs {char const* (* cb_call ) (int ,struct bpf_insn const*) ;int private_data; } ;
struct bpf_insn {scalar_t__ src_reg; scalar_t__ imm; } ;


 scalar_t__ FUNC_0 (char const**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 char const** VAR_2 ;
 int FUNC_2 (char*,size_t,char*,size_t) ;
 char const* FUNC_3 (int ,struct bpf_insn const*) ;

__attribute__((used)) static const char *FUNC_4(const struct bpf_insn_cbs *VAR_3,
       const struct bpf_insn *VAR_4,
       char *VAR_5, size_t VAR_6)
{
 FUNC_1(FUNC_0(VAR_2) != VAR_1);

 if (VAR_4->src_reg != VAR_0 &&
     VAR_4->imm >= 0 && VAR_4->imm < VAR_1 &&
     VAR_2[VAR_4->imm])
  return VAR_2[VAR_4->imm];

 if (VAR_3 && VAR_3->cb_call)
  return VAR_3->cb_call(VAR_3->private_data, VAR_4);

 if (VAR_4->src_reg == VAR_0)
  FUNC_2(VAR_5, VAR_6, "%+d", VAR_4->imm);

 return VAR_5;
}
