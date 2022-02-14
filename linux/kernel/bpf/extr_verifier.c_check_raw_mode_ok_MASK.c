
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_func_proto {scalar_t__ arg1_type; scalar_t__ arg2_type; scalar_t__ arg3_type; scalar_t__ arg4_type; scalar_t__ arg5_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct bpf_func_proto *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->arg1_type == VAR_0)
  VAR_2++;
 if (VAR_1->arg2_type == VAR_0)
  VAR_2++;
 if (VAR_1->arg3_type == VAR_0)
  VAR_2++;
 if (VAR_1->arg4_type == VAR_0)
  VAR_2++;
 if (VAR_1->arg5_type == VAR_0)
  VAR_2++;





 return VAR_2 <= 1;
}
