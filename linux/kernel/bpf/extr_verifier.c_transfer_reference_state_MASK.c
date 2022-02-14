
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_func_state {int acquired_refs; } ;


 int FUNC_0 (struct bpf_func_state*,struct bpf_func_state*) ;
 int FUNC_1 (struct bpf_func_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bpf_func_state *VAR_0,
        struct bpf_func_state *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1->acquired_refs, 0);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 return 0;
}
