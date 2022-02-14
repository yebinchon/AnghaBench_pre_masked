
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bytes; int size; int steps; int strength; } ;
struct nand_chip {TYPE_1__ ecc; int * oob_poi; } ;
struct mtd_oob_region {int offset; } ;
struct TYPE_4__ {int corrected; int failed; } ;
struct mtd_info {TYPE_2__ ecc_stats; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 int FUNC_2 (int *,int const,int *,int const,int *,int ,int ) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, u8 *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_3(VAR_0);
 u8 *VAR_3 = VAR_0->oob_poi;
 const int VAR_4 = VAR_0->ecc.bytes;
 const int VAR_5 = VAR_0->ecc.size;
 int VAR_6, VAR_7, VAR_8 = 0;
 struct mtd_oob_region VAR_9 = { };

 FUNC_1(VAR_2, 0, &VAR_9);
 VAR_3 += VAR_9.offset;

 for (VAR_6 = 0; VAR_6 < VAR_0->ecc.steps; ++VAR_6) {
  VAR_7 = FUNC_2(VAR_1, VAR_5, VAR_3, VAR_4,
        ((void*)0), 0,
        VAR_0->ecc.strength);
  if (VAR_7 < 0)
   VAR_2->ecc_stats.failed++;
  else
   VAR_2->ecc_stats.corrected += VAR_7;

  VAR_8 = FUNC_0(VAR_7, VAR_8);
  VAR_1 += VAR_5;
  VAR_3 += VAR_4;
 }

 return VAR_8;
}
