
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ done; scalar_t__ dc_clk; scalar_t__ hhc_clk; scalar_t__ clk_requested; int * transceiver; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_2)
{
 FUNC_6(VAR_1);
 if (!FUNC_0(VAR_1->transceiver)) {
  FUNC_8(VAR_1->transceiver);
  VAR_1->transceiver = ((void*)0);
 }
 FUNC_5(0, VAR_0);
 FUNC_7();
 if (VAR_1->dc_clk) {
  if (VAR_1->clk_requested)
   FUNC_4(0);
  FUNC_1(VAR_1->hhc_clk);
  FUNC_1(VAR_1->dc_clk);
 }
 if (VAR_1->done)
  FUNC_2(VAR_1->done);
 FUNC_3(VAR_1);
}
