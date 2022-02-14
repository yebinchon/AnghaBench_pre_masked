
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct bpf_prog {size_t len; void* bpf_func; TYPE_1__* aux; } ;
struct bpf_line_info {size_t insn_off; } ;
struct TYPE_2__ {void** jited_linfo; size_t linfo_idx; size_t nr_linfo; struct bpf_line_info* linfo; } ;



void FUNC_0(struct bpf_prog *VAR_0,
          const u32 *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 const struct bpf_line_info *VAR_7;
 void **VAR_8;

 if (!VAR_0->aux->jited_linfo)

  return;

 VAR_2 = VAR_0->aux->linfo_idx;
 VAR_7 = &VAR_0->aux->linfo[VAR_2];
 VAR_3 = VAR_7[0].insn_off;
 VAR_4 = VAR_3 + VAR_0->len;

 VAR_8 = &VAR_0->aux->jited_linfo[VAR_2];
 VAR_8[0] = VAR_0->bpf_func;

 VAR_5 = VAR_0->aux->nr_linfo - VAR_2;

 for (VAR_6 = 1; VAR_6 < VAR_5 && VAR_7[VAR_6].insn_off < VAR_4; VAR_6++)



  VAR_8[VAR_6] = VAR_0->bpf_func +
   VAR_1[VAR_7[VAR_6].insn_off - VAR_3 - 1];
}
