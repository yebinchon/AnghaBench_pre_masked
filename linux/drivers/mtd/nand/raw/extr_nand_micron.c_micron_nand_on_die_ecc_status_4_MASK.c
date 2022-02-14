
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {unsigned int steps; unsigned int size; int bytes; unsigned int strength; } ;
struct nand_chip {int* oob_poi; TYPE_2__ ecc; } ;
struct TYPE_6__ {unsigned int corrected; int failed; } ;
struct mtd_info {int oobsize; int writesize; TYPE_3__ ecc_stats; } ;
struct TYPE_4__ {int* rawbuf; } ;
struct micron_nand {TYPE_1__ ecc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct nand_chip*,int) ;
 struct micron_nand* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int*,int,int) ;
 int FUNC_6 (struct nand_chip*,int,int ,int*,int) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_3, u8 VAR_4,
        void *VAR_5, int VAR_6,
        int VAR_7)
{
 struct micron_nand *VAR_8 = FUNC_4(VAR_3);
 struct mtd_info *VAR_9 = FUNC_7(VAR_3);
 unsigned int VAR_10, VAR_11 = 0;
 int VAR_12;

 if (!(VAR_4 & VAR_1)) {
  if (VAR_4 & VAR_2)
   VAR_9->ecc_stats.failed++;

  return 0;
 }
 if (!VAR_7) {
  VAR_12 = FUNC_5(VAR_3, VAR_3->oob_poi, VAR_9->oobsize,
     0);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_3(VAR_3, 0);

 VAR_12 = FUNC_6(VAR_3, VAR_6, 0, VAR_8->ecc.rawbuf,
    VAR_9->writesize + VAR_9->oobsize);
 if (VAR_12)
  return VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_3->ecc.steps; VAR_10++) {
  unsigned int VAR_13, VAR_14, VAR_15 = 0;
  u8 *VAR_16, *VAR_17;

  VAR_13 = VAR_10 * VAR_3->ecc.size;
  VAR_16 = VAR_8->ecc.rawbuf + VAR_13;
  VAR_17 = VAR_5 + VAR_13;

  for (VAR_14 = 0; VAR_14 < VAR_3->ecc.size; VAR_14++)
   VAR_15 += FUNC_1(VAR_17[VAR_14] ^ VAR_16[VAR_14]);

  VAR_13 = (VAR_10 * 16) + 4;
  VAR_16 = VAR_8->ecc.rawbuf + VAR_9->writesize + VAR_13;
  VAR_17 = VAR_3->oob_poi + VAR_13;

  for (VAR_14 = 0; VAR_14 < VAR_3->ecc.bytes + 4; VAR_14++)
   VAR_15 += FUNC_1(VAR_17[VAR_14] ^ VAR_16[VAR_14]);

  if (FUNC_0(VAR_15 > VAR_3->ecc.strength))
   return -VAR_0;

  VAR_11 = FUNC_2(VAR_15, VAR_11);
  VAR_9->ecc_stats.corrected += VAR_15;
 }

 return VAR_11;
}
