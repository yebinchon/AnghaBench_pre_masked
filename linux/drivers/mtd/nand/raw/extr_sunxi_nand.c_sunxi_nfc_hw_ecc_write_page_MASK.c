
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct nand_ecc_ctrl {int steps; int size; int bytes; } ;
struct nand_chip {int options; int * oob_poi; int cur_cs; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {scalar_t__ writesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_1 (struct nand_chip*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int const*,int,int const*,scalar_t__,int*,int,int) ;
 int FUNC_6 (struct nand_chip*,int *,int*,int) ;
 int FUNC_7 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_1,
           const uint8_t *VAR_2, int VAR_3,
           int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_2(VAR_1);
 struct nand_ecc_ctrl *VAR_6 = &VAR_1->ecc;
 int VAR_7, VAR_8, VAR_9 = 0;

 FUNC_7(VAR_1, VAR_1->cur_cs);

 FUNC_0(VAR_1, VAR_4, 0, ((void*)0), 0);

 FUNC_4(VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_6->steps; VAR_8++) {
  int VAR_10 = VAR_8 * VAR_6->size;
  int VAR_11 = VAR_8 * (VAR_6->bytes + 4);
  const u8 *VAR_12 = VAR_2 + VAR_10;
  const u8 *VAR_13 = VAR_1->oob_poi + VAR_11;

  VAR_7 = FUNC_5(VAR_1, VAR_12, VAR_10, VAR_13,
         VAR_11 + VAR_5->writesize,
         &VAR_9, !VAR_8, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 if (VAR_3 || (VAR_1->options & VAR_0))
  FUNC_6(VAR_1, VAR_1->oob_poi,
       &VAR_9, VAR_4);

 FUNC_3(VAR_1);

 return FUNC_1(VAR_1);
}
