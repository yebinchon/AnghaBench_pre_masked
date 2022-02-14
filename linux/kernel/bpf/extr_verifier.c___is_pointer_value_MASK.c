
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(bool VAR_1,
          const struct bpf_reg_state *VAR_2)
{
 if (VAR_1)
  return 0;

 return VAR_2->type != VAR_0;
}
