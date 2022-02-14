
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mxc_nand_host {int eccsize; TYPE_2__* devtype_data; } ;
struct mtd_info {scalar_t__ writesize; } ;
struct TYPE_4__ {int irqpending_quirk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mxc_nand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_8)
{
 struct nand_chip *VAR_9 = FUNC_0(VAR_8);
 struct mxc_nand_host *VAR_10 = FUNC_1(VAR_9);
 uint16_t VAR_11 = 0;

 if (VAR_9->ecc.mode == VAR_0 && VAR_8->writesize)
  VAR_11 |= VAR_5;

 if (!VAR_10->devtype_data->irqpending_quirk)
  VAR_11 |= VAR_6;

 VAR_10->eccsize = 1;

 FUNC_2(VAR_11, VAR_4);



 FUNC_2(0x2, VAR_3);


 FUNC_2(0x0, VAR_2);
 FUNC_2(0xffff, VAR_1);


 FUNC_2(0x4, VAR_7);
}
