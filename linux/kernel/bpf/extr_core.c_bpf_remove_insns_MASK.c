
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_prog {int insnsi; int len; } ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_prog*,int,int,int,int) ;
 int FUNC_2 (int,int,int) ;

int FUNC_3(struct bpf_prog *VAR_0, u32 VAR_1, u32 VAR_2)
{



 FUNC_2(VAR_0->insnsi + VAR_1, VAR_0->insnsi + VAR_1 + VAR_2,
  sizeof(struct bpf_insn) * (VAR_0->len - VAR_1 - VAR_2));
 VAR_0->len -= VAR_2;

 return FUNC_0(FUNC_1(VAR_0, VAR_1, VAR_1 + VAR_2, VAR_1, 0));
}
