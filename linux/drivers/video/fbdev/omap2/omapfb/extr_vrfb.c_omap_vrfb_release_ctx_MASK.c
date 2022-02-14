
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vrfb {int context; scalar_t__* paddr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ) ;

void FUNC_6(struct vrfb *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_3->context;

 if (VAR_5 == 0xff)
  return;

 FUNC_1("release ctx %d\n", VAR_5);

 FUNC_3(&VAR_1);

 FUNC_0(!(VAR_2 & (1 << VAR_5)));

 FUNC_2(VAR_5, &VAR_2);

 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
  if (VAR_3->paddr[VAR_4]) {
   FUNC_5(VAR_3->paddr[VAR_4], VAR_0);
   VAR_3->paddr[VAR_4] = 0;
  }
 }

 VAR_3->context = 0xff;

 FUNC_4(&VAR_1);
}
