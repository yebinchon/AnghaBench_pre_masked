
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct media_graph {int top; TYPE_2__* stack; } ;
struct TYPE_3__ {int next; } ;
struct media_entity {TYPE_1__ links; } ;
struct TYPE_4__ {struct media_entity* entity; int link; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct media_graph *VAR_1,
         struct media_entity *VAR_2)
{
 if (VAR_1->top == VAR_0 - 1) {
  FUNC_0(1);
  return;
 }
 VAR_1->top++;
 VAR_1->stack[VAR_1->top].link = VAR_2->links.next;
 VAR_1->stack[VAR_1->top].entity = VAR_2;
}
