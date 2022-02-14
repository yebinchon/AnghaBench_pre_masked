
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct bpf_prog {TYPE_1__* aux; } ;
struct bpf_line_info {size_t insn_off; } ;
struct TYPE_2__ {size_t nr_linfo; struct bpf_line_info* linfo; } ;



__attribute__((used)) static void FUNC_0(struct bpf_prog *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct bpf_line_info *VAR_3;
 u32 VAR_4, VAR_5;

 VAR_5 = VAR_0->aux->nr_linfo;
 if (!VAR_5 || !VAR_2)
  return;

 VAR_3 = VAR_0->aux->linfo;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  if (VAR_1 < VAR_3[VAR_4].insn_off)
   break;


 for (; VAR_4 < VAR_5; VAR_4++)
  VAR_3[VAR_4].insn_off += VAR_2;
}
