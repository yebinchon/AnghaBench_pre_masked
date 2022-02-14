
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct mpc5121_nfc_prv {int dev; int irq_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct mtd_info*,int ,int) ;
 int FUNC_4 (struct mtd_info*,int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_1(VAR_5);
 struct mpc5121_nfc_prv *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 if ((FUNC_4(VAR_5, VAR_1) & VAR_2) == 0) {
  FUNC_3(VAR_5, VAR_0, VAR_3);
  VAR_8 = FUNC_5(VAR_7->irq_waitq,
   (FUNC_4(VAR_5, VAR_1) & VAR_2), VAR_4);

  if (!VAR_8)
   FUNC_0(VAR_7->dev,
    "Timeout while waiting for interrupt.\n");
 }

 FUNC_3(VAR_5, VAR_1, VAR_2);
}
