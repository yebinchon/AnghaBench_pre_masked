
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct au1550_spi {TYPE_1__* regs; scalar_t__ usedma; } ;
struct TYPE_2__ {int psc_spicfg; int psc_spistat; int psc_ctrl; int psc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct au1550_spi*) ;
 int FUNC_4 (struct au1550_spi*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct au1550_spi *VAR_10)
{
 u32 VAR_11, VAR_12;


 VAR_10->regs->psc_ctrl = VAR_0;
 FUNC_5();
 VAR_10->regs->psc_sel = VAR_2;
 FUNC_5();

 VAR_10->regs->psc_spicfg = 0;
 FUNC_5();

 VAR_10->regs->psc_ctrl = VAR_1;
 FUNC_5();

 do {
  VAR_11 = VAR_10->regs->psc_spistat;
  FUNC_5();
 } while ((VAR_11 & VAR_9) == 0);


 VAR_12 = VAR_10->usedma ? 0 : VAR_3;
 VAR_12 |= FUNC_2(8);
 VAR_12 |= VAR_6 | VAR_7;

 VAR_12 |= FUNC_0(4) | FUNC_1(0);





 VAR_10->regs->psc_spicfg = VAR_12;
 FUNC_5();

 FUNC_3(VAR_10);

 VAR_10->regs->psc_spicfg |= VAR_4;
 FUNC_5();

 do {
  VAR_11 = VAR_10->regs->psc_spistat;
  FUNC_5();
 } while ((VAR_11 & VAR_8) == 0);

 FUNC_4(VAR_10);
}
