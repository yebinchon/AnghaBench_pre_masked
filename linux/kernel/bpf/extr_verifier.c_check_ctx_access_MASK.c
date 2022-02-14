
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_4__* prog; TYPE_2__* insn_aux_data; TYPE_1__* ops; } ;
struct bpf_insn_access_aux {int reg_type; int ctx_field_size; } ;
typedef enum bpf_reg_type { ____Placeholder_bpf_reg_type } bpf_reg_type ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;
struct TYPE_8__ {TYPE_3__* aux; } ;
struct TYPE_7__ {int max_ctx_offset; } ;
struct TYPE_6__ {int ctx_field_size; } ;
struct TYPE_5__ {scalar_t__ (* is_valid_access ) (int,int,int,TYPE_4__*,struct bpf_insn_access_aux*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int,TYPE_4__*,struct bpf_insn_access_aux*) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct bpf_verifier_env *VAR_1, int VAR_2, int VAR_3, int VAR_4,
       enum bpf_access_type VAR_5, enum bpf_reg_type *VAR_6)
{
 struct bpf_insn_access_aux VAR_7 = {
  .reg_type = *VAR_6,
 };

 if (VAR_1->ops->is_valid_access &&
     VAR_1->ops->is_valid_access(VAR_3, VAR_4, VAR_5, VAR_1->prog, &VAR_7)) {







  *VAR_6 = VAR_7.reg_type;

  VAR_1->insn_aux_data[VAR_2].ctx_field_size = VAR_7.ctx_field_size;

  if (VAR_1->prog->aux->max_ctx_offset < VAR_3 + VAR_4)
   VAR_1->prog->aux->max_ctx_offset = VAR_3 + VAR_4;
  return 0;
 }

 FUNC_1(VAR_1, "invalid bpf_context access off=%d size=%d\n", VAR_3, VAR_4);
 return -VAR_0;
}
