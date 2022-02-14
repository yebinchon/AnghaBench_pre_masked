
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef enum bpf_arg_type { ____Placeholder_bpf_arg_type } bpf_arg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(enum bpf_arg_type VAR_3)
{
 if (VAR_3 == VAR_0)
  return sizeof(u32);
 else if (VAR_3 == VAR_1)
  return sizeof(u64);

 return -VAR_2;
}
