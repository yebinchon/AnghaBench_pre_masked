
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {TYPE_1__* uld; } ;
struct TYPE_2__ {int handle; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct adapter*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(struct adapter *VAR_2)
{
 unsigned int VAR_3;

 FUNC_1(&VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_2->uld[VAR_3].handle)
   continue;

  FUNC_0(VAR_2, VAR_3);
 }
 FUNC_2(&VAR_1);
}
