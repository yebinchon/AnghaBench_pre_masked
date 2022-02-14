
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct nand_chip {int * oob_poi; } ;
struct mtd_info {int writesize; } ;
struct lpc32xx_nand_host {int mlcsubpages; int io_base; int * dma_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* VAR_1 ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct mtd_info*,int *,int,int ) ;
 int FUNC_5 (int *,int const*,int ) ;
 struct lpc32xx_nand_host* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_8 (struct nand_chip*) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct nand_chip *VAR_3,
           const uint8_t *VAR_4, int VAR_5,
           int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_9(VAR_3);
 struct lpc32xx_nand_host *VAR_8 = FUNC_6(VAR_3);
 const uint8_t *VAR_9 = VAR_3->oob_poi;
 uint8_t *VAR_10 = (uint8_t *)VAR_4;
 int VAR_11;
 int VAR_12, VAR_13;

 if (VAR_2 && (void *)VAR_4 >= VAR_1) {
  VAR_10 = VAR_8->dma_buf;
  FUNC_5(VAR_10, VAR_4, VAR_7->writesize);
 }

 FUNC_7(VAR_3, VAR_6, 0, ((void*)0), 0);

 for (VAR_12 = 0; VAR_12 < VAR_8->mlcsubpages; VAR_12++) {

  FUNC_10(0x00, FUNC_2(VAR_8->io_base));


  if (VAR_2) {
   VAR_11 = FUNC_4(VAR_7, VAR_10 + VAR_12 * 512, 512,
            VAR_0);
   if (VAR_11)
    return VAR_11;
  } else {
   for (VAR_13 = 0; VAR_13 < (512 >> 2); VAR_13++) {
    FUNC_11(*((uint32_t *)(VAR_4)),
           FUNC_0(VAR_8->io_base));
    VAR_4 += 4;
   }
  }
  FUNC_11(*((uint32_t *)(VAR_9)), FUNC_0(VAR_8->io_base));
  VAR_9 += 4;
  FUNC_12(*((uint16_t *)(VAR_9)), FUNC_0(VAR_8->io_base));
  VAR_9 += 12;


  FUNC_10(0x00, FUNC_1(VAR_8->io_base));


  FUNC_3(VAR_3);
 }

 return FUNC_8(VAR_3);
}
