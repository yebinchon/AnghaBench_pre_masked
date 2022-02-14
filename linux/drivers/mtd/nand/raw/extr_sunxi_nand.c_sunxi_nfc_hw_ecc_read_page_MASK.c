
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct nand_ecc_ctrl {int steps; int size; int bytes; } ;
struct nand_chip {int * oob_poi; int cur_cs; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {scalar_t__ writesize; } ;


 int FUNC_0 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int *,int,int *,scalar_t__,int*,unsigned int*,int,int,int) ;
 int FUNC_5 (struct nand_chip*,int *,int*,int,int) ;
 int FUNC_6 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_0, uint8_t *VAR_1,
          int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_1(VAR_0);
 struct nand_ecc_ctrl *VAR_5 = &VAR_0->ecc;
 unsigned int VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9 = 0;
 bool VAR_10 = 0;

 FUNC_6(VAR_0, VAR_0->cur_cs);

 FUNC_0(VAR_0, VAR_3, 0, ((void*)0), 0);

 FUNC_3(VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_5->steps; VAR_8++) {
  int VAR_11 = VAR_8 * VAR_5->size;
  int VAR_12 = VAR_8 * (VAR_5->bytes + 4);
  u8 *VAR_13 = VAR_1 + VAR_11;
  u8 *VAR_14 = VAR_0->oob_poi + VAR_12;

  VAR_7 = FUNC_4(VAR_0, VAR_13, VAR_11, VAR_14,
        VAR_12 + VAR_4->writesize,
        &VAR_9, &VAR_6,
        !VAR_8, VAR_2, VAR_3);
  if (VAR_7 < 0)
   return VAR_7;
  else if (VAR_7)
   VAR_10 = 1;
 }

 if (VAR_2)
  FUNC_5(VAR_0, VAR_0->oob_poi, &VAR_9,
      !VAR_10, VAR_3);

 FUNC_2(VAR_0);

 return VAR_6;
}
