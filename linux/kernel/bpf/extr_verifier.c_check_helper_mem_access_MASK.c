
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int type; int off; } ;
struct bpf_call_arg_meta {int raw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct bpf_verifier_env*,int,int ,int,int) ;
 int FUNC_1 (struct bpf_verifier_env*,int,int ,int,int ) ;
 int FUNC_2 (struct bpf_verifier_env*,int,int ,int,int) ;
 int FUNC_3 (struct bpf_verifier_env*,int,int,int,struct bpf_call_arg_meta*) ;
 struct bpf_reg_state* FUNC_4 (struct bpf_verifier_env*) ;

__attribute__((used)) static int FUNC_5(struct bpf_verifier_env *VAR_3, int VAR_4,
       int VAR_5, bool VAR_6,
       struct bpf_call_arg_meta *VAR_7)
{
 struct bpf_reg_state *VAR_8 = FUNC_4(VAR_3), *VAR_9 = &VAR_8[VAR_4];

 switch (VAR_9->type) {
 case 129:
 case 128:
  return FUNC_2(VAR_3, VAR_4, VAR_9->off, VAR_5,
        VAR_6);
 case 130:
  if (FUNC_1(VAR_3, VAR_4, VAR_9->off, VAR_5,
       VAR_7 && VAR_7->raw_mode ? VAR_1 :
       VAR_0))
   return -VAR_2;
  return FUNC_0(VAR_3, VAR_4, VAR_9->off, VAR_5,
     VAR_6);
 default:
  return FUNC_3(VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7);
 }
}
