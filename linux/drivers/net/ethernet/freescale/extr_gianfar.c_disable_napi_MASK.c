
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {int num_grps; TYPE_1__* gfargrp; } ;
struct TYPE_2__ {int napi_tx; int napi_rx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct gfar_private *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_grps; VAR_1++) {
  FUNC_0(&VAR_0->gfargrp[VAR_1].napi_rx);
  FUNC_0(&VAR_0->gfargrp[VAR_1].napi_tx);
 }
}
