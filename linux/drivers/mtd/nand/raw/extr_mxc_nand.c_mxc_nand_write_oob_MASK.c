
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mxc_nand_host {int data_buf; } ;
struct mtd_info {int writesize; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct nand_chip*,int ,int,int) ;
 struct mxc_nand_host* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_3(VAR_0);
 struct mxc_nand_host *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_3->data_buf, 0xff, VAR_2->writesize);

 return FUNC_1(VAR_0, VAR_3->data_buf, 0, VAR_1);
}
