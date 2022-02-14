
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct au1550_spi {TYPE_1__* regs; } ;
struct TYPE_2__ {int psc_spimsk; int psc_spievent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct au1550_spi *VAR_18)
{
 VAR_18->regs->psc_spimsk =
    VAR_10 | VAR_12 | VAR_11
  | VAR_13 | VAR_16 | VAR_15
  | VAR_17 | VAR_14 | VAR_9;
 FUNC_0();

 VAR_18->regs->psc_spievent =
    VAR_1 | VAR_3 | VAR_2
  | VAR_4 | VAR_7 | VAR_6
  | VAR_8 | VAR_5 | VAR_0;
 FUNC_0();
}
