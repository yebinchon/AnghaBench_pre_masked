
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bpf_attr {int dummy; } bpf_attr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (union bpf_attr const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const union bpf_attr *VAR_4)
{
 if (FUNC_0(VAR_0))
  return -VAR_2;

 if (!FUNC_2(VAR_1))
  return -VAR_3;

 return FUNC_1(VAR_4);
}
