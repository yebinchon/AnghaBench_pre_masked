
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int prog_type; int expected_attach_type; } ;


 int VAR_0 ;


__attribute__((used)) static void FUNC_0(union bpf_attr *VAR_1)
{
 switch (VAR_1->prog_type) {
 case 128:



  if (!VAR_1->expected_attach_type)
   VAR_1->expected_attach_type =
    VAR_0;
  break;
 }
}
