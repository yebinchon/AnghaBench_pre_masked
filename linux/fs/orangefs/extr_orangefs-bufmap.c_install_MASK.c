
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct slot_map {int c; int count; unsigned long* map; TYPE_1__ q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct slot_map *VAR_0, int VAR_1, unsigned long *VAR_2)
{
 FUNC_0(&VAR_0->q.lock);
 VAR_0->c = VAR_0->count = VAR_1;
 VAR_0->map = VAR_2;
 FUNC_2(&VAR_0->q);
 FUNC_1(&VAR_0->q.lock);
}
