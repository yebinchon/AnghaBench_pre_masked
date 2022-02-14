
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog_array_item {struct bpf_prog* prog; } ;
struct bpf_prog_array {struct bpf_prog_array_item* items; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {int prog; } ;


 int FUNC_0 (struct bpf_prog*,int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(struct bpf_prog_array *VAR_1,
    struct bpf_prog *VAR_2)
{
 struct bpf_prog_array_item *VAR_3;

 for (VAR_3 = VAR_1->items; VAR_3->prog; VAR_3++)
  if (VAR_3->prog == VAR_2) {
   FUNC_0(VAR_3->prog, &VAR_0.prog);
   break;
  }
}
