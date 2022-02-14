
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct slot_map {int c; TYPE_1__ q; int map; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct slot_map *VAR_0, int VAR_1)
{
 int VAR_2;
 FUNC_1(&VAR_0->q.lock);
 FUNC_0(VAR_1, VAR_0->map);
 VAR_2 = ++VAR_0->c;
 if (VAR_2 > 0)
  FUNC_5(&VAR_0->q);
 if (FUNC_3(VAR_2 == -1))
  FUNC_4(&VAR_0->q);
 FUNC_2(&VAR_0->q.lock);
}
