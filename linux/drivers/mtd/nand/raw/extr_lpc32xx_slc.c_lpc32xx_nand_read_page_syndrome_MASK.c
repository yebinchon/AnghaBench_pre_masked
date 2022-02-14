
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int steps; int (* correct ) (struct nand_chip*,int *,int *,int *) ;int bytes; int size; } ;
struct TYPE_4__ {int (* read_buf ) (struct nand_chip*,int *,int ) ;} ;
struct nand_chip {TYPE_3__ ecc; int * oob_poi; TYPE_1__ legacy; } ;
struct mtd_oob_region {int offset; } ;
struct TYPE_5__ {int corrected; int failed; } ;
struct mtd_info {TYPE_2__ ecc_stats; int oobsize; } ;
struct lpc32xx_nand_host {scalar_t__ ecc_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct mtd_info*,int *,int,int) ;
 int FUNC_2 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 struct lpc32xx_nand_host* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int *,int ) ;
 int FUNC_7 (struct nand_chip*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_1, uint8_t *VAR_2,
        int VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_5(VAR_1);
 struct lpc32xx_nand_host *VAR_6 = FUNC_3(VAR_1);
 struct mtd_oob_region VAR_7 = { };
 int VAR_8, VAR_9, VAR_10, VAR_11;
 uint8_t *VAR_12, VAR_13[VAR_0];


 FUNC_4(VAR_1, VAR_4, 0, ((void*)0), 0);


 VAR_10 = FUNC_1(VAR_5, VAR_2, VAR_1->ecc.steps, 1);


 VAR_1->legacy.read_buf(VAR_1, VAR_1->oob_poi, VAR_5->oobsize);


 FUNC_0(VAR_13, (uint32_t *) VAR_6->ecc_buf, VAR_1->ecc.steps);


 VAR_11 = FUNC_2(VAR_5, 0, &VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_12 = VAR_1->oob_poi + VAR_7.offset;

 for (VAR_9 = 0; VAR_9 < VAR_1->ecc.steps; VAR_9++) {
  VAR_8 = VAR_1->ecc.correct(VAR_1, VAR_2, VAR_12,
      &VAR_13[VAR_9 * VAR_1->ecc.bytes]);
  if (VAR_8 < 0)
   VAR_5->ecc_stats.failed++;
  else
   VAR_5->ecc_stats.corrected += VAR_8;

  VAR_2 += VAR_1->ecc.size;
  VAR_12 += VAR_1->ecc.bytes;
 }

 return VAR_10;
}
