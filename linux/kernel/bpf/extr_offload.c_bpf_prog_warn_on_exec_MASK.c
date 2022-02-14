
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int dummy; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static unsigned int FUNC_1(const void *VAR_0,
       const struct bpf_insn *VAR_1)
{
 FUNC_0(1, "attempt to execute device eBPF program on the host!");
 return 0;
}
