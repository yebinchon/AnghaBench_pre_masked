
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxnas_nand_ctrl {scalar_t__ io_base; } ;
struct nand_chip {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct oxnas_nand_ctrl* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_4, int VAR_5,
    unsigned int VAR_6)
{
 struct oxnas_nand_ctrl *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6 & VAR_1)
  FUNC_1(VAR_5, VAR_7->io_base + VAR_3);
 else if (VAR_6 & VAR_0)
  FUNC_1(VAR_5, VAR_7->io_base + VAR_2);
}
