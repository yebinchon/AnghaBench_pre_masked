
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_ecc_ctrl {int size; int bytes; } ;
struct nand_chip {int * oob_poi; int cur_cs; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {scalar_t__ writesize; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int const*,int,int const*,scalar_t__,int*,int,int) ;
 int FUNC_7 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_0,
       u32 VAR_1, u32 VAR_2,
       const u8 *VAR_3, int VAR_4,
       int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_3(VAR_0);
 struct nand_ecc_ctrl *VAR_7 = &VAR_0->ecc;
 int VAR_8, VAR_9, VAR_10 = 0;

 FUNC_7(VAR_0, VAR_0->cur_cs);

 FUNC_1(VAR_0, VAR_5, 0, ((void*)0), 0);

 FUNC_5(VAR_0);

 for (VAR_9 = VAR_1 / VAR_7->size;
      VAR_9 < FUNC_0(VAR_1 + VAR_2, VAR_7->size); VAR_9++) {
  int VAR_11 = VAR_9 * VAR_7->size;
  int VAR_12 = VAR_9 * (VAR_7->bytes + 4);
  const u8 *VAR_13 = VAR_3 + VAR_11;
  const u8 *VAR_14 = VAR_0->oob_poi + VAR_12;

  VAR_8 = FUNC_6(VAR_0, VAR_13, VAR_11, VAR_14,
         VAR_12 + VAR_6->writesize,
         &VAR_10, !VAR_9, VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_4(VAR_0);

 return FUNC_2(VAR_0);
}
