
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idpair {int dummy; } ;
struct bpf_func_state {int * regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct idpair* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct idpair*) ;
 int FUNC_2 (struct bpf_func_state*,struct bpf_func_state*) ;
 int FUNC_3 (int *,int *,struct idpair*) ;
 int FUNC_4 (struct bpf_func_state*,struct bpf_func_state*,struct idpair*) ;

__attribute__((used)) static bool FUNC_5(struct bpf_func_state *VAR_3,
         struct bpf_func_state *VAR_4)
{
 struct idpair *VAR_5;
 bool VAR_6 = 0;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_1, sizeof(struct idpair), VAR_0);

 if (!VAR_5)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (!FUNC_3(&VAR_3->regs[VAR_7], &VAR_4->regs[VAR_7], VAR_5))
   goto out_free;
 }

 if (!FUNC_4(VAR_3, VAR_4, VAR_5))
  goto out_free;

 if (!FUNC_2(VAR_3, VAR_4))
  goto out_free;
 VAR_6 = 1;
out_free:
 FUNC_1(VAR_5);
 return VAR_6;
}
