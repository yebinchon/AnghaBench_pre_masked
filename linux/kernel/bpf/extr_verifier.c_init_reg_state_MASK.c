
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int type; int frameno; int subreg_def; int * parent; int live; } ;
struct bpf_func_state {int frameno; struct bpf_reg_state* regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bpf_verifier_env*,struct bpf_reg_state*,size_t) ;
 int FUNC_1 (struct bpf_verifier_env*,struct bpf_reg_state*,int) ;

__attribute__((used)) static void FUNC_2(struct bpf_verifier_env *VAR_7,
      struct bpf_func_state *VAR_8)
{
 struct bpf_reg_state *VAR_9 = VAR_8->regs;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  FUNC_1(VAR_7, VAR_9, VAR_10);
  VAR_9[VAR_10].live = VAR_6;
  VAR_9[VAR_10].parent = ((void*)0);
  VAR_9[VAR_10].subreg_def = VAR_2;
 }


 VAR_9[VAR_1].type = VAR_5;
 FUNC_0(VAR_7, VAR_9, VAR_1);
 VAR_9[VAR_1].frameno = VAR_8->frameno;


 VAR_9[VAR_0].type = VAR_4;
 FUNC_0(VAR_7, VAR_9, VAR_0);
}
