
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_hardware {int sbclk; int clk; TYPE_1__* band; scalar_t__ pllreq; int unit; int d11core; } ;
struct TYPE_2__ {scalar_t__ pi; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_hardware *VAR_0, bool VAR_1)
{
 FUNC_0(VAR_0->d11core, "wl%d: want %d\n", VAR_0->unit, VAR_1);





 if (!VAR_1 && VAR_0->pllreq)
  return;

 VAR_0->sbclk = VAR_1;
 if (!VAR_0->sbclk) {
  VAR_0->clk = 0;
  if (VAR_0->band && VAR_0->band->pi)
   FUNC_1(VAR_0->band->pi, 0);
 }
}
