
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_fmc2_nfc {scalar_t__ dma_ecc_ch; scalar_t__ dma_rx_ch; scalar_t__ dma_tx_ch; } ;
struct TYPE_2__ {scalar_t__ strength; int bytes; int read_page; int correct; int calculate; int options; int hwctl; int read_page_raw; int write_page_raw; int write_page; } ;
struct nand_chip {int options; TYPE_1__ ecc; int controller; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 struct stm32_fmc2_nfc* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_15)
{
 struct stm32_fmc2_nfc *VAR_16 = FUNC_0(VAR_15->controller);





 if (VAR_16->dma_tx_ch && VAR_16->dma_rx_ch && VAR_16->dma_ecc_ch) {

  VAR_15->ecc.correct = VAR_10;
  VAR_15->ecc.write_page = VAR_13;
  VAR_15->ecc.read_page = VAR_11;
  VAR_15->ecc.write_page_raw = VAR_14;
  VAR_15->ecc.read_page_raw = VAR_12;
 } else {

  VAR_15->ecc.hwctl = VAR_8;
  if (VAR_15->ecc.strength == VAR_1) {

   VAR_15->ecc.calculate = VAR_6;
   VAR_15->ecc.correct = VAR_7;
   VAR_15->ecc.options |= VAR_3;
  } else {

   VAR_15->ecc.calculate = VAR_4;
   VAR_15->ecc.correct = VAR_5;
   VAR_15->ecc.read_page = VAR_9;
  }
 }


 if (VAR_15->ecc.strength == VAR_1)
  VAR_15->ecc.bytes = VAR_15->options & VAR_2 ? 4 : 3;
 else if (VAR_15->ecc.strength == VAR_0)
  VAR_15->ecc.bytes = VAR_15->options & VAR_2 ? 14 : 13;
 else
  VAR_15->ecc.bytes = VAR_15->options & VAR_2 ? 8 : 7;
}
