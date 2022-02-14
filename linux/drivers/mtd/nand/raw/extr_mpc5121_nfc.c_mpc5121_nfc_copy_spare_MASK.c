
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int oobsize; int writesize; } ;
struct mpc5121_nfc_prv {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (int,int) ;
 struct nand_chip* FUNC_4 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_1, uint VAR_2,
      u8 *VAR_3, uint VAR_4, int VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_4(VAR_1);
 struct mpc5121_nfc_prv *VAR_7 = FUNC_5(VAR_6);
 uint VAR_8, VAR_9, VAR_10, VAR_11;
 VAR_10 = (VAR_1->oobsize / (VAR_1->writesize / 512)) & ~1;

 while (VAR_4) {

  VAR_9 = VAR_2 / VAR_10;
  if (VAR_9 > VAR_0 - 1)
   VAR_9 = VAR_0 - 1;





  VAR_8 = VAR_2 - (VAR_9 * VAR_10);
  VAR_11 = FUNC_3(VAR_10 - VAR_8, VAR_4);

  if (VAR_5)
   FUNC_2(VAR_7->regs + FUNC_0(VAR_9) + VAR_8,
       VAR_3, VAR_11);
  else
   FUNC_1(VAR_3,
    VAR_7->regs + FUNC_0(VAR_9) + VAR_8, VAR_11);

  VAR_3 += VAR_11;
  VAR_2 += VAR_11;
  VAR_4 -= VAR_11;
 };
}
