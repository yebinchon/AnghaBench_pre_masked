
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct mpc5121_nfc_prv {int irq_waitq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct mtd_info*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct mtd_info *VAR_5 = VAR_4;
 struct nand_chip *VAR_6 = FUNC_0(VAR_5);
 struct mpc5121_nfc_prv *VAR_7 = FUNC_1(VAR_6);

 FUNC_2(VAR_5, VAR_1, VAR_2);
 FUNC_3(&VAR_7->irq_waitq);

 return VAR_0;
}
