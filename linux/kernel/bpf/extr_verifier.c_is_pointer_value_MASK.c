
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int allow_ptr_leaks; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bpf_verifier_env*,int) ;

__attribute__((used)) static bool FUNC_2(struct bpf_verifier_env *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->allow_ptr_leaks, FUNC_1(VAR_0, VAR_1));
}
