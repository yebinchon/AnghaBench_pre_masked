
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct arena_info {size_t nfree; TYPE_1__* map_locks; } ;
struct aligned_lock {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct arena_info *VAR_2)
{
 u32 VAR_3;

 VAR_2->map_locks = FUNC_0(VAR_2->nfree, sizeof(struct aligned_lock),
    VAR_1);
 if (!VAR_2->map_locks)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->nfree; VAR_3++)
  FUNC_1(&VAR_2->map_locks[VAR_3].lock);

 return 0;
}
