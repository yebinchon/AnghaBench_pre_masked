
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int steps; int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct TYPE_4__ {int parent; } ;
struct mtd_info {int writesize; TYPE_2__ dev; } ;
struct lpc32xx_nand_host {int* data_buf; int* ecc_buf; int io_base; int dma_chan; int io_base_dma; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 void* VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_10 (struct mtd_info*,int ,int*,int,int) ;
 int FUNC_11 (int*,int*,int) ;
 unsigned long FUNC_12 (int ) ;
 struct nand_chip* FUNC_13 (struct mtd_info*) ;
 struct lpc32xx_nand_host* FUNC_14 (struct nand_chip*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (unsigned long,unsigned long) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int,int ) ;

__attribute__((used)) static int FUNC_19(struct mtd_info *VAR_13, uint8_t *VAR_14, int VAR_15,
   int VAR_16)
{
 struct nand_chip *VAR_17 = FUNC_13(VAR_13);
 struct lpc32xx_nand_host *VAR_18 = FUNC_14(VAR_17);
 int VAR_19, VAR_20 = 0;
 unsigned long VAR_21;
 int VAR_22;
 enum dma_transfer_direction VAR_23 =
  VAR_16 ? VAR_0 : VAR_1;
 uint8_t *VAR_24;
 bool VAR_25;

 if ((void *)VAR_14 <= VAR_11) {
  VAR_24 = VAR_14;
  VAR_25 = 1;
 } else {
  VAR_24 = VAR_18->data_buf;
  VAR_25 = 0;
  if (!VAR_16)
   FUNC_11(VAR_18->data_buf, VAR_14, VAR_13->writesize);
 }

 if (VAR_16) {
  FUNC_18(FUNC_15(FUNC_0(VAR_18->io_base)) |
         VAR_5 | VAR_7 | VAR_6 |
         VAR_4, FUNC_0(VAR_18->io_base));
 } else {
  FUNC_18((FUNC_15(FUNC_0(VAR_18->io_base)) |
   VAR_7 | VAR_6 | VAR_4) &
         ~VAR_5,
   FUNC_0(VAR_18->io_base));
 }


 FUNC_18(VAR_9, FUNC_1(VAR_18->io_base));


 FUNC_18(VAR_13->writesize, FUNC_5(VAR_18->io_base));


 FUNC_18(FUNC_15(FUNC_1(VAR_18->io_base)) | VAR_8,
        FUNC_1(VAR_18->io_base));

 for (VAR_19 = 0; VAR_19 < VAR_17->ecc.steps; VAR_19++) {

  VAR_22 = FUNC_10(VAR_13, FUNC_2(VAR_18->io_base_dma),
           VAR_24 + VAR_19 * VAR_17->ecc.size,
           VAR_13->writesize / VAR_17->ecc.steps, VAR_23);
  if (VAR_22)
   return VAR_22;


  if (VAR_19 == VAR_17->ecc.steps - 1)
   break;
  if (!VAR_16)
   FUNC_17(10);
  VAR_22 = FUNC_10(VAR_13, FUNC_3(VAR_18->io_base_dma),
           &VAR_18->ecc_buf[VAR_19], 4, VAR_0);
  if (VAR_22)
   return VAR_22;
 }
 if (FUNC_15(FUNC_4(VAR_18->io_base)) & VAR_10) {
  FUNC_8(VAR_13->dev.parent, "FIFO not empty!\n");
  VAR_21 = VAR_12 + FUNC_12(VAR_3);
  while ((FUNC_15(FUNC_4(VAR_18->io_base)) & VAR_10) &&
         FUNC_16(VAR_12, VAR_21))
   FUNC_6();
  if (!FUNC_16(VAR_12, VAR_21)) {
   FUNC_7(VAR_13->dev.parent, "FIFO held data too long\n");
   VAR_20 = -VAR_2;
  }
 }


 if (!VAR_16)
  FUNC_17(10);
 VAR_18->ecc_buf[VAR_17->ecc.steps - 1] =
  FUNC_15(FUNC_3(VAR_18->io_base));


 FUNC_9(VAR_18->dma_chan);

 if (FUNC_15(FUNC_4(VAR_18->io_base)) & VAR_10 ||
     FUNC_15(FUNC_5(VAR_18->io_base))) {

  FUNC_7(VAR_13->dev.parent, "DMA FIFO failure\n");
  VAR_20 = -VAR_2;
 }


 FUNC_18(FUNC_15(FUNC_1(VAR_18->io_base)) & ~VAR_8,
        FUNC_1(VAR_18->io_base));
 FUNC_18(FUNC_15(FUNC_0(VAR_18->io_base)) &
        ~(VAR_5 | VAR_7 | VAR_6 |
   VAR_4), FUNC_0(VAR_18->io_base));

 if (!VAR_25 && VAR_16)
  FUNC_11(VAR_14, VAR_18->data_buf, VAR_13->writesize);

 return VAR_20;
}
