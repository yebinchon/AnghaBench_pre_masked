
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bpf_prog_array_item {int * prog; } ;
struct bpf_prog_array {struct bpf_prog_array_item* items; } ;
struct TYPE_2__ {int prog; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0(struct bpf_prog_array *VAR_1)
{
 struct bpf_prog_array_item *VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = VAR_1->items; VAR_2->prog; VAR_2++)
  if (VAR_2->prog != &VAR_0.prog)
   VAR_3++;
 return VAR_3;
}
