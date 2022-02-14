
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_2__ {int size; int bytes; int steps; int prepad; int postpad; } ;
struct nand_chip {int const* oob_poi; TYPE_1__ ecc; } ;
struct mtd_info {int oobsize; } ;


 int FUNC_0 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_1 (struct nand_chip*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int const*,int,int) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0,
     const uint8_t *VAR_1, int VAR_2,
     int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_2(VAR_0);
 int VAR_5 = VAR_0->ecc.size;
 int VAR_6 = VAR_0->ecc.bytes;
 uint8_t *VAR_7 = VAR_0->oob_poi;
 int VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_0(VAR_0, VAR_3, 0, ((void*)0), 0);
 if (VAR_10)
  return VAR_10;

 for (VAR_8 = VAR_0->ecc.steps; VAR_8 > 0; VAR_8--) {
  VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_5, 0);
  if (VAR_10)
   return VAR_10;

  VAR_1 += VAR_5;

  if (VAR_0->ecc.prepad) {
   VAR_10 = FUNC_3(VAR_0, VAR_7, VAR_0->ecc.prepad,
       0);
   if (VAR_10)
    return VAR_10;

   VAR_7 += VAR_0->ecc.prepad;
  }

  VAR_10 = FUNC_3(VAR_0, VAR_7, VAR_6, 0);
  if (VAR_10)
   return VAR_10;

  VAR_7 += VAR_6;

  if (VAR_0->ecc.postpad) {
   VAR_10 = FUNC_3(VAR_0, VAR_7, VAR_0->ecc.postpad,
       0);
   if (VAR_10)
    return VAR_10;

   VAR_7 += VAR_0->ecc.postpad;
  }
 }

 VAR_9 = VAR_4->oobsize - (VAR_7 - VAR_0->oob_poi);
 if (VAR_9) {
  VAR_10 = FUNC_3(VAR_0, VAR_7, VAR_9, 0);
  if (VAR_10)
   return VAR_10;
 }

 return FUNC_1(VAR_0);
}
