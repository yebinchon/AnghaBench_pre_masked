
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape390_kekl_pair {TYPE_1__* kekl; } ;
struct tape3592_kekl_pair {int count; int * kekl; } ;
struct TYPE_2__ {void* type_on_tape; void* type; } ;


 int FUNC_0 () ;
 void* VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct tape3592_kekl_pair *VAR_1,
     struct tape390_kekl_pair *VAR_2)
{
 if (VAR_1->count == 0) {
  VAR_2->kekl[0].type = VAR_0;
  VAR_2->kekl[0].type_on_tape = VAR_0;
  VAR_2->kekl[1].type = VAR_0;
  VAR_2->kekl[1].type_on_tape = VAR_0;
 } else if (VAR_1->count == 1) {
  FUNC_1(&VAR_1->kekl[0], &VAR_2->kekl[0]);
  VAR_2->kekl[1].type = VAR_0;
  VAR_2->kekl[1].type_on_tape = VAR_0;
 } else if (VAR_1->count == 2) {
  FUNC_1(&VAR_1->kekl[0], &VAR_2->kekl[0]);
  FUNC_1(&VAR_1->kekl[1], &VAR_2->kekl[1]);
 } else {
  FUNC_2("Invalid KEKL number: %d\n", VAR_1->count);
  FUNC_0();
 }
}
