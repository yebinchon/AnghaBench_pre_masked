
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct softing {int spin; int * dpram; TYPE_1__* pdat; } ;
struct TYPE_2__ {int generation; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct softing *VAR_1)
{
 if (VAR_1->pdat->generation >= 2) {
  FUNC_2(&VAR_1->spin);
  FUNC_1(FUNC_0(&VAR_1->dpram[VAR_0]) & ~1,
    &VAR_1->dpram[VAR_0]);
  FUNC_3(&VAR_1->spin);
 }
}
