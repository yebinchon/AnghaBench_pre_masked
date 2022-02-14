
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int size; int bytes; int steps; int total; int (* calculate ) (struct nand_chip*,int const*,int *) ;int (* hwctl ) (struct nand_chip*,int ) ;int * calc_buf; } ;
struct nand_chip {int const* oob_poi; TYPE_1__ ecc; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int *,int const*,int ,int ) ;
 int FUNC_1 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int const*,int,int) ;
 int FUNC_5 (struct nand_chip*,int ) ;
 int FUNC_6 (struct nand_chip*,int const*,int *) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_1, const uint8_t *VAR_2,
     int VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_3(VAR_1);
 int VAR_6, VAR_7 = VAR_1->ecc.size, VAR_8;
 int VAR_9 = VAR_1->ecc.bytes;
 int VAR_10 = VAR_1->ecc.steps;
 uint8_t *VAR_11 = VAR_1->ecc.calc_buf;
 const uint8_t *VAR_12 = VAR_2;

 VAR_8 = FUNC_1(VAR_1, VAR_4, 0, ((void*)0), 0);
 if (VAR_8)
  return VAR_8;

 for (VAR_6 = 0; VAR_10; VAR_10--, VAR_6 += VAR_9, VAR_12 += VAR_7) {
  VAR_1->ecc.hwctl(VAR_1, VAR_0);

  VAR_8 = FUNC_4(VAR_1, VAR_12, VAR_7, 0);
  if (VAR_8)
   return VAR_8;

  VAR_1->ecc.calculate(VAR_1, VAR_12, &VAR_11[VAR_6]);
 }

 VAR_8 = FUNC_0(VAR_5, VAR_11, VAR_1->oob_poi, 0,
      VAR_1->ecc.total);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_1, VAR_1->oob_poi, VAR_5->oobsize, 0);
 if (VAR_8)
  return VAR_8;

 return FUNC_2(VAR_1);
}
