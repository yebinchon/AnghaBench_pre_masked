
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int (* write_buf ) (struct nand_chip*,int const*,int ) ;} ;
struct TYPE_3__ {int size; int bytes; int steps; int total; int * calc_buf; int (* hwctl ) (struct nand_chip*,int ) ;} ;
struct nand_chip {int const* oob_poi; TYPE_2__ legacy; TYPE_1__ ecc; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int const*,int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct mtd_info*,int *,int const*,int ,int ) ;
 int FUNC_3 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_4 (struct nand_chip*) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int ) ;
 int FUNC_7 (struct nand_chip*,int const*,int ) ;
 int FUNC_8 (struct nand_chip*,int const*,int ) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_1, u32 VAR_2,
      u32 VAR_3, const u8 *VAR_4,
      int VAR_5, int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_5(VAR_1);
 u8 *VAR_8 = VAR_1->ecc.calc_buf;
 int VAR_9 = VAR_1->ecc.size;
 int VAR_10 = VAR_1->ecc.bytes;
 int VAR_11 = VAR_1->ecc.steps;
 u32 VAR_12 = VAR_2 / VAR_9;
 u32 VAR_13 = (VAR_2 + VAR_3 - 1) / VAR_9;
 int VAR_14, VAR_15 = 0;







 FUNC_3(VAR_1, VAR_6, 0, ((void*)0), 0);


 VAR_1->ecc.hwctl(VAR_1, VAR_0);


 VAR_1->legacy.write_buf(VAR_1, VAR_4, VAR_7->writesize);

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {

  if (VAR_14 < VAR_12 || VAR_14 > VAR_13)
   FUNC_1(VAR_8, 0xff, VAR_10);
  else
   VAR_15 = FUNC_0(VAR_7, VAR_4, VAR_8, VAR_14);

  if (VAR_15)
   return VAR_15;

  VAR_4 += VAR_9;
  VAR_8 += VAR_10;
 }



 VAR_8 = VAR_1->ecc.calc_buf;
 VAR_15 = FUNC_2(VAR_7, VAR_8, VAR_1->oob_poi, 0,
      VAR_1->ecc.total);
 if (VAR_15)
  return VAR_15;


 VAR_1->legacy.write_buf(VAR_1, VAR_1->oob_poi, VAR_7->oobsize);

 return FUNC_4(VAR_1);
}
