
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state {int curframe; int * frame; } ;
struct bpf_verifier_env {struct bpf_verifier_state* cur_state; } ;


 int FUNC_0 (struct bpf_verifier_env*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bpf_verifier_env*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_0,
        int VAR_1)
{
 struct bpf_verifier_state *VAR_2 = VAR_0->cur_state;
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(FUNC_0(VAR_0), VAR_1);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 <= VAR_2->curframe; VAR_4++)
  FUNC_2(VAR_0, VAR_2->frame[VAR_4], VAR_1);

 return 0;
}
