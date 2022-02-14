
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct slot_map {TYPE_1__ q; scalar_t__ count; int c; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct slot_map *VAR_0)
{
 FUNC_0(&VAR_0->q.lock);
 VAR_0->c -= VAR_0->count + 1;
 FUNC_1(&VAR_0->q.lock);
}
