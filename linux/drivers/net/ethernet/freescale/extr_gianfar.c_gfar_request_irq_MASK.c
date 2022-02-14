
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfar_private {int num_grps; int * gfargrp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct gfar_private *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_grps; VAR_2++) {
  VAR_1 = FUNC_1(&VAR_0->gfargrp[VAR_2]);
  if (VAR_1) {
   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    FUNC_0(&VAR_0->gfargrp[VAR_3]);
   return VAR_1;
  }
 }

 return 0;
}
