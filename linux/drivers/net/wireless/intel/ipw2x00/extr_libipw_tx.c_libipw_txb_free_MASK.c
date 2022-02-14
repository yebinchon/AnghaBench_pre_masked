
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libipw_txb {int nr_frags; scalar_t__* fragments; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct libipw_txb*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct libipw_txb *VAR_0)
{
 int VAR_1;
 if (FUNC_2(!VAR_0))
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_frags; VAR_1++)
  if (VAR_0->fragments[VAR_1])
   FUNC_0(VAR_0->fragments[VAR_1]);
 FUNC_1(VAR_0);
}
