
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int oob_poi; } ;
struct mtd_info {int oobsize; } ;
struct hinfc_host {int irq_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hinfc_host* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int,int ,int ,int ) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_2(VAR_2);
 struct hinfc_host *VAR_5 = FUNC_0(VAR_2);

 FUNC_1(VAR_2, VAR_3, 0, VAR_2->oob_poi, VAR_4->oobsize);

 if (VAR_5->irq_status & VAR_1) {
  VAR_5->irq_status = 0;
  return -VAR_0;
 }

 VAR_5->irq_status = 0;
 return 0;
}
