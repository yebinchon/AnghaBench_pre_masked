
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {scalar_t__ strict_alignment; } ;
struct bpf_reg_state {int type; } ;
 int FUNC_0 (struct bpf_verifier_env*,struct bpf_reg_state const*,char const*,int,int,int) ;
 int FUNC_1 (struct bpf_verifier_env*,struct bpf_reg_state const*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct bpf_verifier_env *VAR_0,
          const struct bpf_reg_state *VAR_1, int VAR_2,
          int VAR_3, bool VAR_4)
{
 bool VAR_5 = VAR_0->strict_alignment || VAR_4;
 const char *VAR_6 = "";

 switch (VAR_1->type) {
 case 134:
 case 133:



  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
 case 136:
  VAR_6 = "flow keys ";
  break;
 case 135:
  VAR_6 = "value ";
  break;
 case 137:
  VAR_6 = "context ";
  break;
 case 130:
  VAR_6 = "stack ";




  VAR_5 = 1;
  break;
 case 132:
  VAR_6 = "sock ";
  break;
 case 131:
  VAR_6 = "sock_common ";
  break;
 case 129:
  VAR_6 = "tcp_sock ";
  break;
 case 128:
  VAR_6 = "xdp_sock ";
  break;
 default:
  break;
 }
 return FUNC_0(VAR_0, VAR_1, VAR_6, VAR_2, VAR_3,
        VAR_5);
}
