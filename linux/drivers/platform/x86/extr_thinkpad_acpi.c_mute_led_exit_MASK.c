
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].state >= 0) {
   FUNC_0(&VAR_2[VAR_3]);
   FUNC_1(VAR_3, 0);
  }
 }
}
