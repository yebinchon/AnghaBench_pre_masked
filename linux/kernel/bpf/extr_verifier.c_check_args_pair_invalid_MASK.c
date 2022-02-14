
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_arg_type { ____Placeholder_bpf_arg_type } bpf_arg_type ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(enum bpf_arg_type VAR_0,
        enum bpf_arg_type VAR_1)
{
 return (FUNC_0(VAR_0) &&
         !FUNC_1(VAR_1)) ||
        (!FUNC_0(VAR_0) &&
  FUNC_1(VAR_1));
}
