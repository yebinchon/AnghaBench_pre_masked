
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nand_chip {int dummy; } ;
struct lpc32xx_nand_host {int io_base; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct lpc32xx_nand_host* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_4, int VAR_5,
      unsigned int VAR_6)
{
 uint32_t VAR_7;
 struct lpc32xx_nand_host *VAR_8 = FUNC_3(VAR_4);


 VAR_7 = FUNC_4(FUNC_1(VAR_8->io_base));
 if (VAR_6 & VAR_2)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~VAR_3;
 FUNC_5(VAR_7, FUNC_1(VAR_8->io_base));

 if (VAR_5 != VAR_1) {
  if (VAR_6 & VAR_0)
   FUNC_5(VAR_5, FUNC_2(VAR_8->io_base));
  else
   FUNC_5(VAR_5, FUNC_0(VAR_8->io_base));
 }
}
