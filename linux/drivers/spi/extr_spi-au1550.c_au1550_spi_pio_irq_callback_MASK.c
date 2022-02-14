
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct au1550_spi {scalar_t__ rx_count; scalar_t__ len; scalar_t__ tx_count; int master_done; TYPE_1__* regs; int (* tx_word ) (struct au1550_spi*) ;int (* rx_word ) (struct au1550_spi*) ;int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int psc_spistat; int psc_spievent; int psc_spipcr; } ;


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
 int FUNC_0 (struct au1550_spi*) ;
 int FUNC_1 (struct au1550_spi*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct au1550_spi*) ;
 int FUNC_5 (struct au1550_spi*) ;
 int FUNC_6 () ;

__attribute__((used)) static irqreturn_t FUNC_7(struct au1550_spi *VAR_15)
{
 int VAR_16;
 u32 VAR_17, VAR_18;

 VAR_17 = VAR_15->regs->psc_spistat;
 VAR_18 = VAR_15->regs->psc_spievent;
 FUNC_6();
 if ((VAR_17 & VAR_12) == 0) {
  FUNC_3(VAR_15->dev, "Unexpected IRQ!\n");
  return VAR_1;
 }

 if ((VAR_18 & (VAR_3 | VAR_4
    | VAR_6 | VAR_8
    | VAR_7))
   != 0) {




  FUNC_0(VAR_15);
  FUNC_1(VAR_15);
  FUNC_3(VAR_15->dev,
   "pio transfer: unexpected SPI error "
   "(event=0x%x stat=0x%x)!\n", VAR_18, VAR_17);
  FUNC_2(&VAR_15->master_done);
  return VAR_0;
 }





 do {
  VAR_16 = 0;
  VAR_17 = VAR_15->regs->psc_spistat;
  FUNC_6();
  if (!(VAR_17 & VAR_13) && VAR_15->rx_count < VAR_15->len) {
   VAR_15->rx_word(VAR_15);
   VAR_16 = 1;

   if (!(VAR_17 & VAR_14) && VAR_15->tx_count < VAR_15->len)
    VAR_15->tx_word(VAR_15);
  }
 } while (VAR_16);

 VAR_15->regs->psc_spievent = VAR_5 | VAR_9;
 FUNC_6();
 if (VAR_18 & VAR_10) {
  VAR_15->regs->psc_spievent = VAR_10 | VAR_2;
  FUNC_6();
  VAR_15->regs->psc_spipcr = VAR_11;
  FUNC_6();
 }

 if (VAR_15->rx_count >= VAR_15->len) {

  FUNC_0(VAR_15);
  FUNC_2(&VAR_15->master_done);
 }
 return VAR_0;
}
