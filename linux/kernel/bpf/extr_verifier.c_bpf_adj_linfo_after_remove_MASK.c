
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct bpf_verifier_env {size_t subprog_cnt; TYPE_2__* subprog_info; struct bpf_prog* prog; } ;
struct bpf_prog {size_t len; TYPE_1__* aux; } ;
struct bpf_line_info {size_t insn_off; } ;
struct TYPE_4__ {size_t linfo_idx; } ;
struct TYPE_3__ {size_t nr_linfo; struct bpf_line_info* linfo; } ;


 int FUNC_0 (struct bpf_line_info*,struct bpf_line_info*,int) ;

__attribute__((used)) static int FUNC_1(struct bpf_verifier_env *VAR_0, u32 VAR_1,
          u32 VAR_2)
{
 struct bpf_prog *VAR_3 = VAR_0->prog;
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 struct bpf_line_info *VAR_8;

 VAR_7 = VAR_3->aux->nr_linfo;
 if (!VAR_7)
  return 0;

 VAR_8 = VAR_3->aux->linfo;


 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
  if (VAR_8[VAR_4].insn_off >= VAR_1)
   break;

 VAR_5 = VAR_4;
 VAR_6 = 0;
 for (; VAR_4 < VAR_7; VAR_4++)
  if (VAR_8[VAR_4].insn_off < VAR_1 + VAR_2)
   VAR_6++;
  else
   break;





 if (VAR_3->len != VAR_1 && VAR_6 &&
     (VAR_4 == VAR_7 || VAR_8[VAR_4].insn_off != VAR_1 + VAR_2)) {
  VAR_6--;
  VAR_8[--VAR_4].insn_off = VAR_1 + VAR_2;
 }


 if (VAR_6) {
  FUNC_0(VAR_8 + VAR_5, VAR_8 + VAR_4,
   sizeof(*VAR_8) * (VAR_7 - VAR_4));

  VAR_3->aux->nr_linfo -= VAR_6;
  VAR_7 = VAR_3->aux->nr_linfo;
 }


 for (VAR_4 = VAR_5; VAR_4 < VAR_7; VAR_4++)
  VAR_8[VAR_4].insn_off -= VAR_2;


 for (VAR_4 = 0; VAR_4 <= VAR_0->subprog_cnt; VAR_4++)
  if (VAR_0->subprog_info[VAR_4].linfo_idx > VAR_5) {



   if (VAR_0->subprog_info[VAR_4].linfo_idx >= VAR_5 + VAR_6)
    VAR_0->subprog_info[VAR_4].linfo_idx -= VAR_6;
   else
    VAR_0->subprog_info[VAR_4].linfo_idx = VAR_5;
  }

 return 0;
}
