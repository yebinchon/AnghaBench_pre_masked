
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct riva_par {TYPE_1__* chan; } ;
struct TYPE_2__ {int adapter; scalar_t__ par; } ;


 int * FUNC_0 (int *) ;

int FUNC_1(struct riva_par *VAR_0, int VAR_1, u8 **VAR_2)
{
 u8 *VAR_3 = ((void*)0);

 if (VAR_0->chan[VAR_1].par)
  VAR_3 = FUNC_0(&VAR_0->chan[VAR_1].adapter);

 if (VAR_2)
  *VAR_2 = VAR_3;
 if (!VAR_3)
  return 1;

 return 0;
}
