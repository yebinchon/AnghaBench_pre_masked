
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lock; } ;
struct slot_map {int c; TYPE_2__ q; int * map; } ;
struct TYPE_7__ {int entry; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_10(struct slot_map *VAR_3)
{
 FUNC_0(VAR_2);
 FUNC_8(&VAR_3->q.lock);
 if (VAR_3->c != -1) {
  for (;;) {
   if (FUNC_4(FUNC_5(&VAR_2.entry)))
    FUNC_1(&VAR_3->q, &VAR_2);
   FUNC_7(VAR_1);

   if (VAR_3->c == -1)
    break;

   FUNC_9(&VAR_3->q.lock);
   FUNC_6();
   FUNC_8(&VAR_3->q.lock);
  }
  FUNC_2(&VAR_3->q, &VAR_2);
  FUNC_3(VAR_0);
 }
 VAR_3->map = ((void*)0);
 FUNC_9(&VAR_3->q.lock);
}
