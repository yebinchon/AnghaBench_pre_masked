
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_hardware {int clk; TYPE_1__* band; int d11core; scalar_t__ noreset; int wlc; int unit; } ;
struct TYPE_2__ {int pi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct brcms_hardware*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct brcms_hardware *VAR_1)
{
 bool VAR_2;

 FUNC_2(VAR_1->d11core, "wl%d: disable core\n", VAR_1->unit);

 VAR_2 = FUNC_3(VAR_1->wlc);

 if (VAR_2)
  return;

 if (VAR_1->noreset)
  return;


 FUNC_6(VAR_1->band->pi, VAR_0);


 FUNC_4(VAR_1->band->pi, VAR_0);


 FUNC_1(VAR_1, 0);

 VAR_1->clk = 0;
 FUNC_0(VAR_1->d11core, 0);
 FUNC_5(VAR_1->band->pi, 0);
}
