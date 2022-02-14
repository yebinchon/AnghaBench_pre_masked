
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_2__ {int size; int bytes; int steps; int prepad; int postpad; int (* calculate ) (struct nand_chip*,int const*,int const*) ;int (* hwctl ) (struct nand_chip*,int ) ;} ;
struct nand_chip {int const* oob_poi; TYPE_1__ ecc; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_1 (struct nand_chip*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int const*,int,int) ;
 int FUNC_4 (struct nand_chip*,int ) ;
 int FUNC_5 (struct nand_chip*,int const*,int const*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_1, const uint8_t *VAR_2,
        int VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_2(VAR_1);
 int VAR_6, VAR_7 = VAR_1->ecc.size;
 int VAR_8 = VAR_1->ecc.bytes;
 int VAR_9 = VAR_1->ecc.steps;
 const uint8_t *VAR_10 = VAR_2;
 uint8_t *VAR_11 = VAR_1->oob_poi;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_1, VAR_4, 0, ((void*)0), 0);
 if (VAR_12)
  return VAR_12;

 for (VAR_6 = 0; VAR_9; VAR_9--, VAR_6 += VAR_8, VAR_10 += VAR_7) {
  VAR_1->ecc.hwctl(VAR_1, VAR_0);

  VAR_12 = FUNC_3(VAR_1, VAR_10, VAR_7, 0);
  if (VAR_12)
   return VAR_12;

  if (VAR_1->ecc.prepad) {
   VAR_12 = FUNC_3(VAR_1, VAR_11, VAR_1->ecc.prepad,
       0);
   if (VAR_12)
    return VAR_12;

   VAR_11 += VAR_1->ecc.prepad;
  }

  VAR_1->ecc.calculate(VAR_1, VAR_10, VAR_11);

  VAR_12 = FUNC_3(VAR_1, VAR_11, VAR_8, 0);
  if (VAR_12)
   return VAR_12;

  VAR_11 += VAR_8;

  if (VAR_1->ecc.postpad) {
   VAR_12 = FUNC_3(VAR_1, VAR_11, VAR_1->ecc.postpad,
       0);
   if (VAR_12)
    return VAR_12;

   VAR_11 += VAR_1->ecc.postpad;
  }
 }


 VAR_6 = VAR_5->oobsize - (VAR_11 - VAR_1->oob_poi);
 if (VAR_6) {
  VAR_12 = FUNC_3(VAR_1, VAR_11, VAR_6, 0);
  if (VAR_12)
   return VAR_12;
 }

 return FUNC_1(VAR_1);
}
