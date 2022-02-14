
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxnas_nand_ctrl {int io_base; } ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (int ,int const*,int) ;
 struct oxnas_nand_ctrl* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0, const u8 *VAR_1,
     int VAR_2)
{
 struct oxnas_nand_ctrl *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->io_base, VAR_1, VAR_2);
}
