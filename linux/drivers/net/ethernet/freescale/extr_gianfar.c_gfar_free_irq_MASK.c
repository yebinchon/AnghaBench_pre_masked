
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {int device_flags; int num_grps; int * gfargrp; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct gfar_private *VAR_2)
{
 int VAR_3;


 if (VAR_2->device_flags & VAR_0) {
  for (VAR_3 = 0; VAR_3 < VAR_2->num_grps; VAR_3++)
   FUNC_0(&VAR_2->gfargrp[VAR_3]);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_2->num_grps; VAR_3++)
   FUNC_1(FUNC_2(&VAR_2->gfargrp[VAR_3], VAR_1)->irq,
     &VAR_2->gfargrp[VAR_3]);
 }
}
