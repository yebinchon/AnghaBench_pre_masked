
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpc32xx_nand_host {int io_base; TYPE_1__* ncfg; int clk; } ;
struct TYPE_2__ {int tcea_delay; int busy_delay; int nand_ta; int rd_high; int rd_low; int wr_high; int wr_low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void FUNC_18(struct lpc32xx_nand_host *VAR_7)
{
 uint32_t VAR_8, VAR_9;


 FUNC_16(VAR_1, FUNC_8(VAR_7->io_base));
 FUNC_14(1000);


 VAR_8 = FUNC_13(VAR_7->clk);
 if (VAR_8 == 0)
  VAR_8 = 104000000;



 FUNC_17(VAR_6, FUNC_11(VAR_7->io_base));


 VAR_9 = VAR_2 | VAR_3;
 FUNC_16(VAR_9, FUNC_9(VAR_7->io_base));



 FUNC_17(VAR_6, FUNC_11(VAR_7->io_base));


 VAR_9 = 0;
 VAR_9 |= FUNC_4(VAR_8 / VAR_7->ncfg->tcea_delay + 1);
 VAR_9 |= FUNC_0(VAR_8 / VAR_7->ncfg->busy_delay + 1);
 VAR_9 |= FUNC_1(VAR_8 / VAR_7->ncfg->nand_ta + 1);
 VAR_9 |= FUNC_2(VAR_8 / VAR_7->ncfg->rd_high + 1);
 VAR_9 |= FUNC_3(VAR_8 / VAR_7->ncfg->rd_low);
 VAR_9 |= FUNC_5(VAR_8 / VAR_7->ncfg->wr_high + 1);
 VAR_9 |= FUNC_6(VAR_8 / VAR_7->ncfg->wr_low);
 FUNC_16(VAR_9, FUNC_12(VAR_7->io_base));


 FUNC_15(VAR_4 | VAR_5,
   FUNC_10(VAR_7->io_base));


 FUNC_16(VAR_0, FUNC_7(VAR_7->io_base));
}
