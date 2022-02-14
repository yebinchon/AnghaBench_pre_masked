
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mxc_nand_host {int active_cs; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mxc_nand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct mxc_nand_host*,int) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_2, unsigned int VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_2);
 struct mxc_nand_host *VAR_5 = FUNC_1(VAR_4);
 int VAR_6, VAR_7;

 if (VAR_2->writesize > 512)
  VAR_6 = 4;
 else
  VAR_6 = 1;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {


  FUNC_3((VAR_5->active_cs << 4) | VAR_7, VAR_0);

  FUNC_3(VAR_3, VAR_1);


  FUNC_2(VAR_5, 1);
 }
}
