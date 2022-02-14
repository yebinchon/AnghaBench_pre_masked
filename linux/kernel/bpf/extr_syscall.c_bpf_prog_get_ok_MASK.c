
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int type; int aux; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(struct bpf_prog *VAR_0,
       enum bpf_prog_type *VAR_1, bool VAR_2)
{

 if (!VAR_1)
  return 1;

 if (VAR_0->type != *VAR_1)
  return 0;
 if (FUNC_0(VAR_0->aux) && !VAR_2)
  return 0;

 return 1;
}
