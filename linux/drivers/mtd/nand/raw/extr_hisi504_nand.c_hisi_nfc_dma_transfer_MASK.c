
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {unsigned long oobsize; } ;
struct hinfc_host {unsigned long dma_buffer; unsigned long dma_oob; scalar_t__ command; int addr_cycle; int chipselect; int dev; int cmd_complete; struct nand_chip chip; } ;


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
 unsigned long VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (struct hinfc_host*,int ) ;
 int FUNC_2 (struct hinfc_host*,unsigned long,int ) ;
 int FUNC_3 (int *) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct hinfc_host *VAR_26, int VAR_27)
{
 struct nand_chip *VAR_28 = &VAR_26->chip;
 struct mtd_info *VAR_29 = FUNC_4(VAR_28);
 unsigned long VAR_30;
 int VAR_31;

 FUNC_2(VAR_26, VAR_26->dma_buffer, VAR_0);
 FUNC_2(VAR_26, VAR_26->dma_oob, VAR_1);

 if (VAR_28->ecc.mode == VAR_25) {
  FUNC_2(VAR_26, ((VAR_29->oobsize & VAR_14)
   << VAR_15), VAR_13);

  FUNC_2(VAR_26, VAR_19
   | VAR_22, VAR_16);
 } else {
  if (VAR_26->command == VAR_24)
   FUNC_2(VAR_26, VAR_22
   | VAR_21
   | VAR_20, VAR_16);
  else
   FUNC_2(VAR_26, VAR_19
   | VAR_22
   | VAR_18
   | VAR_21
   | VAR_17
   | VAR_20, VAR_16);

 }

 VAR_30 = (VAR_10 | VAR_5
  | VAR_6 | VAR_4
  | VAR_9 | VAR_11
  | ((VAR_26->addr_cycle == 4 ? 1 : 0)
   << VAR_3)
  | ((VAR_26->chipselect & VAR_7)
   << VAR_8));

 if (VAR_27)
  VAR_30 |= VAR_12;

 FUNC_3(&VAR_26->cmd_complete);

 FUNC_2(VAR_26, VAR_30, VAR_2);
 VAR_31 = FUNC_5(&VAR_26->cmd_complete,
   VAR_23);

 if (!VAR_31) {
  FUNC_0(VAR_26->dev, "DMA operation(irq) timeout!\n");

  VAR_30 = FUNC_1(VAR_26, VAR_2);
  if (!(VAR_30 & VAR_10))
   FUNC_0(VAR_26->dev, "DMA is already done but without irq ACK!\n");
  else
   FUNC_0(VAR_26->dev, "DMA is really timeout!\n");
 }
}
