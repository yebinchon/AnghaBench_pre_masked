
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int value_size; } ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*) ;

__attribute__((used)) static int FUNC_1(union bpf_attr *VAR_1)
{
 if (VAR_1->value_size != sizeof(u32))
  return -VAR_0;
 return FUNC_0(VAR_1);
}
