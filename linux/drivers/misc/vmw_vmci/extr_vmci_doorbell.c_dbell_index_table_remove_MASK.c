
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dbell_entry {int idx; int resource; int node; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dbell_entry *VAR_4)
{
 FUNC_2(&VAR_3.lock);

 FUNC_1(&VAR_4->node);

 VAR_2--;
 if (VAR_4->idx == VAR_1 - 1) {







  while (VAR_1 > 0 &&
         !FUNC_0(VAR_1 - 1))
   VAR_1--;
 }

 VAR_0 = VAR_4->idx;

 FUNC_3(&VAR_3.lock);

 FUNC_4(&VAR_4->resource);
}
