
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfp_prog {int adjust_head_location; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_8__ {TYPE_2__ var_off; } ;
struct TYPE_9__ {TYPE_3__ reg; } ;
struct nfp_insn_meta {unsigned int n; TYPE_4__ arg2; } ;
struct TYPE_6__ {int guaranteed_sub; scalar_t__ guaranteed_add; } ;
struct nfp_app_bpf {TYPE_1__ adjust_head; } ;
struct TYPE_10__ {int value; } ;
struct bpf_reg_state {scalar_t__ type; TYPE_5__ var_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (TYPE_5__) ;

__attribute__((used)) static void
FUNC_1(struct nfp_app_bpf *VAR_4, struct nfp_prog *VAR_5,
         struct nfp_insn_meta *VAR_6,
         const struct bpf_reg_state *VAR_7)
{
 unsigned int VAR_8 = VAR_3;
 int VAR_9;





 if (VAR_7->type != VAR_2 || !FUNC_0(VAR_7->var_off))
  goto exit_set_location;
 VAR_9 = VAR_7->var_off.value;

 if (VAR_9 > VAR_1 - VAR_0)
  goto exit_set_location;
 if (VAR_9 > (int)VAR_4->adjust_head.guaranteed_add ||
     VAR_9 < -VAR_4->adjust_head.guaranteed_sub)
  goto exit_set_location;

 if (VAR_5->adjust_head_location) {

  if (VAR_5->adjust_head_location != VAR_6->n)
   goto exit_set_location;

  if (VAR_6->arg2.reg.var_off.value != VAR_9)
   goto exit_set_location;
 }

 VAR_8 = VAR_6->n;
exit_set_location:
 VAR_5->adjust_head_location = VAR_8;
}
