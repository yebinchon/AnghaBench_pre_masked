
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bytes; int size; int steps; int strength; } ;
struct nand_chip {TYPE_1__ ecc; int * oob_poi; } ;
struct TYPE_4__ {int corrected; int failed; } ;
struct mtd_info {TYPE_2__ ecc_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int const,int *,int const,int *,int,int ) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2, u8 *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_2(VAR_2);
 u8 *VAR_5 = VAR_2->oob_poi + VAR_0;
 u8 *VAR_6 = VAR_2->oob_poi + VAR_0 + VAR_1;
 const int VAR_7 = VAR_2->ecc.bytes;
 const int VAR_8 = VAR_2->ecc.size;
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_2->ecc.steps; ++VAR_9) {
  VAR_11 = VAR_9 ? 0 : VAR_1;
  VAR_10 = FUNC_1(VAR_3, VAR_8, VAR_6, VAR_7,
        VAR_5, VAR_11,
        VAR_2->ecc.strength);
  if (VAR_10 < 0)
   VAR_4->ecc_stats.failed++;
  else
   VAR_4->ecc_stats.corrected += VAR_10;

  VAR_12 = FUNC_0(VAR_10, VAR_12);
  VAR_3 += VAR_8;
  VAR_6 += VAR_7;
 }

 return VAR_12;
}
