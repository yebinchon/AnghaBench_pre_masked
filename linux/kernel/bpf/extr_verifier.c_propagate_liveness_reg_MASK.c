
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {scalar_t__ live; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bpf_verifier_env*,struct bpf_reg_state*,struct bpf_reg_state*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct bpf_verifier_env *VAR_2,
      struct bpf_reg_state *VAR_3,
      struct bpf_reg_state *VAR_4)
{
 u8 VAR_5 = VAR_4->live & VAR_0;
 u8 VAR_6 = VAR_3->live & VAR_0;
 int VAR_7;





 if (VAR_5 == VAR_1 ||

     !VAR_6 ||

     VAR_5 == VAR_6)
  return 0;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_6;
}
