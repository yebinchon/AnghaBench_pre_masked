
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int * oob_poi; int controller; } ;
struct mtd_info {scalar_t__ oobsize; scalar_t__ writesize; } ;
struct TYPE_3__ {scalar_t__ virt; int dma; } ;
struct TYPE_4__ {scalar_t__ dmac; } ;
struct atmel_hsmc_nand_controller {TYPE_1__ sram; TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 struct atmel_hsmc_nand_controller* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_2, u8 *VAR_3,
         bool VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_2(VAR_2);
 struct atmel_hsmc_nand_controller *VAR_6;
 int VAR_7 = -VAR_1;

 VAR_6 = FUNC_3(VAR_2->controller);

 if (VAR_6->base.dmac)
  VAR_7 = FUNC_0(&VAR_6->base, VAR_3, VAR_6->sram.dma,
           VAR_5->writesize, VAR_0);


 if (VAR_7)
  FUNC_1(VAR_3, VAR_6->sram.virt, VAR_5->writesize);

 if (VAR_4)
  FUNC_1(VAR_2->oob_poi, VAR_6->sram.virt + VAR_5->writesize,
         VAR_5->oobsize);
}
