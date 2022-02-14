
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {int steps; int size; int bytes; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int writesize; } ;
struct denali_controller {int oob_skip_bytes; } ;


 int FUNC_0 (struct nand_chip*,int,void*,int,int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 struct denali_controller* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_0, void *VAR_1, bool VAR_2)
{
 struct denali_controller *VAR_3 = FUNC_2(VAR_0);
 struct mtd_info *VAR_4 = FUNC_1(VAR_0);
 struct nand_ecc_ctrl *VAR_5 = &VAR_0->ecc;
 int VAR_6 = VAR_4->writesize;
 int VAR_7 = VAR_3->oob_skip_bytes;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_5->steps; VAR_9++) {
  VAR_10 = VAR_9 * (VAR_5->size + VAR_5->bytes);
  VAR_11 = VAR_5->size;

  if (VAR_10 >= VAR_6) {
   VAR_10 += VAR_7;
  } else if (VAR_10 + VAR_11 > VAR_6) {

   VAR_8 = FUNC_0(VAR_0, VAR_10, VAR_1,
         VAR_6 - VAR_10, VAR_2);
   if (VAR_8)
    return VAR_8;

   VAR_1 += VAR_6 - VAR_10;
   VAR_11 -= VAR_6 - VAR_10;
   VAR_10 = VAR_6 + VAR_7;
  }

  VAR_8 = FUNC_0(VAR_0, VAR_10, VAR_1, VAR_11, VAR_2);
  if (VAR_8)
   return VAR_8;

  VAR_1 += VAR_11;
 }

 return 0;
}
