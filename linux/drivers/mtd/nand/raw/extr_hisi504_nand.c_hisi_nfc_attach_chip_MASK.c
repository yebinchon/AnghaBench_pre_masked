
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; scalar_t__ oobsize; } ;
struct hinfc_host {int dev; int buffer; scalar_t__ dma_buffer; scalar_t__ dma_oob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,int ) ;
 int FUNC_2 (struct hinfc_host*,int ) ;
 int FUNC_3 (struct hinfc_host*,int,int ) ;
 int FUNC_4 (struct hinfc_host*) ;
 int FUNC_5 (int ,int,scalar_t__) ;
 struct hinfc_host* FUNC_6 (struct nand_chip*) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_7)
{
 struct mtd_info *VAR_8 = FUNC_7(VAR_7);
 struct hinfc_host *VAR_9 = FUNC_6(VAR_7);
 int VAR_10;

 VAR_9->buffer = FUNC_1(VAR_9->dev,
        VAR_8->writesize + VAR_8->oobsize,
        &VAR_9->dma_buffer, VAR_2);
 if (!VAR_9->buffer)
  return -VAR_1;

 VAR_9->dma_oob = VAR_9->dma_buffer + VAR_8->writesize;
 FUNC_5(VAR_9->buffer, 0xff, VAR_8->writesize + VAR_8->oobsize);

 VAR_10 = FUNC_2(VAR_9, VAR_3);
 VAR_10 &= ~(VAR_5 << VAR_4);
 switch (VAR_8->writesize) {
 case 2048:
  VAR_10 |= (0x001 << VAR_4);
  break;




 default:
  FUNC_0(VAR_9->dev, "NON-2KB page size nand flash\n");
  return -VAR_0;
 }
 FUNC_3(VAR_9, VAR_10, VAR_3);

 if (VAR_7->ecc.mode == VAR_6)
  FUNC_4(VAR_9);

 return 0;
}
