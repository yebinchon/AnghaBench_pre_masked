
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state {int curframe; int ** frame; } ;


 int FUNC_0 (struct bpf_verifier_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bpf_verifier_state*) ;

__attribute__((used)) static void FUNC_3(struct bpf_verifier_state *VAR_0,
    bool VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_0->curframe; VAR_2++) {
  FUNC_1(VAR_0->frame[VAR_2]);
  VAR_0->frame[VAR_2] = ((void*)0);
 }
 FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_2(VAR_0);
}
