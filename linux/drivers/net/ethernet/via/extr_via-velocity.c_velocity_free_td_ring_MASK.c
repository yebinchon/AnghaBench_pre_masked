
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numq; int ** infos; } ;
struct TYPE_3__ {int numtx; } ;
struct velocity_info {TYPE_2__ tx; TYPE_1__ options; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct velocity_info*,int,int) ;

__attribute__((used)) static void FUNC_2(struct velocity_info *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->tx.numq; VAR_2++) {
  if (VAR_0->tx.infos[VAR_2] == ((void*)0))
   continue;
  for (VAR_1 = 0; VAR_1 < VAR_0->options.numtx; VAR_1++)
   FUNC_1(VAR_0, VAR_2, VAR_1);

  FUNC_0(VAR_0->tx.infos[VAR_2]);
  VAR_0->tx.infos[VAR_2] = ((void*)0);
 }
}
