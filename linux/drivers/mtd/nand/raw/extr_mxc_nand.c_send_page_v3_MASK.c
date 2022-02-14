
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nand_chip {int dummy; } ;
struct mxc_nand_host {int dummy; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mxc_nand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mxc_nand_host*,int) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_2, unsigned int VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_2);
 struct mxc_nand_host *VAR_5 = FUNC_1(VAR_4);
 uint32_t VAR_6;

 VAR_6 = FUNC_2(VAR_0);
 VAR_6 &= ~(7 << 4);
 FUNC_4(VAR_6, VAR_0);


 FUNC_4(VAR_3, VAR_1);

 FUNC_3(VAR_5, 0);
}
