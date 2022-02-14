
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {int num_grps; int ndev; TYPE_1__* gfargrp; } ;
struct TYPE_2__ {int ** irqinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gfar_private *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_grps; VAR_2++)
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_1(VAR_1->gfargrp[VAR_2].irqinfo[VAR_3]);
   VAR_1->gfargrp[VAR_2].irqinfo[VAR_3] = ((void*)0);
  }

 FUNC_0(VAR_1->ndev);
}
