
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct riva_par {TYPE_1__* chan; } ;
struct TYPE_2__ {int * par; int adapter; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct riva_par *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
  if (!VAR_0->chan[VAR_1].par)
   continue;
  FUNC_0(&VAR_0->chan[VAR_1].adapter);
  VAR_0->chan[VAR_1].par = ((void*)0);
 }
}
