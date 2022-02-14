
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bpf_prog_array_item {TYPE_1__* prog; } ;
struct bpf_prog_array {struct bpf_prog_array_item* items; } ;
struct TYPE_4__ {TYPE_2__* aux; } ;
struct TYPE_6__ {TYPE_1__ prog; } ;
struct TYPE_5__ {int id; } ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct bpf_prog_array *VAR_1,
         u32 *VAR_2,
         u32 VAR_3)
{
 struct bpf_prog_array_item *VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_1->items; VAR_4->prog; VAR_4++) {
  if (VAR_4->prog == &VAR_0.prog)
   continue;
  VAR_2[VAR_5] = VAR_4->prog->aux->id;
  if (++VAR_5 == VAR_3) {
   VAR_4++;
   break;
  }
 }

 return !!(VAR_4->prog);
}
