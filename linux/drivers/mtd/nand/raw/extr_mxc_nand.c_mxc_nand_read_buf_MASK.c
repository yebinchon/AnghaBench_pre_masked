
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u16 ;
struct nand_chip {int dummy; } ;
struct mxc_nand_host {int buf_start; int data_buf; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int,int) ;
 struct mxc_nand_host* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_0, u_char *VAR_1,
         int VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_3(VAR_0);
 struct mxc_nand_host *VAR_4 = FUNC_2(VAR_0);
 u16 VAR_5 = VAR_4->buf_start;
 int VAR_6 = VAR_3->oobsize + VAR_3->writesize - VAR_5;

 VAR_6 = FUNC_1(VAR_6, VAR_2);

 FUNC_0(VAR_1, VAR_4->data_buf + VAR_5, VAR_6);

 VAR_4->buf_start += VAR_6;
}
