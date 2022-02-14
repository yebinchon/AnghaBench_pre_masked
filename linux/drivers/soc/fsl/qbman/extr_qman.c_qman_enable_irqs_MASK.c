
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(); VAR_3++) {
  if (VAR_2[VAR_3]) {
   FUNC_1(&VAR_2[VAR_3]->p, VAR_1, 0xffffffff);
   FUNC_1(&VAR_2[VAR_3]->p, VAR_0, 0);
  }

 }
}
