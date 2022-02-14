
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u_char ;
struct nand_chip {int dummy; } ;
struct mtd_info {scalar_t__ writesize; } ;
struct mpc5121_nfc_prv {scalar_t__ column; scalar_t__ regs; scalar_t__ spareonly; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mtd_info*,scalar_t__,int *,int,int) ;
 struct nand_chip* FUNC_5 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_7(struct mtd_info *VAR_0, u_char *VAR_1, int VAR_2,
         int VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_5(VAR_0);
 struct mpc5121_nfc_prv *VAR_5 = FUNC_6(VAR_4);
 uint VAR_6 = VAR_5->column;
 uint VAR_7;


 if (VAR_5->spareonly || VAR_6 >= VAR_0->writesize) {

  if (VAR_6 >= VAR_0->writesize)
   VAR_6 -= VAR_0->writesize;

  VAR_5->column += VAR_2;
  FUNC_4(VAR_0, VAR_6, VAR_1, VAR_2, VAR_3);
  return;
 }





 VAR_7 = FUNC_3((uint)VAR_2, VAR_0->writesize - VAR_6);
 VAR_5->column += VAR_7;

 if (VAR_3)
  FUNC_2(VAR_5->regs + FUNC_0(0) + VAR_6, VAR_1, VAR_7);
 else
  FUNC_1(VAR_1, VAR_5->regs + FUNC_0(0) + VAR_6, VAR_7);


 if (VAR_7 != VAR_2) {
  VAR_1 += VAR_7;
  VAR_2 -= VAR_7;
  FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
