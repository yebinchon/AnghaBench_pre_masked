
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct idpair {int dummy; } ;
struct bpf_func_state {int allocated_stack; TYPE_1__* stack; } ;
struct TYPE_5__ {int live; } ;
struct TYPE_4__ {scalar_t__* slot_type; TYPE_2__ spilled_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,struct idpair*) ;

__attribute__((used)) static bool FUNC_1(struct bpf_func_state *VAR_6,
        struct bpf_func_state *VAR_7,
        struct idpair *VAR_8)
{
 int VAR_9, VAR_10;





 for (VAR_9 = 0; VAR_9 < VAR_6->allocated_stack; VAR_9++) {
  VAR_10 = VAR_9 / VAR_0;

  if (!(VAR_6->stack[VAR_10].spilled_ptr.live & VAR_1)) {
   VAR_9 += VAR_0 - 1;

   continue;
  }

  if (VAR_6->stack[VAR_10].slot_type[VAR_9 % VAR_0] == VAR_2)
   continue;




  if (VAR_9 >= VAR_7->allocated_stack)
   return 0;





  if (VAR_6->stack[VAR_10].slot_type[VAR_9 % VAR_0] == VAR_3 &&
      VAR_7->stack[VAR_10].slot_type[VAR_9 % VAR_0] == VAR_5)
   continue;
  if (VAR_6->stack[VAR_10].slot_type[VAR_9 % VAR_0] !=
      VAR_7->stack[VAR_10].slot_type[VAR_9 % VAR_0])





   return 0;
  if (VAR_9 % VAR_0)
   continue;
  if (VAR_6->stack[VAR_10].slot_type[0] != VAR_4)
   continue;
  if (!FUNC_0(&VAR_6->stack[VAR_10].spilled_ptr,
        &VAR_7->stack[VAR_10].spilled_ptr,
        VAR_8))
   return 0;
 }
 return 1;
}
