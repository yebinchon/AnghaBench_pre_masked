
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int size; int bytes; int steps; int total; int const* calc_buf; int (* calculate ) (struct nand_chip*,int const*,int const*) ;int (* hwctl ) (struct nand_chip*,int ) ;} ;
struct nand_chip {int const* oob_poi; TYPE_1__ ecc; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int,int) ;
 int FUNC_1 (struct mtd_info*,int const*,int const*,int ,int ) ;
 int FUNC_2 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int const*,int,int) ;
 int FUNC_6 (struct nand_chip*,int ) ;
 int FUNC_7 (struct nand_chip*,int const*,int const*) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_1, uint32_t VAR_2,
        uint32_t VAR_3, const uint8_t *VAR_4,
        int VAR_5, int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_4(VAR_1);
 uint8_t *VAR_8 = VAR_1->oob_poi;
 uint8_t *VAR_9 = VAR_1->ecc.calc_buf;
 int VAR_10 = VAR_1->ecc.size;
 int VAR_11 = VAR_1->ecc.bytes;
 int VAR_12 = VAR_1->ecc.steps;
 uint32_t VAR_13 = VAR_2 / VAR_10;
 uint32_t VAR_14 = (VAR_2 + VAR_3 - 1) / VAR_10;
 int VAR_15 = VAR_7->oobsize / VAR_12;
 int VAR_16, VAR_17;

 VAR_17 = FUNC_2(VAR_1, VAR_6, 0, ((void*)0), 0);
 if (VAR_17)
  return VAR_17;

 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {

  VAR_1->ecc.hwctl(VAR_1, VAR_0);


  VAR_17 = FUNC_5(VAR_1, VAR_4, VAR_10, 0);
  if (VAR_17)
   return VAR_17;


  if ((VAR_16 < VAR_13) || (VAR_16 > VAR_14))
   FUNC_0(VAR_9, 0xff, VAR_11);
  else
   VAR_1->ecc.calculate(VAR_1, VAR_4, VAR_9);



  if (!VAR_5 || (VAR_16 < VAR_13) || (VAR_16 > VAR_14))
   FUNC_0(VAR_8, 0xff, VAR_15);

  VAR_4 += VAR_10;
  VAR_9 += VAR_11;
  VAR_8 += VAR_15;
 }



 VAR_9 = VAR_1->ecc.calc_buf;
 VAR_17 = FUNC_1(VAR_7, VAR_9, VAR_1->oob_poi, 0,
      VAR_1->ecc.total);
 if (VAR_17)
  return VAR_17;


 VAR_17 = FUNC_5(VAR_1, VAR_1->oob_poi, VAR_7->oobsize, 0);
 if (VAR_17)
  return VAR_17;

 return FUNC_3(VAR_1);
}
