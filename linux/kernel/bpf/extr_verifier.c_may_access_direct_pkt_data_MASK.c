
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {int seen_direct_write; TYPE_1__* prog; } ;
struct bpf_call_arg_meta {int pkt_access; } ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;
struct TYPE_2__ {int type; } ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct bpf_verifier_env *VAR_1,
           const struct bpf_call_arg_meta *VAR_2,
           enum bpf_access_type VAR_3)
{
 switch (VAR_1->prog->type) {

 case 137:
 case 136:
 case 135:
 case 130:
 case 138:
 case 140:
  if (VAR_3 == VAR_0)
   return 0;



 case 132:
 case 133:
 case 128:
 case 134:
 case 129:
 case 131:
  if (VAR_2)
   return VAR_2->pkt_access;

  VAR_1->seen_direct_write = 1;
  return 1;

 case 139:
  if (VAR_3 == VAR_0)
   VAR_1->seen_direct_write = 1;

  return 1;

 default:
  return 0;
 }
}
