
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpc32xx_nand_host {int io_base; TYPE_1__* ncfg; int clk; } ;
struct TYPE_2__ {int rsetup; int rhold; int rwidth; int rdr_clks; int wsetup; int whold; int wwidth; int wdr_clks; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_16(struct lpc32xx_nand_host *VAR_4)
{
 uint32_t VAR_5, VAR_6;


 FUNC_15(VAR_1, FUNC_9(VAR_4->io_base));
 FUNC_14(1000);


 FUNC_15(0, FUNC_8(VAR_4->io_base));
 FUNC_15(0, FUNC_11(VAR_4->io_base));
 FUNC_15((VAR_3 | VAR_2),
  FUNC_10(VAR_4->io_base));


 VAR_5 = FUNC_13(VAR_4->clk);
 if (VAR_5 == 0)
  VAR_5 = VAR_0;


 VAR_6 = FUNC_4(VAR_4->ncfg->wdr_clks) |
  FUNC_7(VAR_5, VAR_4->ncfg->wwidth) |
  FUNC_5(VAR_5, VAR_4->ncfg->whold) |
  FUNC_6(VAR_5, VAR_4->ncfg->wsetup) |
  FUNC_0(VAR_4->ncfg->rdr_clks) |
  FUNC_3(VAR_5, VAR_4->ncfg->rwidth) |
  FUNC_1(VAR_5, VAR_4->ncfg->rhold) |
  FUNC_2(VAR_5, VAR_4->ncfg->rsetup);
 FUNC_15(VAR_6, FUNC_12(VAR_4->io_base));
}
