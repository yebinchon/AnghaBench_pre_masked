
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {TYPE_1__* gfargrp; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gfar_private *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->gfargrp[VAR_2].regs)
   FUNC_0(VAR_1->gfargrp[VAR_2].regs);
}
