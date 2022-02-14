
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tn_buf ;
struct bpf_verifier_env {TYPE_2__* prog; } ;
struct TYPE_7__ {scalar_t__ value; } ;
struct bpf_reg_state {TYPE_3__ var_off; } ;
struct TYPE_6__ {TYPE_1__* aux; } ;
struct TYPE_5__ {int max_tp_access; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__) ;
 int FUNC_1 (char*,int,TYPE_3__) ;
 int FUNC_2 (struct bpf_verifier_env*,char*,int,int,...) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_1,
      const struct bpf_reg_state *VAR_2,
      int VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_4 < 0) {
  FUNC_2(VAR_1,
   "R%d invalid tracepoint buffer access: off=%d, size=%d",
   VAR_3, VAR_4, VAR_5);
  return -VAR_0;
 }
 if (!FUNC_0(VAR_2->var_off) || VAR_2->var_off.value) {
  char VAR_6[48];

  FUNC_1(VAR_6, sizeof(VAR_6), VAR_2->var_off);
  FUNC_2(VAR_1,
   "R%d invalid variable buffer offset: off=%d, var_off=%s",
   VAR_3, VAR_4, VAR_6);
  return -VAR_0;
 }
 if (VAR_4 + VAR_5 > VAR_1->prog->aux->max_tp_access)
  VAR_1->prog->aux->max_tp_access = VAR_4 + VAR_5;

 return 0;
}
