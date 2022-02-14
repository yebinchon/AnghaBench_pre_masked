
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
typedef enum bpf_reg_liveness { ____Placeholder_bpf_reg_liveness } bpf_reg_liveness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static void FUNC_1(struct bpf_verifier_env *VAR_3,
      enum bpf_reg_liveness VAR_4)
{
 if (VAR_4 & (VAR_1 | VAR_2 | VAR_0))
     FUNC_0(VAR_3, "_");
 if (VAR_4 & VAR_1)
  FUNC_0(VAR_3, "r");
 if (VAR_4 & VAR_2)
  FUNC_0(VAR_3, "w");
 if (VAR_4 & VAR_0)
  FUNC_0(VAR_3, "D");
}
