
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct slot_map {scalar_t__ c; TYPE_1__ q; int map; int count; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct slot_map*) ;

__attribute__((used)) static int FUNC_7(struct slot_map *VAR_0)
{
 int VAR_1 = 0;
 FUNC_3(&VAR_0->q.lock);
 if (FUNC_5(VAR_0->c <= 0))
  VAR_1 = FUNC_6(VAR_0);
 if (FUNC_2(!VAR_1)) {
  VAR_0->c--;
  VAR_1 = FUNC_1(VAR_0->map, VAR_0->count);
  FUNC_0(VAR_1, VAR_0->map);
 }
 FUNC_4(&VAR_0->q.lock);
 return VAR_1;
}
