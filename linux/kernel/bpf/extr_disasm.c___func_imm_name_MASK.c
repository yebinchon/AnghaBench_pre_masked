
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct bpf_insn_cbs {char const* (* cb_imm ) (int ,struct bpf_insn const*,scalar_t__) ;int private_data; } ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (char*,size_t,char*,unsigned long long) ;
 char const* FUNC_1 (int ,struct bpf_insn const*,scalar_t__) ;

__attribute__((used)) static const char *FUNC_2(const struct bpf_insn_cbs *VAR_0,
       const struct bpf_insn *VAR_1,
       u64 VAR_2, char *VAR_3, size_t VAR_4)
{
 if (VAR_0 && VAR_0->cb_imm)
  return VAR_0->cb_imm(VAR_0->private_data, VAR_1, VAR_2);

 FUNC_0(VAR_3, VAR_4, "0x%llx", (unsigned long long)VAR_2);
 return VAR_3;
}
