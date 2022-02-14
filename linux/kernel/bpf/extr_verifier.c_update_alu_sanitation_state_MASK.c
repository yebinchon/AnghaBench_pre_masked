
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bpf_insn_aux_data {scalar_t__ alu_state; scalar_t__ alu_limit; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct bpf_insn_aux_data *VAR_1,
           u32 VAR_2, u32 VAR_3)
{



 if (VAR_1->alu_state &&
     (VAR_1->alu_state != VAR_2 ||
      VAR_1->alu_limit != VAR_3))
  return -VAR_0;


 VAR_1->alu_state = VAR_2;
 VAR_1->alu_limit = VAR_3;
 return 0;
}
