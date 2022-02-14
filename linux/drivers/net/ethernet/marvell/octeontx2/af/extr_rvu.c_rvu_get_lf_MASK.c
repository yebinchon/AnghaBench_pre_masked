
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int max; } ;
struct rvu_block {scalar_t__* fn_map; TYPE_1__ lf; } ;
struct rvu {int rsrc_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct rvu *VAR_1, struct rvu_block *VAR_2, u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5 = 0;
 int VAR_6;

 FUNC_0(&VAR_1->rsrc_lock);
 for (VAR_6 = 0; VAR_6 < VAR_2->lf.max; VAR_6++) {
  if (VAR_2->fn_map[VAR_6] == VAR_3) {
   if (VAR_4 == VAR_5) {
    FUNC_1(&VAR_1->rsrc_lock);
    return VAR_6;
   }
   VAR_5++;
  }
 }
 FUNC_1(&VAR_1->rsrc_lock);
 return -VAR_0;
}
