
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state {int curframe; int * frame; } ;
struct bpf_verifier_env {struct bpf_verifier_state* cur_state; } ;


 int FUNC_0 (struct bpf_verifier_env*,int ) ;

__attribute__((used)) static void FUNC_1(struct bpf_verifier_env *VAR_0)
{
 struct bpf_verifier_state *VAR_1 = VAR_0->cur_state;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_1->curframe; VAR_2++)
  FUNC_0(VAR_0, VAR_1->frame[VAR_2]);
}
