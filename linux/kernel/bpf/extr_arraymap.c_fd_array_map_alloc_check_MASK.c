
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int value_size; int map_flags; } ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union bpf_attr*) ;

__attribute__((used)) static int FUNC_1(union bpf_attr *VAR_3)
{

 if (VAR_3->value_size != sizeof(u32))
  return -VAR_2;

 if (VAR_3->map_flags & (VAR_0 | VAR_1))
  return -VAR_2;
 return FUNC_0(VAR_3);
}
