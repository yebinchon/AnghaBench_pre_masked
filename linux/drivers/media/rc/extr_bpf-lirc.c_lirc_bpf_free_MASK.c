
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct bpf_prog_array_item {scalar_t__ prog; } ;
struct bpf_prog_array {struct bpf_prog_array_item* items; } ;
struct TYPE_2__ {int progs; } ;


 int FUNC_0 (struct bpf_prog_array*) ;
 int FUNC_1 (scalar_t__) ;
 struct bpf_prog_array* FUNC_2 (int ) ;

void FUNC_3(struct rc_dev *VAR_0)
{
 struct bpf_prog_array_item *VAR_1;
 struct bpf_prog_array *VAR_2;

 VAR_2 = FUNC_2(VAR_0->raw->progs);
 if (!VAR_2)
  return;

 for (VAR_1 = VAR_2->items; VAR_1->prog; VAR_1++)
  FUNC_1(VAR_1->prog);

 FUNC_0(VAR_2);
}
