
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_func_proto {int arg5_type; int arg4_type; int arg3_type; int arg2_type; int arg1_type; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(const struct bpf_func_proto *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_0->arg1_type))
  VAR_2++;
 if (FUNC_0(VAR_0->arg2_type))
  VAR_2++;
 if (FUNC_0(VAR_0->arg3_type))
  VAR_2++;
 if (FUNC_0(VAR_0->arg4_type))
  VAR_2++;
 if (FUNC_0(VAR_0->arg5_type))
  VAR_2++;




 if (FUNC_1(VAR_1) && VAR_2)
  return 0;




 return VAR_2 <= 1;
}
