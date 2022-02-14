
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int (* write_buf ) (struct nand_chip*,int *,int ) ;} ;
struct TYPE_3__ {int steps; } ;
struct nand_chip {int * oob_poi; TYPE_2__ legacy; TYPE_1__ ecc; } ;
struct mtd_oob_region {int offset; } ;
struct mtd_info {int oobsize; } ;
struct lpc32xx_nand_host {scalar_t__ ecc_buf; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct mtd_info*,int *,int ,int ) ;
 int FUNC_2 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 struct lpc32xx_nand_host* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_5 (struct nand_chip*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_0,
         const uint8_t *VAR_1,
         int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_6(VAR_0);
 struct lpc32xx_nand_host *VAR_5 = FUNC_3(VAR_0);
 struct mtd_oob_region VAR_6 = { };
 uint8_t *VAR_7;
 int VAR_8;

 FUNC_4(VAR_0, VAR_3, 0, ((void*)0), 0);


 VAR_8 = FUNC_1(VAR_4, (uint8_t *)VAR_1, VAR_0->ecc.steps, 0);
 if (VAR_8)
  return VAR_8;





 VAR_8 = FUNC_2(VAR_4, 0, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = VAR_0->oob_poi + VAR_6.offset;
 FUNC_0(VAR_7, (uint32_t *)VAR_5->ecc_buf, VAR_0->ecc.steps);


 VAR_0->legacy.write_buf(VAR_0, VAR_0->oob_poi, VAR_4->oobsize);

 return FUNC_5(VAR_0);
}
